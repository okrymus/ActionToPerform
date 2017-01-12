// This program performs the five basic actions
// Action to perform
// Programmer: Prakit, Panupong, Seun
// Last modify: 10/17/15

#include <iostream>
using namespace std;

int main()
{
	double num1, num2;
	char action;

	system("color A0");

	//Title   
	cout
		<< "\t\t    Action Preformer" << endl
		<< "\t\t    Sample solution" << endl
		<< "\t\t   By The green group" << endl << endl;
	//Direction
	cout << "This program performs the five basic actions\n"
		<< "that the arithmetic operators perform :\n"
		<< "Addition / Subtractions / Multiplication / Division / Remainder\n\n\n";

	//input action
	cout << "Action: ";
	cin >> action;   cin.ignore(80, '\n');

	//Loop funtion
	while (true)
	{
		cout << "Give me a number: ";
		cin >> num1;  cin.ignore(80, '\n');

		cout << "Give me another number: ";
		cin >> num2;  cin.ignore(80, '\n');

		//Additional statement
		if (action == 'A' || action == 'a')
			cout << num1 << " + " << num2 << " = " << num1 + num2;

		// Subtract statement
		else if (action == 'S' || action == 's')
			cout << num2 << " - " << num1 << " = " << num2 - num1;

		//Multiple statement
		else if (action == 'M' || action == 'm')
			cout << num1 << " * " << num2 << " = " << num1*num2;

		//Divisional statement
		else if (action == 'D' || action == 'd')
		{
			if (num2 == 0)
				cout << "Action cannot be performed. Division by zero is not defined";
			else
				cout << num1 << " / " << num2 << " = " << num1 / num2;
		}

		//Remainder statement
		else if (action == 'R' || action == 'r')
		{
			if ((int)num1 == num1 && (int)num2 == num2)
			{
				if ((int)num2 == 0)
					cout << "The modulo of zero is not permitted";
				else
					cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2;
			}

			//Undefine any action
			else
				cout << "The remainder (modulo) is defined only for integers";
		}
		else
			cout << "I do not know how to perform this action.";
		cout << "\n\n\t\t************************\n\n";
		cout << "Action: ";
		cin >> action;   cin.ignore(80, '\n');
	}
}