#include <fstream>
#include <exception>
//untuk obyek exception yang akan di gunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penada 1:...
	try {
		array<int, 3> data = { 6,7,8 };
		//pesan array integer 3 elemen
		cout << data. at(5) << endl;
		//memanggil array elemen ke 5 
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exception 
		cout << e.what() << endl;
		/*akan di eksekusi karena array data hanya memiliki 3 elemen*/
	}
	cout << "Baris program yang terakhir" << endl;
	/*penanda 2: bahwa proggram berjalan tanpa berhenti meskipun terjadi kesalahan*/
	return 0;
}