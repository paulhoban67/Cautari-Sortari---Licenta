#include <iostream>
#include "cautari.h";
#include "sortari.h"

using namespace std;

int main()
{
	// CAUARE SECVENTIALA

	int v[10] = { 1, 4, 2, 5, 9, 0, 3, 8, 7, 6 };
	int nr1 = 6, nr2 = 44;
	bool c1_1 = cautareSecventiala1(v, 10, nr1); // se cauta 6 cu primul algoritm 
	bool c2_1 = cautareSecventiala2(v, 10, nr1); // se cauta 6 cu al doilea algoritm
	bool c1_2 = cautareSecventiala1(v, 10, nr2); // se cauta 44 cu primul algoritm
	bool c2_2 = cautareSecventiala2(v, 10, nr2); // se cauta 44 cu al doilea algoritm

	if (c1_1 == true) cout << nr1 << " a fost gasit - secvential 1" << endl;
	else cout << nr1 << " nu a fost gasit - secvential 1" << endl;

	if (c2_1 == true) cout << nr1 << " a fost gasit - secvential 2" << endl;
	else cout << nr1 << " nu a fost gasit - secvential 2" << endl;

	if (c1_2 == true) cout << nr2 << " a fost gasit - secvential 1" << endl;
	else cout << nr2 << " nu a fost gasit - secvential 1" << endl;

	if (c2_2 == true) cout << nr2 << " a fost gasit - secvential 2" << endl;
	else cout << nr2 << " nu a fost gasit - secvential 2" << endl;


	// CAUTARE BINARA

	int vec[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n1 = 7, n2 = 11;
	bool b1 = cautareBinara(vec, 10, nr1); // se cauta 7 binar 
	bool b2 = cautareBinara(vec, 10, nr2); // se cauta 11 binar 
	
	if (b1 == true) cout << n1 << " a fost gasit - binar" << endl;
	else cout << n1 << " nu a fost gasit - binar" << endl;

	if (b2 == true) cout << n2 << " a fost gasit - binar" << endl;
	else cout << n2 << " nu a fost gasit - binar" << endl;


	// SELECTION SORT

	cout << "Selection Sort: ";
	int vector[10] = { 1, 4, 2, 5, 9, 0, 3, 8, 7, 6 };
	selectionSort(vector, 10);
	for (int i = 0; i < 10; i++)
		cout << vector[i] << " ";
	cout << endl;


	// BUBLE SORT

	cout << "Buble Sort: ";
	int vector1[10] = { 1, 4, 2, 5, 9, 0, 3, 8, 7, 6 };
	bubleSort(vector1, 10);
	for (int i = 0; i < 10; i++)
		cout << vector1[i] << " ";
	cout << endl;


	// QUICK SORT

	int arr[] = { 1, 4, 2, 5, 9, 0, 3, 8, 7, 6 };
	quickSort(arr, 0, 9);
	cout << "Quick Sort: ";
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";

	return 0;
}