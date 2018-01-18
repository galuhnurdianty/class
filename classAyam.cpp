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
	
	cout <<"1. " << a.jenisAyam;
	cout<< "Warnanya " << a.warnaBulu;
	a.bersuara("krukkrukkruk ");
	a.telur (200);
	a.makanan("Bekatul, Sisa Nasi/sayur");
	a.harga("RP.200.000");
	cout << "\n";
	
	cout <<"2. " << b.jenisAyam;
	cout<< "Warnanya " << b.warnaBulu;
	b.bersuara("pokpokpok ");
	b.telur (275);
	b.makanan("Bama");
	b.harga("RP.75.000");
	cout << "\n";
	
	cout <<"3. " << c.jenisAyam;
	cout<< "Warnanya " << c.warnaBulu;
	c.bersuara("kukuruyuk ");
	c.telur (50);
	c.makanan("Nasi");	
	c.harga("RP.150.000");
	cout << "\n";
	
	cout <<"4. " << d.jenisAyam;
	cout<< "Warnanya " << d.warnaBulu;
	d.bersuara("tektekkotetektek ");
	d.telur (100);
	d.makanan("Beras");
	d.harga("RP.175.000");
	cout << "\n";
}
void ayam::bersuara(string bunyi){
	cout << "Bunyinya "<<bunyi<< " !!"<<endl;}
void ayam::makanan(string makan){
	cout << "\tMakanannya "<<makan<< "  "<<endl;}
void ayam::harga(string dijual){
	cout << "\tHarga Jual "<<dijual<< "  "<<endl;}
void ayam::telur(int jmlh){
	cout << "\tJumlah Telur 1 Induk Per Tahun "<<jmlh<< "  "<<endl;}
