#include <iostream>
using namespace std;



int main()
{
	cout << "This program asks for your income to calculate the tax you have to pay." << endl;
	cout << "Enter your income: " << endl;

	float income;
	cin >> income;

	float taxPay;

	income = 10000;
	//9075, 925 - sum of them is 10000
	//9075 * 0.1 //first tier tax
	//925 * 0.15 //second tier tax
	float tax = 9075 * 0.1 + 925 * 0.15;

	if (income > 0 && income <= 9075)
	{
		taxPay = income * .1;

	}
	else if (income > 9075 && income <= 36900)
	{
		taxPay = income * .15;

	}
	else if (income > 36900 && income <= 89350)
	{
		taxPay = income * .25;

	}
	else if (income > 89350)
	{
		taxPay = income * .28;

	}

	cout << "Since your income is " << income << " you will have to pay " << taxPay << endl;


}

