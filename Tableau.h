#pragma once
class Tableau
{ protected:
	int taille;
	double* Tab;
public:
	Tableau(int);
	Tableau(const Tableau& T);
	Tableau& operator=(const Tableau& T);
	double& operator[](int );
	void afficher()const;
	~Tableau();
};

