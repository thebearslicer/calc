#include <iostream>
#include <math.h>

int main() {

	char op; //var that stores operator
	float num1, num2; //numbers
	
	std::cout << "Enter op (+,-,*,/,^,r,s,t,c) \n"; //get operators 
	std::cin >> op; 

	std::cout << "Enter two numbers \n";
	std::cin >> num1 >> num2; //get numbers
	
	switch (op) 
	{
	case '+':
		std::cout << num1 + num2;
		break;
	case '-':
		std::cout << num1 - num2;
		break;
	case '*':
		std::cout << num1 * num2;
		break;
	case '/':

		if (num2 != 0) {
			std::cout << num1 / num2;
			break;
		}
						//check for div by 0
		else {
			std::cout << "Cannot divide by 0!";
			break;
		}

	case '^':
		std::cout << pow(num1, num2);
		break;
	case 'r':
		std::cout << sqrt(num1);
		break;
	case 's':
		std::cout << sin(num1);
		break;
	case 't':
		std::cout << tan(num1);
		break;
	case 'c':
		std::cout << cos(num1);
		break;

	default:
		std::cout << "The operator is incorrect";
		break;

	}
	return 0; 
}
