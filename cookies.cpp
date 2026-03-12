// cookies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    const int Cookies_Recipe = 48;
    const double Sugar = 1.5;
    const double Butter = 1.0;
    const double Flour = 2.75;

    int cookiesWanted;

    cout << " How many cookies do you want? ";
    cin >> cookiesWanted;

    double sugarpercookie = Sugar / Cookies_Recipe;
    double butterpercookie = Butter / Cookies_Recipe;
    double flourpercookie = Flour / Cookies_Recipe;

    double sugarNeeded = sugarpercookie * cookiesWanted; 
    double butterNeeded = butterpercookie * cookiesWanted;
    double flourneeded = flourpercookie * cookiesWanted;

    cout << "Cups of sugar needed:" << sugarNeeded << endl;
    cout << " cups of butter needed:" << butterNeeded << endl;
    cout << " cups of flour needed:" << flourneeded << endl;

    return 0;













    
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
