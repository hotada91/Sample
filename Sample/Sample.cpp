// Sample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

void sample1()
{
    char des[5] = "";
    char padding[10] = "";
    const char* src = "0123456789";
    sprintf(des, "%s", src);
    // snprintf(des, sizeof(des), "%s", src);
    std::cout << "des: " << des << std::endl << "padding: " << padding;
}

void sample2()
{
    for (size_t i = 10; i >= 0; i--)
    {
        std::cout << "num: " << i << std::endl;
    }
}

int main()
{
    sample1();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
