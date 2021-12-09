// Al-niima.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    system("color E4");
    
    cout << "                Welcome to Ahleem global      \n";
    int Small;
    int Large;

    cout << "\nHow many carpet you need for small room? ";
    cin >> Small;

    cout << "How many Large room carpet you need? ";
    cin >> Large;

    const int p_Small{ 20 };
    const int p_Large{ 50 };

    cout << "\n          Estimate for carpert you need";
    cout << "\nNumber of Small carpet " << Small << endl;
    cout << "Number of Large carpet " << Large << endl;

    cout << "Price of Small carpet $" << p_Small << endl;
    cout << "Price of Large carpet $" << p_Large << endl;

    cout << "======================================================";

    cout << "\nTotal cost of small and large room carpet $" << (Small * p_Small) + (Large * p_Large) << endl;

    cout << "Thank you for visit us see you later";




    
}
