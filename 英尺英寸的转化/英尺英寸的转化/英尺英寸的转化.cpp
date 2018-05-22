//Ó¢³ßÓ¢´çµÄ×ª»¯
#include "stdafx.h"
#include<iostream>
using namespace std;
class Clength
{
private:
	double feet;
	double inche;
public:
	int setvalue()
	{
		cin >> feet >> inche;
		return 0;
	}
	void meterinche()
	{
		int meter;
		cin >> meter;
		int feet = meter*3.2808;
		inche = (meter*3.2808 - feet) * 12;
		cout << feet << "Ó¢³ß" << inche << "Ó¢´ç" << endl;
	}

	void display()
	{
		if (inche >= 12) {
			feet = feet + (inche / 12);
			inche = inche - (int)inche % 12;
		}
		cout << "Ó¢³ß " << feet << "Ó¢´ç" << inche << endl;
	}
};
int main()
{
	Clength os;
	//os.setvalue();
	//os.display();
	os.meterinche();
	return 0;
}