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







// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
