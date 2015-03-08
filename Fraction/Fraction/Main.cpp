#include<iostream>
#include"Fraction.h"


using namespace std;
int main(){




	int num1, num2, deno1, deno2;
	int i;

	cout << "Enter numerator(1):\n";                  // the fraction to be operated
	cin >> num1;
	cout << "Enter denominator(1):\n";
	cin >> deno1;

	cout << "Enter numerator(2):\n";
	cin >> num2;
	cout << "Enter denominator(2):\n";
	cin >> deno2;
	Fraction myfraction1(num1, deno1);
	Fraction myfraction2(num2, deno2);

	cout << "\n\nEnter 1 to add,2 to subtract,3 to devide,4 to multiply:\n" << endl;   // choose between subtraction,addition,division and multiplication
	cin >> i;
	Fraction result;
	if (deno1 != 0 && deno2 != 0){
		switch (i)                                        // choice selector             
		{
		case 1:result = myfraction1 + myfraction2;
			result.print();
			break;
		case 2:result = myfraction1 - myfraction2;
			result.print();
			break;

		case 3:result = myfraction1 / myfraction2;
			result.print();
			break;

		case 4:result = myfraction1 * myfraction2;
			result.print();
			break;

		default:
			cout << "you entered incorrect input" << endl;
			break;
		}
	}
	else
		cout << "Please make sure that the denominators are not eqaul to zero:" << endl;

	system("pause");
	return 0;

}