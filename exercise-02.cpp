/*
Nama : Ahmad Irfan Fadholi
NPM : 140810180034
Kelas : B
Tgl : 6 Maret 2019
Deskripsi : Membuat kursi tiker bioskop menggunakan struct
*/

#include <iostream>
#include <string.h>//agar dapat menggunakan strcpy
using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};

int main(){
	Theater Bioskop;
	Bioskop.room=7;
	strcpy(Bioskop.seat,"J9");
	strcpy(Bioskop.movieTitle,"Adit & Jarwo");
	cout<<"Ruang : "<<Bioskop.room<<endl;
	cout<<"Kursi : "<<Bioskop.seat<<endl;
	cout<<"Title : "<<Bioskop.movieTitle<<endl;
}
