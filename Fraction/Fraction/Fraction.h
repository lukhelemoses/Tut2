#include<iostream>
class Fraction
{
public:

	Fraction(int = 1, int = 1);

	void setNumerator(int);
	void setDenominator(int);
	int getNumerator();
	int getDenominator();
	void add(int, int);
	void print();
	Fraction operator+(Fraction add);
	Fraction operator-(Fraction subtract);
	Fraction operator/(Fraction divide);
	Fraction operator*(Fraction multiply);
	friend istream& operator>>(istream&, Fraction& cFraction);
	friend ostream& operator<<(ostream&, const Fraction& cFraction);

	~Fraction();


private:
	int n;
	int d;

};
