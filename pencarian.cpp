#include <iostream>
using namespace std;

int main() {
int i,j;
int x;
bool hasil;

cout <<"Masukan elemen : ";
cin >> x;
int nilai[x];
	for (i=0; i<x; i++) {
	cout <<"Data yang masuk : ";
	cin >> nilai[i];
		} 
cout <<"Data yang di cari : ";
cin >> j;
for (i=0; i<x; i++) {
	if (nilai[i] == j) {
		hasil = true;
		break;
	}
	else {
		hasil = false;
	}
}
if (hasil == true) {
		cout <<"Ada";
	}
	else {
		cout << "Tidak ada";
	}
	return 0;
}