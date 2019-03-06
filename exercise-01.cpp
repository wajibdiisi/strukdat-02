/*
Nama : Ahmad Irfan Fadholi
NPM : 140810180034
Kelas : B
Tgl : 6 Maret 2019
Deskripsi : Membuat biodata menggunakan Struct
*/
#include <iostream>
#include <string.h> //agar dapat menggunakan strcpy
using namespace std;


struct Orang {
	int umur;
	char nama[30];
	char jk;
	char goldar;
};


int main(){
	Orang orang;
	orang.umur =10;
	strcpy(orang.nama,"fahmi"); //input variable kanan (fahmi) ke variable kiri (orang.nama)
	orang.jk='L';
	orang.goldar='O';
	cout<<orang.umur<<endl;
	cout<<orang.nama<<endl;
	cout<<orang.goldar<<endl;
	cout<<orang.jk<<endl;
}
