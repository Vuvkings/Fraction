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
	
	Fraction add(Fraction frac); //�����
	Fraction mul(Fraction frac); //���������
	Fraction res(Fraction frac); //��������
	Fraction rem(Fraction frac); //���������� ������
	void show();
};