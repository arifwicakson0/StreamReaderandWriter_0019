#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string Namafile;

	// membuka file dalam mode menulis
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "_";
		// mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika memasukan karakter q
		if (baris == "q") break;
		// menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	// selesai dalam menulis sekarang tutup filenya
	outfile.close();

	// Membuka file dalam mode membaca
	ifstream infile;
	// Menunjukan ke sebuah file
	outfile.close();

	ifstream infile;
	// Menunjukan ke sebuah file
	infile.open(Namafile + ".txt", ios::in);

	cout << endl << ">= Membuka dan membaca file " << endl;
	// jika file ada maka
	
	cout << endl << ">= Membuka dan membaca file " << endl;
	// jika file ada maka
	if (infile.is_open())
	{
		// melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			// dan tampilkan di sini
			cout << baris << 'n';
		}
		// tutup file tersebut setelah selesai
		infile.close();
	}
	// jika tidak di temukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}