#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	// DEKLARASI VARIABEL 
	int i,j,n,b;
	double c[i][j], ac[3][5] = {{4,4,5,3,3},{3,3,4,2,3},{5,4,2,2,2}};
	double w[] = {5,3,4,4,2};
	double jumlah,hasilkali,mc1,mc2,mc3,mc4,mc5,h1,h2,h3,h4,h5,h11;	
		//  PENCARIAN NILAI MA
		mc1=max(4,max(3,5));
		mc2=max(4,max(3,4));
		mc3=max(5,max(4,2));
		mc4=max(3,max(2,2));
		mc5=max(3,max(3,2));
	
	// MENAMPILKAN NILAI
	cout<<"MATRIKS X : "<<endl;
	for(i=0;i<3;i++){
		for (j=0;j<5;j++) {
			cout<<ac[i][j]<<" | ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"MATRIKS R : "<<endl;
	for(i=0;i<3;i++){
		for (j=0;j<1;j++) { n=ac[i][j]; h1=n/mc1; cout<<h1<<" | "; }
		for (j=1;j<2;j++) {	n=ac[i][j]; h2=n/mc2; cout<<h2<<" | "; }
		for (j=2;j<3;j++) { n=ac[i][j]; h3=n/mc3; cout<<h3<<" | "; }
		for (j=3;j<4;j++) {	n=ac[i][j]; h4=n/mc4; cout<<h4<<" | "; }
		for (j=4;j<5;j++) { n=ac[i][j]; h5=n/mc5; cout<<h5<<" | "; }
		cout<<endl;
	}
	
	cout<<endl<<"BOBOT W : "<<endl;
		for (j=0;j<5;j++) {
			cout<<w[j]<<" | ";			
}
	cout<<endl;
	
	cout<<endl<<"MATRIKS R * W : "<<endl;
	for(i=0;i<3;i++){
		for (j=0;j<1;j++) { b=w[j]; n=ac[i][j]; h1=n/mc1; hasilkali=h1*b; cout<<hasilkali<<" | "; }
		for (j=1;j<2;j++) { b=w[j]; n=ac[i][j]; h2=n/mc2; hasilkali=h2*b; cout<<hasilkali<<" | "; }
		for (j=2;j<3;j++) { b=w[j]; n=ac[i][j]; h3=n/mc3; hasilkali=h3*b; cout<<hasilkali<<" | "; }
		for (j=3;j<4;j++) { b=w[j]; n=ac[i][j]; h4=n/mc4; hasilkali=h4*b; cout<<hasilkali<<" | "; }
		for (j=4;j<5;j++) { b=w[j]; n=ac[i][j]; h5=n/mc5; hasilkali=h5*b; cout<<hasilkali<<" | "; }
		cout<<endl;
			cout << "HASIL AKHIR  :"<<endl;
	        cout << "Nilai A1 : "<<h1<<endl;
			cout << "Nilai A2 : "<<h2<<endl;
			cout << "Nilai A3 : "<<h3<<endl;

}}
