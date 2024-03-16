//Referencia szerinti paraméterátadás
#include <iostream>
using namespace std;
void csere(int& x, int& y);
int	main()
{
	int	szam1, szam2;
	cout << "Kerem az elso szamot" << endl;
	cin >> szam1;
	cout << "Kerem a masodik szamot" << endl;
	cin >> szam2;

	cout << "A csere elott: " << szam1 << " " << szam2 << endl;
	csere(szam1, szam2);//függvény híváskor adjuk át szam1,szam2 t
	cout << "A csere utan: " << szam1 << " " << szam2 << endl;

	return 0;
}

void csere(int& x, int& y) //érték szerinti paraméterátadás
{
	int seged;
	seged = x;
	x = y;
	y = seged;
}