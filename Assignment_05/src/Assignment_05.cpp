//============================================================================
// Name        : Assignment_05.cpp
// Author      : ShahafDan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Stack.hpp"

int main()
{

	cout << "Hello" << endl << "Please enter the size of your array ";
	int size = 0;
	cin >> size;
	string value;
	Stack s(size);
	int answer = 0;
	do
	{
		cout << "select: push (1) | top (2) | pop (3) | destroy (4) | display (5) | exit (9) \t ";
		cin >> answer;
		if(answer == 1) //push
		{

			cout << "enter value ";
			cin >> value;
			s.push(value);

		}
		else if(answer == 2) //top
		{
			s.top();
		}
		else if(answer == 3) //pop
		{
			s.pop();
		}
		else if(answer == 4)
		{
			cout << endl << "--- DELETING ALL ---" << endl;
			s.destroy();
		}
		else if (answer == 5) //print all, not mandatory in the assignment
		{
			cout << endl << "--- PRINTING ALL ---" << endl;
			s.printAll();
		}
		else if(answer == 9) cout << "Goodbye, ending program" << endl;
		else cout << "not a convenient answer" << endl;

	}while(answer != 9);


	return 0;
}
