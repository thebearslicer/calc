#include <iostream>
#include <math.h>
using namespace std;

int main() {

	char op; //var that stores operator
	float num1, num2; //numbers
	
	cout << "Enter op (+,-,*,/,^,s) \n"; //get operators 
	cin >> op; 

	cout << "Enter two numbers \n";
	cin >> num1 >> num2; //get numbers
	
	switch (op) 
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':

		if (num2 != 0) {
			cout << num1 / num2;
			break;
		}
						//check for div by 0
		else {
			cout << "Cannot divide by 0!";
			break;
		}

	case '^':
		cout << pow(num1, num2);
		break;
	case 's':
		cout << sqrt(num1);
		break;

	default:
		cout << "The operator is incorrect";
		break;

	}
	return 0; 
}
