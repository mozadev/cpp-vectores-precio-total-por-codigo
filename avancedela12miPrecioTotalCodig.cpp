
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include<time.h>
#include<iomanip>
#include<Windows.h>


using namespace std;
using namespace System;

void ingresadatos(int *n, int *codigo, int *cantidad, float * preciounitario, float *preciototalxcodigo)
{
	float suma = 0;
	for (int i = 0; i < *n; i++)
	{
		cout << "ingrese codigo numero: " << i + 1 << ":  ";
		cin >> codigo[i];
		while (codigo[i] < 1000 || codigo[i] > 9999)
		{
			cout << "ingrese codigo numero " << i + 1 << ": ";
			cin >> codigo[i];
		}

		cout << "ingrese cantidad " << i + 1 << ":  ";
		cin >> cantidad[i];
		while (cantidad[i] < 0)
		{
			cout << "ingrese cantidad " << i + 1 << ":  ";
			cin >> cantidad[i];
		}

		cout << "ingrese precio unitario " << i + 1 << ":  ";
		cin >> preciounitario[i];
		while (preciounitario[i] < 0)
		{
			cout << "ingrese cantidad " << i + 1 << ":  ";
			cin >> preciounitario[i];
		}
		preciototalxcodigo[i] = cantidad[i] *preciounitario[i];
	}
}

	void imprimedatos(int *n, int *codigo, int *cantidad, float * preciounitario, float *preciototalxcodigo)
	{
		cout << "reporte de datos" << endl << endl;
		cout << "codigo" << "\t" << "CANT" << "\t" << "P.U." << "\t" << "P.TOTAL" << endl;
		for (int i = 0; i < *n; i++)
		{
			
			cout << codigo[i] << "\t" << cantidad[i] << "\t" << preciounitario[i] << "\t" << preciototalxcodigo[i] << endl;
		}

	}



	int main()
	{

		int n;
		cout << "ingrese numero de ventas: "; cin >> n;
		while (n <= 0 || n > 100)
		{
			cout << "ingrese numero de ventas: "; cin >> n;
		}
		int*codigo = new int[n];
		int*cantidad = new int[n];
		float*preciounitario = new float[n];
		float*preciototalxcodigo = new float[n];
		ingresadatos(&n, codigo, cantidad, preciounitario, preciototalxcodigo);
		imprimedatos(&n, codigo, cantidad, preciounitario, preciototalxcodigo);
		delete[]codigo;
		delete[]cantidad;
		delete[]preciounitario;
		_getch();


	}



