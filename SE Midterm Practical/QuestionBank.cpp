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
		cout << "Correct." << "\n" << "\n";
	}
	else
	{
		cout << "Incorrect" << "\n" << "\n";
	}
	

	return correct;
}

bool QuestionBank::Q2Answers()
{
	bool correct = false;
	char ans;

	cout << "A: Paul Bunyon" << "\n";
	cout << "B: Davy Crockett" << "\n";
	cout << "C: John Henry" << "\n";
	cout << "D: Johnny Appleseed" << "\n";
	cin >> ans;

	if (ans == 'B' || ans == 'b')
	{
		correct = true;
		cout << "Correct." << "\n" << "\n";
	}
	else
	{
		cout << "Incorrect" << "\n" << "\n";
	}


	return correct;
}

bool QuestionBank::Q3Answers()
{
	bool correct = false;
	char ans;

	cout << "A: The Alamo" << "\n";
	cout << "B: San Jacinto" << "\n";
	cout << "C: Gettysburg" << "\n";
	cout << "D: The USS Lexington" << "\n";
	cin >> ans;

	if (ans == 'A' || ans == 'a')
	{
		correct = true;
		cout << "Correct." << "\n" << "\n";
	}
	else
	{
		cout << "Incorrect" << "\n" << "\n";
	}


	return correct;
}


bool QuestionBank::Q3Answers()
{
	bool correct = false;
	char ans;

	cout << "A: Barbeque" << "\n";
	cout << "B: Guns" << "\n";
	cout << "C: The Rodeo" << "\n";
	cout << "D: All of the Above" << "\n";
	cin >> ans;

	if (ans == 'D' || ans == 'd')
	{
		correct = true;
		cout << "Correct." << "\n" << "\n";
	}
	else
	{
		cout << "Incorrect" << "\n" << "\n";
	}


	return correct;
}