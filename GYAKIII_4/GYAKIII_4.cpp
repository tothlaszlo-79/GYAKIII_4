//Referencia szerinti param�ter�tad�s
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
	csere(szam1, szam2);//f�ggv�ny h�v�skor adjuk �t szam1,szam2 t
	cout << "A csere utan: " << szam1 << " " << szam2 << endl;

	return 0;
}

void csere(int& x, int& y) //�rt�k szerinti param�ter�tad�s
{
	int seged;
	seged = x;
	x = y;
	y = seged;
}