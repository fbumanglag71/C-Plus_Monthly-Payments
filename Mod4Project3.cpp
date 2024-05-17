/*Author: Francisco Bumanglag
Project: Monthly Payments
Assignment: Module 4 Project 3
Course: C++ Santa Ana College
Class: CMPR120 Dr. Tahir Aziz
Date: February 25, 2024*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

int main()
{

	//declarations
	double loanAmount;
	double annualInterestRate;
	double momthlyInterestRate;
	double monthlyPayment;
	double amountPaid;
	double interestPaid;
	int numberofPayments; 

	//input from user 
	cout << "Enter the loan amout: ";
	cin >> loanAmount; 

	cout << "Enter the annual interest rate: ";
	cin >> annualInterestRate; 

	cout << "Enter the number of payments: ";
	cin >> numberofPayments; 
	cout << endl; 


	//calculations
	momthlyInterestRate = (annualInterestRate / 12) / 100;
	monthlyPayment = (loanAmount * momthlyInterestRate) / (1 - pow(1 + momthlyInterestRate, -numberofPayments));
	amountPaid = monthlyPayment * numberofPayments; 
	interestPaid = amountPaid - loanAmount; 

	//display the output 
	cout << fixed << setprecision(2); //set the number of decimal places -- money!!
	cout << "Loan Amount:              $" << loanAmount << endl; 
	cout << "Monthly Interest Rate:    " << momthlyInterestRate * 100 << "%" << endl;
	cout << "Number of Payments:       " << numberofPayments << endl; 
	cout << "Amount Paid Back:         $" << amountPaid << endl; 
	cout << "Interest Paid:            $" << interestPaid << endl << endl;
	
	system("pause");
	return 0; 
}
