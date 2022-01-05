#include <iostream>
using namespace std;
#include "Employe.h"
#include "Responsables.h"
#include "Personnel.h"

#include "Commerciaux.h"


int main()
{

		Employe A("Benzinane", 1, 25);
		Employe B("Ourdi", 2, 25);
		Employe C("Nidmessaoud", 3, 25);
		Employe D("ait", 4, 25);


		Employe* table = new Employe[4];
		table[0] = A;
		table[1] = B;
		table[2] = C;
		table[3] = D;

		int i = 0;
		float augmentation1=0;
		cout << "Donnez l'augmentation de les employes" << endl;
		cin >> augmentation1;
		do
		{
			cout << "L'employe " << i + 1 << " :" << endl;
			table[i].afficher();
			float salaire = table[i].calculesalaire(augmentation1);
			cout << "le salaire est :" << salaire << endl;
			i++;
			cout << endl;


		} while (i < 4);



		Responsable R1("Alfrido", 5, 80, table, 4);
		R1.afficherDirect();
		cout << endl;

		Commerciaux C1("Moint", 25, 70, 60);
		C1.MettreAjour(12);
		double J = C1.calculersaliare1(augmentation1, 0.8);
		cout << "le commerciaux  :"  << endl;
		C1.afficher();
		cout << "le salaire de commerciaux est :" << J << endl;

		cout << endl;
		Personnel P2(table, 4);
		
		float P = P2.somme(augmentation1);
		cout << "la somme de salaire de tous les employes : " << P << endl;
		


}

