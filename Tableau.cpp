#include "Tableau.h"
#include<iostream>
using namespace std;

Tableau::Tableau(int t)
{
	this->taille = t;
	this->Tab = new double[this->taille];
	for (int i = 0;i < this->taille;i++) {
		this->Tab[i] = 0;
	}
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->Tab = new double[T.taille];
	for (int i = 0;i < this->taille;i++) {
		this->Tab[i] = T.Tab[i];
			
	}
}

Tableau& Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		delete[]this->Tab;
		this->Tab = nullptr;
	}
	this->taille = T.taille;
	this->Tab = new double[T.taille];
	for (int i = 0;i < this->taille;i++) {
		Tab[i] = T.Tab[i];

	}
	return *this;
}

double& Tableau::operator[](int i)
{
	if (i >= 0 && this->taille) {
		return this->Tab[i];
	}
	else {
		exit(-1);
	}
}

void Tableau::afficher() const
{
	for (int i = 0;i < this->taille;i++)
		cout << this->Tab[i] << endl;
}

Tableau::~Tableau()
{
	delete[]this->Tab;
	this->Tab = nullptr;
}
