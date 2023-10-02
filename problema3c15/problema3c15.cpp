#include <iostream>

using namespace std;

int main()
{
	int opcio;
	float num1, num2, resultat;
	char operar;


	do
	{
		cout << "Introdueix dos nombres reals: ";
		cin >> num1 >> num2;



		do
		{
			cout << "MENU" << endl;
			cout << "1.-Suma" << endl;
			cout << "2.-Resta" << endl;
			cout << "3.-Multiplicacio" << endl;
			cout << "4.-Divisio" << endl;
			cout << "5.-Sortir" << endl;
			cout << "Selecciona una de les opcions: ";

			cin >> opcio;

			switch (opcio)
			{
			case 1: resultat = num1 + num2;
				cout << num1 << " + " << num2 << " = " << resultat << endl;
				break;

			case 2: resultat = num1 - num2;
				cout << num1 << " - " << num2 << " = " << resultat << endl;
				break;

			case 3: resultat = num1 * num2;
				cout << num1 << " x " << num2 << " = " << resultat << endl;
				break;

			case 4:

				if (num2 == 0)
				{
					cout << "Error: Divisio per zero." << endl;
					break;
				}
				else
					resultat = num1 / num2;
				cout << num1 << " : " << num2 << " = " << resultat << endl;
				break;

			case 5:
				cout << "Sortint de la calculadora..." << endl;
				break;


			default: cout << "Error: Opcio no valida." << endl;
			}
		
		} while (opcio != 5);
			
			cout << "Vols operar amb uns altres operands? (S/-): ";
			cin >> operar;

		} while (opcio == 'S');



	}

