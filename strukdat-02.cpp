/*
Nama : Ahmad Irfan Fadholi
NPM : 140810180034
Kelas : B
Tgl : 6 Maret 2019
*/


#include <iostream>

using namespace std;

void moveZeroToFront (int arr[], int n){
	int temp;
	for (int i=0;i<n;i++){
		if (arr[i]==0){
		temp=arr[i];
		arr[i]=arr[0];
		arr[0]=temp;
		}
		}
		
	}

void input(int (&arr)[100], int &n){
	cout<<"Masukkan panjang data :";cin>>n;
	cout<<"Masukkan data cth[1 2 3 4 5]: ";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}

}
void output (int arr[],int n){
	cout<<"Hasil :";
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";	
	}
}


int main(){	
	int arr[100];
	int n;
	input (arr,n);
	moveZeroToFront(arr,n);
	output(arr,n);
	
}
