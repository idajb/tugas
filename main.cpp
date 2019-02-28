#include <iostream>
using namespace std;
char nama[50], alamat[50], hobi[50];
int umur;
int main(){
cout<<"================== TUGAS 01 input output ================== \n\n\n"<<endl;
cout<<"Nama : ";
cin.getline(nama,50);

cout<<"Alamat : ";
cin.getline(alamat, 50);

cout<<"Hobi : ";
cin.getline(hobi, 50);

cout<<"Umur : ";
cin>>umur;

cout<<"================== HASIL Tugas 01 ================== \n\n\n"<<endl;
cout<<"NAMA \t :"<< nama <<endl;
cout<<"ALAMAT \t :"<<alamat <<endl;
cout<<"HOBI \t :"<<hobi <<endl;
cout<<"UMUR \t :"<<umur <<" Tahun \n\n\n\n"<<endl;
return 0;
}
