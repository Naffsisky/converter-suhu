#include <iostream>
using namespace std;

int main() 
{
  int celcius, kembali, pilihan;
  float farenheit;
  float reamur;
  double jawaban;
  double total;

  cout << "1. Celcius to farenheit \n";
  cout << "2. Celcius to reamur \n";
  cout << "3. Farenheit to Celcius \n";
  cout << "4. Farenheit to reamur \n";
  cout << "5. Reamur to celcius \n";
  cout << "6. Reamur to farenheit \n";
  cout << "Masukkan pilihan : ";
  cin >> pilihan;

  if (pilihan == 1){
    cout << "Masukkan derajat C : ";
    cin >> jawaban;
    total = (9/5 *jawaban) + 32;
    cout << "\n";
    cout << "**************************************\n";
    cout << "Hasil konversi Celcius to Farenheit : "<<total<<"\n";
    cout << "**************************************\n\n";
    cout << "Apakah ingin menghitung ulang? \n";
    cout << "Tekan 1 jika ingin menghitung ulang \n";
    cout << "Tekan 0 jika ingin keluar \n";
    cout << "Masukkan pilihan anda : ";
    cin >> kembali;
    if (kembali == 1){
        return main();
    }
  }

  else if (pilihan == 2){

    cout << "Masukkan derajat C : ";
    cin >> jawaban;
    total = 4/5 * jawaban;
    cout << "\n";
    cout << "**************************************\n";
    cout << "Hasil konversi Celcius to Reamur : "<<total<<"\n";
    cout << "**************************************\n\n";
    cout << "Apakah ingin menghitung ulang? \n";
    cout << "Tekan 1 jika ingin menghitung ulang \n";
    cout << "Tekan 0 jika ingin keluar \n";
    cout << "Masukkan pilihan anda : ";
    cin >> kembali;
    if (kembali == 1){
        return main();
    }
  }

  else if (pilihan == 3){
    cout << "Masukkan derajat F : ";
    cin >> jawaban;
    total = (jawaban - 32) * 5/9;
    cout << "\n";
    cout << "**************************************\n";
    cout << "Hasil konversi Farenheit to Celcius : "<<total<<"\n";
    cout << "**************************************\n\n";
    cout << "Apakah ingin menghitung ulang? \n";
    cout << "Tekan 1 jika ingin menghitung ulang \n";
    cout << "Tekan 0 jika ingin keluar \n";
    cout << "Masukkan pilihan anda : ";
    cin >> kembali;
    if (kembali == 1){
        return main();
    }
  }

  else if (pilihan == 4){
    cout << "Masukkan derajat F : ";
    cin >> jawaban;
    total = (jawaban - 32) * 4/9;
    cout << "\n";
    cout << "**************************************\n";
    cout<<"Hasil konversi Farenheit to Reamur : "<<total<<"\n";
    cout << "**************************************\n\n";
    cout << "Apakah ingin menghitung ulang? \n";
    cout << "Tekan 1 jika ingin menghitung ulang \n";
    cout << "Tekan 0 jika ingin keluar \n";
    cout << "Masukkan pilihan anda : ";
    cin >> kembali;
    if (kembali == 1){
        return main();
    }
  }

  else if (pilihan == 5){
    cout << "Masukkan derajat R : ";
    cin >> jawaban;
    total = 5/4 * jawaban;
    cout << "\n";
    cout << "**************************************\n";
    cout << "Hasil konversi Reamur to Celcius : "<<total<<"\n";
    cout << "**************************************\n\n";
    cout << "Apakah ingin menghitung ulang? \n";
    cout << "Tekan 1 jika ingin menghitung ulang \n";
    cout << "Tekan 0 jika ingin keluar \n";
    cout << "Masukkan pilihan anda : ";
    cin >> kembali;
    if (kembali == 1){
        return main();
    }
  }

  else if (pilihan == 6){
    cout << "Masukkan derajat R : ";
    cin >> jawaban;
    total = (9/4 * jawaban ) + 32;
    cout << "\n";
    cout << "**************************************\n";
    cout << "Hasil konversi Reamur to Farenheit : "<<total<<"\n";
    cout << "**************************************\n\n";
    cout << "Apakah ingin menghitung ulang? \n";
    cout << "Tekan 1 jika ingin menghitung ulang \n";
    cout << "Tekan 0 jika ingin keluar \n";
    cout << "Masukkan pilihan anda : ";
    cin >> kembali;
    if (kembali == 1){
        return main();
    }
  }
  else {
      cout << "Masukkan pilihan dengan benar!";
  }

  return 0;
  
}
