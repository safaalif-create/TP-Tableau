
#include "TableauBorne.h"
#include<iostream>c
#include"Tableau.h"
using namespace std;

TableauBorne::TableauBorne(int n, double a, double b)
	:Tableau(n)
{
    if (a > b)
        cout << "ERREUR!" << endl;

    this->min = a;
    this->max = b;

    for (int i = 0; i < this->taille; i++)
        Tab[i] = min;
}

const double& TableauBorne::operator[](int i)
{
    if (i < 0 || i >= taille)
        cout << "ERREUR" << endl;

    return this->Tab[i];
}

void TableauBorne::afficher() const
{
    for (int i = 0;i < this->taille;i++)
        cout << this->Tab[i] << endl;
}

TableauBorne::~TableauBorne()
{

}
