/*

    File Name: Chapter2Exercise3.cpp
    Programmer/Developer: Alejandro Andres Pepito
    Date: 2/19/2025 (Revised on: 5/04/2025)
    Requirements:
        "Revise the program for Exercise 3, but instead of having state and country sales tax hard-coded in your program, allow the user to enter the sales taxes as well as the amount of the purchase, and display the total Sales tax."

*/

#include <iostream>

using namespace std;

int main()
{
    double purchaseAmount, stateTaxRate, countyTaxRate;

    // Get values from the user
    cout << "Enter the purchase amount: $";
    cin >> purchaseAmount;

    cout << "Enter the state tax rate (as a decimal, e.g., 0.04 for 4%):";
    cin >> stateTaxRate;

    cout << "Enter the county tax rate (as a decimal, e.g., 0.02 for 2%):";
    cin >> countyTaxRate;

    // Calculate taxes
    double stateTax = purchaseAmount * stateTaxRate;
    double countyTax = purchaseAmount * countyTaxRate;
    double totalSalesTax = stateTax + countyTax;

    // Output results without formatting
    cout << "\n--- Sales Tax Breakdown ---" << endl;
    cout << "Purchase Amount: $" << purchaseAmount << endl;
    cout << "State Tax: $" << stateTax << endl;
    cout << "County Tax: $" << countyTax << endl;
    cout << "Total Sales Tax: $" << totalSalesTax << endl;

    return 0;
}

