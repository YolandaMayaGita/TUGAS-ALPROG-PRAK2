#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main ()
{
	int x;
	
	cout<<"Masukkan Angka : "; cin>>x;
	cout<<endl<<endl;
	
	string message;
	message=x%2==1?"Angka termasuk bilangan ganjil":"Angka termasuk bilangan genap";
	cout<<message;
	
getch();
return 0;
}
