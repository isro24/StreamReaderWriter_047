#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;

	// Membuka file dalam mode menulis
	ofstream outfile;
	// Menunjukan ke sebuah nama file
	outfile.open("contohFile.txt");

	cout << ">= Menulis file \'q\ untuk keluar" << endl;

	// Unlimited loop untuk menulis
	while (true) {
		cout << "_ ";
		// Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// Loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		// Menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	// Selesai dalam menulis sekarag tutup filenya
	outfile.close();

	// Membuka file dalam mode membaca
	ifstream infile;
	// Menunjuk ke sebuah file
	infile.open("contohFile.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
	// Jika file ada maka
	if (infile.is_open())
	{
		// Melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			// Dan tampilkan disini
			cout << baris << '\n';
		}
		// Tutup file tersebut seteah selesai
		infile.close();
	}

}