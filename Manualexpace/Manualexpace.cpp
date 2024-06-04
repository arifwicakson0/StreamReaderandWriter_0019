#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di prodi TI UMY" << endl;
		//throw 0.5; // melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/ jika selain integer maka block ini akan diesekusi /
			cout << "default pengecualian diexsekusi" << endl;
	}

	return 0;
}