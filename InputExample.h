

#ifndef _InputExample_h_
#define _InputExample_h_
#include <iostream>

using namespace std;
#include <string>
void inputExampleFunction()
{
	int number;

	cout << "Please type in a number";	//No endl here because I want the number to show up on the same line

	cin >> number;		//Wait for the user to type in a number

	cout << "You typed the number: " << number;

	string name;
	getline(cin, name);// 
}


#endif