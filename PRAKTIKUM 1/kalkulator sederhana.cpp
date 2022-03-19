#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main ()
{
		int bil1, bil2, pil;
		float hasil;
		string operasi;
		
		cout <<"PILIH MENU"<<endl;
		cout <<"1. PENJUMLAHAN"<<endl;
		cout <<"2. PENGURANGAN"<<endl;
		cout <<"3. PERKALIAN"<<endl;
		cout <<"4. PEMBAGIAN"<<endl;
		cout <<endl;
		
		cout <<"MASUKKAN PILIHAN : ";
		cin >> pil;
		cout <<"MASUKKAN BILANGAN PERTAMA : ";
		cin >>bil1;
		cout <<"MASUKKAN BILANGAN KEDUA : ";
		cin >>bil2;
		
		switch(pil)
		{
			case 1 : hasil=bil1+bil2;
					operasi='+';
					break;
			case 2 : hasil=bil1-bil2;
					operasi='-';
					break;
			case 3 : hasil=bil1*bil2;
					operasi='*';
					break;
			case 4 : hasil=bil1/bil2;
					operasi='/';
					break;
			default :
					cout <<"SALAH MEMASUKKAN MENU"<<endl;
		}
		
		cout <<"-------------------------"<<endl;
		cout <<"	"<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
		cout <<"-------------------------"<<endl;
		getch ();
}
