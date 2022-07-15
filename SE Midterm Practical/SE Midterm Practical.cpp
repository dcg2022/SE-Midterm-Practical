// SE Midterm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "QuestionBank.h"






int main()
{
    int total = 0;
    QuestionBank qbank;


    std::cout << qbank.Q1 << "\n";
    bool ans = qbank.Q1Answers();
    if (ans = true)
    {total++;}

    std::cout << qbank.Q2 << "\n";
    ans = qbank.Q2Answers();
    if (ans = true)
    {total++;}

    std::cout << qbank.Q3 << "\n";
    ans = qbank.Q3Answers();
    if (ans = true)
    {total++;}
    
    std::cout << qbank.Q4 << "\n";
    ans = qbank.Q4Answers();
    if (ans = true)
    {
        total++;
    }

}


