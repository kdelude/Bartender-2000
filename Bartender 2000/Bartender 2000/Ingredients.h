#ifndef _INGREDIENTS_H_
#define _INGREDIENTS_H_
#include<string>
#include<vector>
using namespace std;

class Ingredients{
private:
	string _nm;
	double _amtNeeded;
public:

	void setName(string name){ _nm = name; };
	string getName(){ return _nm; };
	void setAmtNeed(double amtn){ _amtNeeded = amtn; };
	double getAmtNeed(){ return _amtNeeded; };

};
#endif