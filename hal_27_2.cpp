#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main ()
{
	float x,a;
	
	cout<<"Masukkan suhu : "; cin>>a;
	cout<<endl<<endl;
	cout<<"Masukkan batasan suhu : "; cin>>x;
	cout<<endl<<endl;
	
	if(a<=x) {
		cout<<"Suhu yang anda masukkan termasuk kategori dingin";
	}
	else {
		cout<<"suhu yang anda masukkan termasuk kategori panas";
	}
	
getch();
return 0;

}
