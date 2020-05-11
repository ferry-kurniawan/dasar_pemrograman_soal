#include <iostream>
using namespace std;
void orang(int nilai){
	string kategori;
	char status;

	cout<<"Hasil " <<kategori;
	if(nilai<75){
		kategori =  " Tidak lulus";
	}else if(nilai==75){
		kategori =  " Lulus";
	}else if(nilai>75){
		kategori =  " Lulus";
	}
	else{
		kategori="salah input";
	}
	cout<<"Nilai : "<<kategori<<endl;
	cout<<"--------------\n";


}
int main()
{
	int kategori,nilai;
	char status;
	do{
		cout<<"Masukan Nilai : ";
		cin>>nilai;
		cout<<"===============\n";
		orang(nilai);

		cout<<"apakah ingin melanjutkan program lagi(y/n)?\n";
		cin>>status;
	}while(status=='y');


	{
		cout<<("perulangan selesai!\n");
	}
	system("pause");
	return 0;
}



