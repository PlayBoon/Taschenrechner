// Taschenrechner_1.0.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

//Taschenrechner mit natürlicher eingabe.
//Version 1.0.21 07.03.18

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool start = 1;
	double z1 = 0, z2 = 0, erg = 0;
	char op,eingabe;

	cout << "Taschenrechner" << endl;
	cout << "Version: 1.0" << endl;
	cout << "Ersteller: PlayBoon" << endl;

	while (start == 1)
	{
		cout << "Was soll ausgerechnet werden?";
		std::cin >> z1 >> op >> z2; // Sequenzielles einlesen der Variablen

		switch (op)
		{
		case '+': {erg = z1 + z2;
			cout << "Ihr Ergebnis: " << z1 << op << z2 << "=" << erg << endl;// Das ist ein Test
		}break;
		case '-': {erg = z1 - z2;
			cout << "Ihr Ergebnis: " << z1 << op << z2 << "=" << erg << endl;
		}break;
		case '/': {erg = z1 / z2;
			cout << "Ihr Ergebnis: " << z1 << op << z2 << "=" << erg << endl;
		}break;
		case '*': {erg = z1 * z2;
			cout << "Ihr Ergebnis: " << z1 << op << z2 << "=" << erg << endl;
		}break;
		case 'E': {cout << "Programm wird Beendet" << endl;
			start = 0;
		}break;
		case 'e': {cout << "Programm wird Beendet" << endl;
			start = 0;
		}break;
		default: {cout << "Bitte machen sie eine gültige Eingabe!" << endl; }break;
		}

		//Beenden Funktion
		cout << "Wollen sie das Programm Beenden?(Y/N)" << endl;
		cin >> eingabe;

		switch (eingabe)
		{
		case'Y': {start = 0; }break;
		case'y': {start = 0; }break;
		}
		//////////////////////////////////////////////////////////////////////////////
	}

	cin.get();
	cin.ignore();
	return 0;
}