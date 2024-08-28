#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() 
{
	float a;	//Variable bestimmen Bruttopreis
	float b;	//Variable bestimmen Prozentsatz
	float c;	//Variable bestimmen Nettopreis
	
	cout << "Bitte geben Sie den Bruttopreis ein:" << endl;	//Bruttopreis eingabefeld 
		cin >> a ; 	//Die eingabe des Bruttopreises lesen
	cout << "Bitte geben Sie den Prozentsatz ein:" << endl;	//Den Prozentsatz eingeben, mit den gerechnet werden soll
		cin >> b;	//Den eingegebenen Prozentsatz lesen
	cout << "Der Nettopreis betraegt:" << a / (1 + b / 100)  << endl;	//Den Nettopreis berechnen und Ausgeben
	cout << "Der Prozentsatz lautet:" << b << endl;	//Den Prozentsatz ausgeben
	cout << "Der Prozentwert betraegt:" << a / (1 + b / 100) - a << endl;	//Den Prozentwer berechnen und ausgeben
	
	return 0;
}

