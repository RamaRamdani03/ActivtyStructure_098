#include <iostream>
using namespace std;

struct DetailAlamat
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char nim[12];
	char nama[20];
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukan Nim : ";
		cin.getline(mhs[i].nim, 12);
		cout << "Masukan Umur : ";
	}
}