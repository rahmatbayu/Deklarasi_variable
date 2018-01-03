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
}
