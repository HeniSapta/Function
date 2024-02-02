#include <iostream>
using namespace std;

/*
// Latihan void 1

// membuat fungsi hello()
void hello(){
    cout<<"Hello selamat datang!\n";
}

int main(){
    // memanggil fungsi hello()
    hello();
}

*/
/*
// Latihan void 2
// Membuat fungsi hello()
void hello(){
    cout<<"Hello selamat datang!\n";
}

int main(){
    // memanggil fungsi hello()
    hello();
    hello();
    hello();
    hello();
    hello();
}
*/
/*
// Latihan void 3
// Membuat fungsi hello() yg memiliki parameter nilai
void hello(string nama){
    cout<<" Hello selamat datang "<<nama<<"!\n";
}

int main(){
    // memanggil fungsi hello() dgn memberi nilai parameter
    hello("Andi");
    hello("Ani");
    hello("Ana");
    hello("Ali");
    hello("Adi");
}
*/
/*
// Latihan void 3
// Membuat fungsi yg memiliki parameter nilai
void fungsiluas(int p, int l){
    int luas = p*l;
    cout<<"Hasil luasnya adalah "<<luas;
}

int main(){
    // Memanggil fungsi dgn memberi nilai parameter
    fungsiluas(4,5);
}
*/

// Latihan void 4
// Membuat fungsi yg memiliki parameter nilai
void fungsiluas(int p, int l){
    int luas = p*l;
    cout<<"Hasil luasnya adalah"<<luas;
}

int main(){
    int panjang, lebar;
    cout<<"Inputkan nilai panjang = ";
    cin>>panjang;
    cout<<"Inputkan nilai lebar = ";
    cin>>lebar;

    // Memanggil fungsi dgn memberi nilai parameter
    fungsiluas(panjang,lebar);
}

/*
// Latihan void 5
// Deklarasi fungsi
void fungsi luas(int p, int l);

int main(){
    int panjang, lebar;
    // Memanggil funngsi dgn memeberi nilai parameter
    cout<<"Inputkan nilai panjang = ";
    cin>>panjang;
    cout<<"Inputkan nilai lebar = ";
    cin>>lebar;
    fungsi luas(panjang,lebar);
}

// Definisi fungsi
void funngsi luas(int p, int i){
    int luas = p*l;
    cout<<"Hasil luasnya adalah "<<luas;
}
*/
