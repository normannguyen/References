/*  Norman Nguyen
	Program: References -
*/

//IOStream
#include <iostream>
//Standard Library
using namespace std;

void normalBank(int x, int y);
void hackedBank(int& x, int& y);

void main()
{
	//ciaBank
	int joesBank = 1000;
	//terroristBank
	int terroristBank = 9000000;
	cout << "Joe's Coffee Shop Bank Account: $" << joesBank << endl;
	cout << "Terrorist Bank Account: $" << terroristBank << "\n\n" << endl;
	//Normal Bank Swap
	//Message of calling normalBank
	cout << "Calling normalBank()\n";
	cout << "____________________\n";
	normalBank(joesBank, terroristBank);
	cout << "Normal Bank:" << joesBank << "\n";
	cout << "Hacked Bank:" << terroristBank << "\n";
	cout << "____________________\n\n";
	//Terrorist Bank Swap
	//Message of calling normalBank
	cout << "Calling hackedBank()\n";
	cout << "____________________\n";
	hackedBank(joesBank, terroristBank);
	cout << "Normal Bank:" << joesBank << "\n";
	cout << "Hacked Bank:" << terroristBank << "\n";
	cout << "____________________\n\n";
	//System Pause
	system("pause");
}
//Normal Bank Function
void normalBank(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
//Hacked Bank Function
void hackedBank(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}