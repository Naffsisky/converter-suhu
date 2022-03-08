#include <iostream>
using namespace std;

int main() 
{
  int celcius;
  float farenheit;
  float reamur;
  int pilihan;
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
    total = jawaban * 32.8;
    cout << total;
  }

  else if (pilihan == 2){

    cout << "Masukkan derajat C : ";
    cin >> jawaban;
    total = jawaban * 1.25;
    cout << total;
  }

  else if (pilihan == 3){
    cout << "Masukkan derajat F : ";
    cin >> jawaban;
    total = (jawaban - 32) * 5/9;
    cout << total;
  }

  else if (pilihan == 4){
    cout << "Masukkan derajat F : ";
    cin >> jawaban;
    total = (jawaban - 32) * 5/9 + 273.15;
    cout << total;
  }

  else if (pilihan == 5){
    cout << "Masukkan derajat R : ";
    cin >> jawaban;
    total = jawaban - 273.15 ;
    cout << total;
  }

  else if (pilihan == 6){
    cout << "Masukkan derajat R : ";
    cin >> jawaban;
    total = (jawaban - 273.15) * 9/5 + 32 ;
    cout << total;
  }
  else {
      cout << "Masukkan pilihan dengan benar!";
  }

  return 0;
  
}