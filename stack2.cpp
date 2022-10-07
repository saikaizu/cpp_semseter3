#include <iostream>
#define n 10
using namespace std;

//Deklarasi struct tumpukan
struct Stack {
	int top, data[n];
}Tumpukan;

//inisialisasi nilai top
void init(){
	Tumpukan.top = -1;
}

//memeriksa tumpukan kosong?
bool isEmpty() {
  return Tumpukan.top == -1;
}

//memeriksa tumpukan penuh?
bool isFull() {
	return Tumpukan.top == n-1;
}

//memeriksa masih bisa diisi
bool BisaIsi() {
	return Tumpukan.top < n-1;
}

//memeriksa stack ada isi
bool AdaIsi() {
	return Tumpukan.top > -1;
}


//tambah data ke tumpukan
//void push() {
//   if (BisaIsi()) {
//    Tumpukan.top++;
//    cout<<"\nMasukkan data = "; 
//	cin>>Tumpukan.data[Tumpukan.top];
//    cout<<"Data "<<Tumpukan.data[Tumpukan.top]<<" masuk ke stack"<<endl;
//	}
//	else
//	{
//		cout<<"\nTumpukan penuh"<<endl;
//	} 
//}

//tambah data ke tumpukan
void push() {
   if (isFull()) {
		cout<<"\nTumpukan penuh"<<endl;
	}
	else {
    Tumpukan.top++;
    cout<<"\nMasukkan data = "; 
	cin>>Tumpukan.data[Tumpukan.top];
    cout<<"Data "<<Tumpukan.data[Tumpukan.top]<<" masuk ke stack"<<endl;
	}
}


//hapus data dari tumpukan
//void pop() {
//	if (AdaIsi()) {
//		cout << "\nData "<<Tumpukan.data[Tumpukan.top]<<" sudah terambil"<<endl;
//    	Tumpukan.top--;
//	}
//	else {
//		cout << "\nData kosong\n"<<endl;
//	}
//}

//hapus data dari tumpukan
void pop() {
	if (isEmpty()) {
		cout << "\nData kosong\n"<<endl;
	}
	else {
    cout << "\nData "<<Tumpukan.data[Tumpukan.top]<<" sudah terambil"<<endl;
    Tumpukan.top--;
	}
}

//cetak tumpukan
void printStack() {
	if (isEmpty()) {
		cout<< "Tumpukan kosong";
	}
	else {
    cout << "\nTumpukan : ";
		//for (int i = Tumpukan.top; i >= 0; i--)
		for (int i = 0; i <= Tumpukan.top; i++)
		cout<<Tumpukan.data[i]<<((i == 0) ? "," : "");
	}
}

int main() {
	int pilihan;
	init();
	do {
    
		cout << "\n1. Input (Push)\n"
        <<"2. Hapus (Pop)\n"
        <<"3. Cetak (Print)\n"
        <<"4. Keluar (Quit)\n"
        <<"Masukkan Pilihan: ";
		cin>>pilihan;
		switch (pilihan)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printStack();
			break;
		case 4:
			return 0;
			break;
		default:
      cout<<"Pilihan tidak tersedia"<<endl;
			break;
		}
	} while (pilihan!=4);
}
