#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{	
	double netBalance, payment, d1, d2; 
	double interestRate, averageDailyBalance, interest;
	
	cout << "Please input the following:" << endl;
	
	cout << "Balance shown in the bill ($): ";
	cin >> netBalance;
	
	cout << "Payment made ($): ";
	cin >> payment;
	
	cout << "Number of days in the billing cycle: ";
	cin >> d1;
	
	cout << "Number of days payment is made before the billing cycle: ";
	cin >> d2;
	
	cout << "Interest rate per month (%): ";
	cin >> interestRate;

	averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
	interestRate = (interestRate / 100);
	interest = (averageDailyBalance * interestRate);
	
	cout << fixed << showpoint << setprecision(2);
	
	cout << "Your average daily balance: $" << averageDailyBalance << endl;
	cout << "Interest on unpaid balance: $" << interest << endl;
	
	getch();
	return 0;
	
}

