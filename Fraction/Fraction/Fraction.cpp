#include "Fraction.h"
#include<iostream>
using namespace std;

Fraction::Fraction(int deno, int num)
{
	setDenominator(deno);
	setNumerator(num);
}


Fraction::~Fraction()
{
}
void Fraction::setDenominator(int deno)
{
	d = deno;
}
void Fraction::setNumerator(int num)
{
	n = num;
}
int Fraction::getDenominator(){

	return d;
}

int Fraction::getNumerator(){

	return n;
}
Fraction Fraction:: operator+(Fraction add)
{
	Fraction answer(getNumerator()*add.getDenominator() + getDenominator()*add.getNumerator(), add.getDenominator()*getDenominator());
	return answer;
}
Fraction Fraction:: operator-(Fraction subtract)
{
	Fraction answer(getNumerator()*subtract.getDenominator() - getDenominator()*subtract.getNumerator(), subtract.getDenominator()*getDenominator());
	return answer;
}

Fraction Fraction:: operator/(Fraction divide)
{
	Fraction answer(getNumerator()*divide.getDenominator(), getDenominator()*divide.getNumerator());
	return answer;
}
Fraction Fraction:: operator*(Fraction multiply)
{
	Fraction answer(getNumerator()*multiply.getNumerator(), multiply.getDenominator()*getDenominator());
	return answer;
}
void Fraction::print(){
	if (n > d){
		int i = n / d;
		n = n % d;
		cout << "The answer is:" << i << "\nand\n" << n << "/" << d << endl;
	}
	else 
		if (n == d){
			
			cout << "The answer is:\n" << d << endl;
		}
		else
		cout << "The answer is " << n << "/" << d << endl;
}