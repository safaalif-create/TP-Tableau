#pragma once
#include "Tableau.h"
class TableauBorne :public Tableau
{
private:
	double min;
	double max;
	
public:
	TableauBorne(int, double, double);
	const double& operator[](int);
	void afficher()const;
	~TableauBorne();
};

