#include "cautari.h"

/*
* In cautarea secventiala, parcurgem intreaga lista, iar daca gasim elementul 
* pe care il cautam, vom return true, iar daca dupa parcurgerea listei,
* nu am returnat nimic => elementul nu se gaseste in lista
* Complexitate O(n)
*/

bool cautareSecventiala1(int *v, int n, int nr) {
	bool ok = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == nr) {
			ok = 1;
			return ok;
		}
	}
	return ok;
}

bool cautareSecventiala2(int* v, int n, int nr) {
	bool ok = 0;
	int i = 0;
	while (i < n && ok == 0) {
		if (v[i] == nr)
		{
			ok = 1;
			return ok;
		}
		else i++;
	}
	return ok;
}


/*
* In cautarea binara, vom avea o lista ordonata, iar cautarea noastra
* se restrange in a cauta doar in jumatatea listei, astfel
* vedem in ce jumatate se afla numarul, iar recursiv facem aceasta verificare
* pana ajungem pe pozitia numarului si returnam true; daca dupa parcurgerea
* jumatatilor listei, * nu am returnat nimic => elementul nu se gaseste in lista
* Complexitate: O(log n)
*/

bool cautareBinara(int* v, int n, int nr) {
	bool ok = 0;
	if (nr >= v[0] && nr <= v[n - 1]) {
		int ls = 0, ld = n - 1;
		while (ls <= ld && ok == 0) {
			int m = (ls + ld) / 2;
			if (v[m] == nr)
			{
				ok = 1;
				return ok;
			}
			else
				if (nr < v[m]) ld = m - 1;
				else
					ls = m + 1;
		}
	}
	return ok;
}