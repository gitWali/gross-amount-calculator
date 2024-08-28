#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() 
{
	float a;	//Variable bestimmen Nettopreis
	float b;	//Variable bestimmen Prozentsatz
	float c;	//Variable bestimmen Bruttopreis
	
	cout << "Bitte geben Sie den Nettopreis ein:" << endl;	//Nettopreis eingabefeld 
		cin >> a ; 	//Die eingabe des Nettopreises lesen
	cout << "Bitte geben Sie den Prozentsatz ein:" << endl;	//Den Prozentsatz eingeben, mit den gerechnet werden soll
		cin >> b;	//Den eingegebenen Prozentsatz lesen
	cout << "Der Bruttopreis betraegt:" << a * (1 + b / 100) << endl;	//Den Bruttopreis berechnen und Ausgeben
	cout << "Der Prozentsatz lautet:" << b << endl;	//Den Prozentsatz ausgeben
	cout << "Der Prozentwert betraegt:" << (a / 100) * b << endl;
	
	return 0;
}

