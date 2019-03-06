/*
Nama : Ahmad Irfan Fadholi
NPM : 140810180034
Kelas : B
Tgl : 6 Maret 2019
Deskripsi : Program gaji karyawan
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Pegawai{
	char nip[20];
	char nama[30];
	int gol;
	int gaji;
};
typedef Pegawai Karyawan[30];
void banyakPegawai(int &n);
void inputPegawai(Karyawan Kry,int n);
void gajiPegawai (Karyawan Kry,int n);
void cariGaji(Karyawan Kry, int n);
int rataGaji(Karyawan Kry, int n);
void gajiTerendah(Karyawan Kry, int n);
void gajiTertinggi(Karyawan Kry, int n);
void cetakDaftar(Karyawan Kry, int n);
int ulang();
int awal();
void sortingNIP(Karyawan Kry, int n);


int main(){
	
	Karyawan Kry;
	int n,rataRata,menu;
	menu=0;
	banyakPegawai(n);
	inputPegawai(Kry,n);
	sortingNIP(Kry,n);
	gajiPegawai(Kry,n);
	while(menu>=0){
	switch(menu){
		case 0 :
		menu=awal();
		break;
		case 1 :
		cariGaji(Kry,n);
		menu=ulang();
		break;
		case 2 :
		rataRata=rataGaji(Kry,n);
		cout<<"Rata-rata Gaji adalah : "<<rataRata<<endl;
		menu=ulang();
		break;
		case 3 :
		gajiTerendah(Kry,n);
		gajiTertinggi(Kry,n);
		menu=ulang();
		break;
		case 4 : 
		
		cetakDaftar(Kry,n);
		menu=ulang();
		break;
	}
	
	
}
}

void banyakPegawai (int &n){
	cout<<"Masukkan jumlah pegawai : ";cin>>n;
}
void inputPegawai(Karyawan Kry,int n){
	for (int i=0;i<n;i++){
		cout<<"Masukkan nama pegawai ke-"<<i+1<<": ";cin>>Kry[i].nama;
		cout<<"Masukkan NIP pegawai  : ";cin>>Kry[i].nip;
		cout<<"Masukkan gol pegawai  : ";cin>>Kry[i].gol;
	}
}
void gajiPegawai(Karyawan Kry, int n){
	for (int i=0;i<n;i++){
		if (Kry[i].gol==1){
			Kry[i].gaji=2000000;
		}
		else if (Kry[i].gol==2){
			Kry[i].gaji=3000000;
		}
		else if (Kry[i].gol==3){
			Kry[i].gaji=5000000;
		}
		else if (Kry[i].gol==4){
			Kry[i].gaji=8000000;
		}
	}
}

void cariGaji(Karyawan Kry, int n){
	int gol;
	cout<<"\nCari Gaji\n";
	cout<<"Masukkan Golongan : ";cin>>gol;
	cout<<"Pegawai dengan gaji Golongan "<<gol<<" adalah : ";
	for (int i=0;i<n;i++){
		if (Kry[i].gol==gol){
			cout<<Kry[i].nama<<" ";
		}
		}
	cout<<endl;
	}


int rataGaji(Karyawan Kry,int n){
	int rataRata=0;
	for (int i=0;i<n;i++){
		rataRata+=Kry[i].gaji;
	}
	rataRata/=n;
	return rataRata;
}

void gajiTerendah(Karyawan Kry,int n){
	int index=0;
	for (int i=0;i<n-1;i++){
		if(Kry[i].gol>Kry[i+1].gol){
			index=i+1;
		}
		else 
			index=i;
	}
	cout<<"Gaji Terendah adalah "<<Kry[index].nama<<" dengan gaji : "<<Kry[index].gaji<<endl;
}


void gajiTertinggi(Karyawan Kry,int n){
	int temp=0;
	for (int i=0;i<n-1;i++){
		if(Kry[i].gol<Kry[i+1].gol){
			temp=i+1;
		}
		else 
			temp=i;
	}
	cout<<"Gaji Tertinggi adalah "<<Kry[temp].nama<<" dengan gaji : "<<Kry[temp].gaji;
}


void cetakDaftar (Karyawan Kry,int n){
	cout<<"\n\nData Pegawai \n";
	for (int i=0;i<n;i++){	
	cout<<"Nama Pegawai		: "<<Kry[i].nama<<endl;
	cout<<"NIP	Pegawai		: "<<Kry[i].nip<<endl;
	cout<<"Golongan Pegawai	: "<<Kry[i].gol<<endl;
	cout<<"Gaji Pegawai		: "<<Kry[i].gaji<<endl;
	}
}
int ulang (){
	char n;
	int pil;
	ulangLagi:
	cout<<"\nApakah ingin mencari yang lain (Y/N) : ";
	cin>>n;
		if (n=='Y' || n=='y')
			pil=0;
		else if (n=='N' || n=='n')
			pil=-1;
		else{
		cout<<"Input yang anda masukkan salah \n";
		goto ulangLagi;
		}
	return pil;
	}
	
int awal(){
	int n;
	cout<<"Masukkan Pilihan : \n";
	cout<<"1.Mencari Gaji\n";
	cout<<"2.Rata-rata Gaji\n";
	cout<<"3.Gaji Tertinggi dan Terendah \n";
	cout<<"4.Cetak Daftar\n";
	cin>>n;
	return n;
}


void sortingNIP (Karyawan Kry, int n){
		int i,j,k;
	Pegawai temp;
	int selisih[100];
	for (i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			selisih[i]=strcmp(Kry[j].nip,Kry[j+1].nip);
			if(selisih[i]>0){
		 		swap(Kry[j],Kry[j+1]);
				}
			}
		}
	}
