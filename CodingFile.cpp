// This program calculates the largest of three numbers
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3, largest;
	cout << "Enter first integer:";
	cin >> num1;
	cout << "Enter second integer:";
	cin >> num2;
	cout << "Enter third integer:";
	cin >> num3;
	largest = num1;
	if (num2 > largest)
	{
		largest = num2;
	}
	if (num3 > largest)
	{
		largest = num3;
	}
	cout << "Largest integer is:" << largest;
	return 0;
}