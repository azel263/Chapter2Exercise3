/*

    File Name: Chapter2Exercise3.cpp
    Programmer/Developer: Alejandro Andres Pepito
    Date: 2/19/2025
    Requirements:
        "Write a program that will compute the total sales tax on a $95 purchase.
         Assume the sales tax is 4%, and the county sales tax is 2%."

*/

#include <iostream>

using namespace std;

int main()
{
    double sales = 95;  // Base price of purchase, without taxes included.

    // Rates of taxes.
    const double stateTaxRate = .04;
    const double countyTaxRate = .02;

    // Separate prices of taxes paid.
    double stateTax = sales * stateTaxRate;
    double countyTax = sales * countyTaxRate;

    // Total prices of taxes paid.
    double totalSalesTax = stateTax + countyTax;
    
    // Code for console output.
    cout << "Sales: $" << sales << endl
         << "State Tax: $" << stateTax << endl
         << "County Tax: $" << countyTax << endl
         << "Total Taxes Paid: $" << totalSalesTax;

    return 0;
}

