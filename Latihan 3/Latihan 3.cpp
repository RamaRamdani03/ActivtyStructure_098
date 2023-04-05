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
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << "Masukan nama : ";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat : ";
		cout << "\n\tMasuka Desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tMasukan Kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
	}

	for (int i = 0; i < 3; i++) {
		cout << "\n\nNIM : " << mhs[i].nim;
		cout << "\nUmur : " << mhs[i].umur;
		cout << "\nNama : " << mhs[i].nama;
		cout << "\nAlamat :";
		cout << "\n\tDesa : " << mhs[i].alamat.desa;
		cout << "\n\tKota : " << mhs[i].alamat.kota;
	}
}