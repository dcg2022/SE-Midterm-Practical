// SE Midterm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "QuestionBank.h"






int main()
{
    int total = 0;
    bool ans;
    QuestionBank qbank;


    std::cout << qbank.Q1 << "\n";
    if (qbank.Q1Answers() == true)
    {
        total++;
    }

 

    std::cout << qbank.Q2 << "\n";
    if (qbank.Q2Answers() == true)
    {
        total++;
    }
    

    std::cout << qbank.Q3 << "\n";
    if (qbank.Q3Answers() == true)
    {
        total++;
    }

    std::cout << qbank.Q4 << "\n";
    if (qbank.Q4Answers() == true)
    {
        total++;
    }


    std::cout << "Score: " << total << "/4";
}


