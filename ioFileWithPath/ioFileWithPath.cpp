#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukka Nama File : ";
	cin >> NamaFile;

	// Membuka file dalam mode menulis
	ofstream outfile;
	// Menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << endl << ">= Menulis file, \'q\' untuk keluar" << endl;


}