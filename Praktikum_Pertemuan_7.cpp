#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
private:
	float panjang, lebar;
public:
	float luas;

	void input() { // methode input peresegi panjang

		cout << "Masukan Panjangnya = ";
		cin >> panjang;
		cout << "Masukan Lebarnya = ";
		cin >> Lebar;
	}

	float hitungLuas() {
		return panjang * Lebar;
	}

	void display() {
		cout << "Panjangnya = " << panjang << endl;
		cout << "Lebarnya = " << Lebar << endl;
		cout << "Luasnya = " << hitungLuas() << endl;
	}
};

int main () {
	bangunDatar pp; // deklarasi objek pp dari class bangunDatar
	pp.input();
