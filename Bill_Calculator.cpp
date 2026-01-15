// Title: | Calculating Bill amount |
//
//                           | Description Main Work |
// A program that computes the tax amount to be paid from a total bill and the tip.
// operation that will be used is | (amount to be paid * (tax percentage)/100) * Tip |
//
// Bill amount = $88.67
// Tax = 6.75%
// Tip = 20%
//
//                           | Extra Mile Description |
// Given the input on the program it will calculate the total amount to be paid with the variables Bill amount tax and Tip

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Constants
    double bill_amount = 88.67;
    double tax = 0.0675;
    double tip = 0.2;

    // Calculation
    double tax_amount = bill_amount * tax; //Tax to be payed

    double tip_total = (bill_amount + tax_amount)* tip; // Tip to be payed

    double total_bill = bill_amount + tip_total + tax_amount; // Total amount the client has to pay


    // I tried using the round function to print the result with only one decimal place but it was confusing so I just
    // Rounded the output with the <iomanip> library
    cout << fixed << setprecision(1)
         << " Cost of meal:|$" << bill_amount << "|\n"
         << " Tax to be payed:|$" << tax_amount << "|\n"
         << " Tip to be payed:|$" << tip_total << "|\n"
         << " Total bill:|$" << total_bill << "|\n";


    cout << "\n | Extra Mile Practice | \n";

    // Input Variables

    // Here i learn that when restating the variables you cannot use the
    // double or int before the variable because it takes it as creating a new variable when what i wanted was to reset it
    // and it gets a compiler error

    bill_amount = 0;
    tax = 0;
    tip = 0;

    // Inputs
    cout << " What was the Bill amount: $", cin >> bill_amount;
    cout << " What is the tax amount in your area (ex. 10%): ", cin >> tax;
    cout << " What is the total amount of tip you will give (ex. 20%): ", cin >> tip;


    //Turnig whole number in percentage
    tax /= 100; // On the input we get 20% so we need to turn it to 0.2 so we can use it
    tip /= 100;

    // (I Just copy pasted this part below)
    // Calculation
    tax_amount = bill_amount * tax; //Tax to be payed

    tip_total = (bill_amount + tax_amount)* tip; // Tip to be payed

    total_bill = bill_amount + tip_total + tax_amount; // Total amount the client has to pay

    // Printing Answer
    cout << fixed << setprecision(1)
         << " Cost of meal:|$" << bill_amount << "|\n"
         << " Tax to be payed:|$" << tax_amount << "|\n"
         << " Tip to be payed:|$" << tip_total << "|\n"
         << " Total bill:|$" << total_bill << "|\n";

    return 0;
}

