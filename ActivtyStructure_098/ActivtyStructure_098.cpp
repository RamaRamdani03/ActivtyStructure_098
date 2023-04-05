#include <iostream>
using namespace std;

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};


int main() {
	Mahasiswa mhs, mhs2;

	mhs.nim = "20210140019";
	mhs.umur = 20;
	mhs.nama = "Ardian Mulya";
	mhs.alamat = "Wonosobo";

	cout << "Masukan NIM : ";
	cin >> mhs2.nim;
	cout << "Masukan umur : ";
	cin >> mhs2.umur;
	cout << "Masukan nama : ";
	cin >> mhs2.nama;
	cout << "Masukan alamat : ";
	cin >> mhs2.alamat;

	cout << "NIM : " << mhs.nim;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : " << mhs.alamat;

	cout << "\n\nNim : " << mhs2.nim;
	cout << "\nUmur : " << mhs2.umur;
	cout << "\nNama : " << mhs2.nama;
	cout << "\nAlamat : " << mhs2.alamat;

}