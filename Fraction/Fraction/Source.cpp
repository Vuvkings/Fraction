
#include <iostream>
#include "Header.h";
using namespace std;

Fraction Fraction::add(Fraction frac) {
	
	int res_nom = Den * frac.Nom + Nom * frac.Den;
	int res_den = Den * frac.Den;
	int res_Itg = 0;
	return Fraction(res_Itg,res_nom, res_den);
}

Fraction Fraction::res(Fraction frac) {

	int res_nom = Den * frac.Nom - Nom * frac.Den;
	int res_den = Den * frac.Den;
	int res_Itg = 0;
	return Fraction(res_Itg, res_nom, res_den);
}

Fraction Fraction::mul(Fraction frac) {
	int res_nom = Nom * frac.Nom;
	int res_den = Den * frac.Den;
	int res_Itg = 0;
	return Fraction(res_Itg, res_nom, res_den);
}
Fraction Fraction::rem(Fraction) {

	int rem_nom = Nom;
	int rem_den = Den;
	int rem_Itg = 0;
	for (int k = 2; k <= 9; k++) {
		if (rem_nom % k == 0 && rem_den % k == 0) {
			
		}
	}

	return Fraction(rem_Itg, rem_nom, rem_den);
}

void Fraction::show() {
	cout << Itg <<" " << Nom << "/" << Den;
}


int main() {

	Fraction frac1(1,2, 3);
	Fraction frac2(1,3, 4);
	Fraction frac3(2, 2, 6);
	Fraction frac4(3, 3, 7);
	Fraction sum = frac1.add(frac2);
	Fraction res = frac4.res(frac1);
	Fraction mul = frac3.res(frac4);
	//Fraction rem1 = sum.res(sum);
	frac1.show();
	cout << " + ";
	frac2.show();
	cout << " = ";
	sum.show();
	cout << endl;
	
	frac1.show();
	cout << " - ";
	frac2.show();
	cout << " = ";
	res.show();
	cout << endl;

	frac3.show();
	cout << " * ";
	frac4.show();
	cout << " = ";
	mul.show();
	cout << endl;

	return 0;
}