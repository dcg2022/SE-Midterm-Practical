#include "QuestionBank.h"
#include <string>
#include <iostream>
using namespace std;
bool QuestionBank::Q1Answers()
{
	bool correct = false;
	char ans;
	
	cout << "A: Houston" << "\n";
	cout << "B: Waco" << "\n";
	cout << "C: Austin" << "\n";
	cout << "D: Fulshear" << "\n";
	cin >> ans;

	if (ans == 'C' || ans == 'c')
	{
		correct = true;
		cout << "Correct.";
	}
	else
	{
		cout << "Incorrect";
	}
	

	return correct;
}
