// Prompt the user for the configuration type of a triangle to solve: AAA, AAS, ASA, SAS, SSA, SSS.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int Angle;

	cout << "Angle AAA = selection 1" << '\n'
		 << "Angle AAS = selection 2" << '\n'
		 << "Angle ASA = selection 3" << '\n'
		 << "Angle SAS = selection 4" << '\n'
		 << "Angle SSA = selection 5" << '\n'
		 << "Angle SSS = selection 6" << '\n';

	cout << "Enter selection number for which angle to solve: ";
	cin >> Angle; 


		if (Angle != 1)
			cout << "Not a valid input";
		else 
			cout << "good choice";

		system ("pause");

		return 0;
}

