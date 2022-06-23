#include "sortari.h"


/*
* In sortarea prin selectie, parcurgem intreaga lista pana la penultimul element,
* iar fiecare element este comarat cu cel de dupa el, astfel daca gasim un
* element > sau < ca elementul curent, facem o interschimbare, prin urmare
* lista se va ordona, iar noi vom parcurge de n*n ori lista
* Complexitate O(n*n)
* Info animatie: https://en.wikipedia.org/wiki/Selection_sort
*/

void selectionSort(int* v, int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}


/*
* In sortarea bublesort, vom parcurge lista si vom compara elementele 2 cate doua,
* iar daca nu sunt crescatoare le interschimbam. Dupa parcurgerea ei, aceasta se va 
* parcurge pana cand este complet sortata dupa acelasi procedeu
* Complexitate O(n*n)
* Info animatie: https://en.wikipedia.org/wiki/Bubble_sort
*/

void bubleSort(int* v, int n)
{
	int ok;
	do {
		ok = 1;
		for (int i = 0; i < n-1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
				ok = 0;
			}
		}			
	} while (ok != 1);
}


/*
* In sortarea quickSort, vom lua capetele inferioare si superioare a listei,
* luam un pivot ce se afla la mijloc, si parcurgem elementele de la
* inceput pana la primul element > ca pivotul si parcurgem elementele de la
* final pana la primul element < ca pivotul; le interschimbam si cat timp nu am depasit capetele 
* repetam acest procedeu. La final impartim problema in 2: sortam lista din stanga pivotului
* si sortam lista din dreapta pivotului pri nacelasi procedeu folosind recursivitatea
* Complexitate O(n*log n)
* Info animatie: https://ro.wikipedia.org/wiki/Quicksort
*/

void quickSort(int *v, int inf, int sup) {
    int x, i, j, t;
    i = inf;
    j = sup;
    x = v[(i + j) / 2];
    do {
        while ((i < sup) && (v[i] < x)) i++; 
        while ((j > inf) && (v[j] > x)) j--;
        if (i <= j) {
            t = v[i];
            v[i] = v[j];
            v[j] = t;
            i++;
            j--;
        }
    } while (i <= j);
    if (inf < j) quickSort(v,inf, j);
    if (i < sup) quickSort(v, i, sup);
}