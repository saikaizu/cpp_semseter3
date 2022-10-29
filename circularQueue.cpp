#include <iostream>
#define n 10

using namespace std;

struct {
    int R,F,data[n], counter;
}antrian;

// Prosess inisialisasi awal
void Awal(){
    antrian.F = 0;
    antrian.R = -1;
    antrian.counter = 0;
}

// Prosess Insert
void Insert() {
    if(antrian.counter < n){
        antrian.R = (antrian.R + 1)%n;
        cout<<"Masukan data : ";
        cin>>antrian.data[antrian.R];
        antrian.counter++;
        cout<<"Data "<<antrian.data[antrian.R]<<" Masuk kedalam antrian\n\n";
    } else {
        cout<<"Antrian penuh\n\n";
    }
}

// Prosess Delete
void Delete() {
    if (antrian.counter > 0) {
        cout<<"Data "<<antrian.data[antrian.F]<<" Keluar dari antrian\n\n";
        antrian.F = (antrian.F + 1)%n;
        antrian.counter--;
    }
}

// Prosess Cetak
void Cetak() {
    if (antrian.counter == 0) {
        cout<<"Antrian kosong\n";
        return;
    }
    if(antrian.R >= antrian.F)
    {
        for (int i = antrian.F; i <= antrian.R; i++){
            cout<<antrian.data[i]<<" ";
        }
    } else {
        for (int i = antrian.F; i < n; i++){
            cout<<antrian.data[i]<<" ";
        }
        for (int i = 0; i <= antrian.R; i++){
            cout<<antrian.data[i]<<" ";
        }
    }
}

// Fungis main
int main(){
    int pilih;
    system("cls");
    Awal();
    do{
    Cetak();
    cout<<"\n------------------------------------\n";
    cout<<"1. Insert\n";
    cout<<"2. Delete\n";
    cout<<"3. Keluar\n";
    cout<<"------------------------------------\n";
    cout<<"Masukan Pilihan : "; 
    cin>>pilih;
      switch(pilih){
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            cout<<"Program Keluar!!!";
            return 0;
            break;
        default:
            cout << "Pilihan tidak ada\n" << endl;
        }   
    }while(pilih != 3);
}

