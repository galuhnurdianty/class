#include <iostream>
#include <string>
using namespace std;

class ayam{
	public:
	void bersuara(string bunyi);
	void telur(int jmlh);
	void makanan(string makan);
	void harga(string dijual);
		string warnaBulu;
		string jenisAyam;
};

int main(){
	ayam a,b,c,d;
	
	a.jenisAyam = "Ayam Kalkun ";
	b.jenisAyam = "Ayam Petelur/Ras ";
	c.jenisAyam = "Ayam Kampung ";
	d.jenisAyam = "Ayam Kate ";

	a.warnaBulu = "Burbon Red ";
	b.warnaBulu = "Coklat ";
	c.warnaBulu = "Hitam ";
	d.warnaBulu = "Putih ";
	
	cout<<"\n\t\t\tNAMA : Galuh Nurdianty\n";
	cout<<"\t\t\tNPM  : 16630938\n";
	cout<<"\t\t\tProgram Jenis-Jenis Ayam\n";
	cout<<"------------------------------------------------------------------------------ \n";
}
