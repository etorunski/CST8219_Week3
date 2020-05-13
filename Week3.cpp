// Week3.cpp : Defines the entry point for the application.
//

#include "Week3.h"
#include <fstream>

using namespace std;

int main()
{
	cout << "Hello World!" << endl;


	ofstream outputFile("Filename.txt");
	outputFile << "Hello world!" << endl;
	outputFile.close();


	inputExampleFunction();
	return 0;
}
