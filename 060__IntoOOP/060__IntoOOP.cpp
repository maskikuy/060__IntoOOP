#include <iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama;
		int umur;
		string jurusan;

		void output() {
			cout << "Nama : " << nama << endl;
			cout << "Umur : " << umur << endl;
			cout << "Jurusan : " << jurusan << endl;
		}
};

class Matakuliah{
	private:
		string KodeMk;
		string NamaMk;
		int sks;

	public:
		void input() {
			cout << "Kode MK : ";
			cin >> KodeMk;
			cout << "Nama MK : ";
			cin >> NamaMk;
			cout << "SKS : ";
			cin >> sks;
		}