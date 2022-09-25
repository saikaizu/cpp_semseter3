//stack_dengan_operator_penjumlahan
//tugas_mata_kuliah_struktur_data

//Buatlah program yang akan mengisi dan menjumlahkan isi stack.

#include<iostream>

#define maxstack 5

using namespace std;


struct STACK

{

	int top;

	float data[4];

};

float dta;

struct STACK stackbaru;

using namespace std;



int main()

{

cout<< "|===============================================|" << endl;
cout<< "|	PROGRAM MENJUMLAHKAN STACK DATA		|" << endl;
cout<< "|	Sai Pratama Putra - 211011400994	|" << endl;
cout<< "|===============================================|" << endl;
cout<< endl;


	int n,i, nilai, hasil=0;

	cout<<"Masukan jumlah data = ";

	cin>>n;
	
	cout<<endl;

		for(i=1;i<=n; i++)

		{

			cout<<"Masukkan nilai ke- "<<i<<" = ";

			cin>>nilai;

			hasil=hasil+nilai;
			
			cout<<endl;

		}

		if(hasil%2==0)

		{
			cout<<"\n===================================================================" ;
			cout<<"\n| Jumlah semua nilai diatas adalah "<<hasil<<" dan merupakan bilangan genap |";
			cout<<"\n===================================================================" ;

		}else{

			cout<<"\n====================================================================" ;
			cout<<"\n| Jumlah semua nilai diatas adalah "<<hasil<<" dan merupakan bilangan ganjil |";
			cout<<"\n====================================================================" ;
		}

}
