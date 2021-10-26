//Ctrl + Shift + B untuk Compile
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"Konverter fisika\n";
    int pilihan;
    float input, output;
    while (true) {
        cout<<"Silahkan memilih salah satu dari mode berikut:\n";
        cout<<"1. cm ke inci\n";
        cout<<"2. inci ke cm\n";
        cout<<"3. cm ke kaki\n";
        cout<<"4. kaki ke cm\n";
        cout<<"5. Exit\n";
        cout<<"Masukkan pilihan Anda: "; cin>> pilihan;
        
        if(pilihan == 1){
            cout<<"Masukkan panjang (dalam satuan cm): "; cin>> input;
            output = input/2.54;
            cout<<"Panjang dalam satuan inci adalah: "<<setprecision(4)<<output<<" inci\n\n";
        } else if(pilihan == 2){
            cout<<"Masukkan panjang (dalam satuan inci): "; cin>> input;
            output = input*2.54;
            cout<<"Panjang dalam satuan cm adalah: "<<output<<" cm\n\n";
        } else if(pilihan == 3){
            cout<<"Masukkan panjang (dalam satuan cm): "; cin>> input;
            output = input/30.48;
            cout<<"Panjang dalam satuan kaki adalah: "<<setprecision(4)<<output<<" kaki\n\n";
        } else if(pilihan == 4){
            cout<<"Masukkan panjang (dalam satuan kaki): "; cin>> input;
            output = input*30.48;
            cout<<"Panjang dalam satuan cm adalah: "<<output<<" cm\n\n";
        } else if(pilihan == 5){
            cout<<"Terima hasih telah menggunakan program sederhana ini\n";
            break;
        } else{
            cout<<"Maaf, pilihan tidak tersedia\n\n";
        }
    }

    return 0;
}