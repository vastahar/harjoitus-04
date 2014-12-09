// HARJOITUS 4
// Harri Vastam‰ki
// IIOS14S1

#include <iostream> //input-output stream
using namespace std; //Nime‰mis
#define MINIMI 10 //vanha tapa m‰‰ritell‰ vakio
const int MAKSIMI = 20; //uusi, suositeltava tapa m‰‰ritell‰ vakio
int summa; //julkisten muuttujien m‰‰rittely
void Laske(int, int); //aliohjelmien esittely
void main() //p‰‰ohjelma
{
	int luku1 = 2; //m‰‰rittell‰‰n paikalliset muuttujat
	int luku2;
	cout << "Syˆt‰ luku: "; //tulostetaan ruudulle teksti
	cin >> luku2; //n‰pp‰imistˆn luku
	Laske(luku1, luku2); //aliohjelma kutsu
	if (summa < MINIMI) //ehto
		cout << "Summa on pienempi kuin " << MINIMI;
	else
		if (summa > MAKSIMI)
			cout << "Summa on suurempi kuin " << MAKSIMI;
		else
			cout << "Summa on " << MINIMI << "ja " << MAKSIMI << "v‰lill‰";
}
void Laske(int eka, int toka) //aliohjelman m‰‰ritys
{
	summa = eka + toka;
}