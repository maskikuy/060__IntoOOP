#include <iostream>
using namespace std;

class BangunDatar {
	private:
		float panjang, lebar;
	public:
		float luas;

		void input() {
			cout << "Masukan Panjangnya = ";
			cin >> panjang;
			cout << "Masukan Lebarnya = ";
			cin >> lebar;
		}

		float hitungluas() {
			return panjang * lebar;
		}

		void display() {
