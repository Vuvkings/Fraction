#pragma once
#include <iostream>
class Fraction
{
private:
	int Itg;
	int Den;
	int Nom;
public:
	Fraction( int Itg, int Nom, int Den) :
		Itg{ Itg }, Den{ Den }, Nom{ Nom } { Nom = Itg * Den + Nom; };
	
	Fraction add(Fraction frac); //сумма
	Fraction mul(Fraction frac); //умножение
	Fraction res(Fraction frac); //разность
	Fraction rem(Fraction frac); //сокращение дробей
	void show();
};