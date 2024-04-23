// OOP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class bangunDatar {
	//akses modifier
	private:
		float panjang, lebar;
	public:
		float luas;

		void input() { // methode input persegi panjang

			cout << "Masukan Panjanganya : ";
			cin >> panjang;
			cout << "Masukan Lebarnya : ";
			cin >> lebar;
		}
};
