#ifndef _DRINKS_H_
#define _DRINKS_H_
#include "Ingredients.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Drinks{
private:
	string _name;
	int NumofIngs;
	vector<Ingredients> ingList;
	int check;
public:
	
	void setName(string name){ _name = name; };
	string getName(){ return _name; };
	vector<Ingredients> getIngredients(){ return ingList; };
	void setIngredients(vector<Ingredients> vect){ ingList = vect; };

	void mix(Drinks drk){
		cout << drk.getName() << " requires the following:\n";
		for (int i = 0; i < drk.getIngredients().size(); i++) // Iterate through IngList
			cout << drk.getIngredients().at(i).getAmtNeed() << "oz of " << drk.getIngredients().at(i).getName() << endl;
	};
	void setCheck(int chk){ check = chk; }
	int getCheck(){ return check; }
};


class AdultBev : public Drinks{
public:

	bool Underage(){
		int age;
		cout << "Enter your age please.\n";
		cin >> age;
		if (age < 21){ return true; }
		else return false;
	};

	void mix(AdultBev Ab){
		if (!Underage()){
			cout << Ab.getName() << " requires the following:\n";
			for (int i = 0; i < Ab.getIngredients().size(); i++)
				cout << Ab.getIngredients().at(i).getAmtNeed() << "oz of " << Ab.getIngredients().at(i).getName() << endl;
		}
		else cout << "You are too young for this drink. Try our wonderful Coca Cola!\n";
	}; // Cout ingredients and amount needed
};



#endif