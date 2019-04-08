#include <iostream>
using namespace std;

//butuh array, angka cari, ujung kiri,ujung kanan
void binary(int data[], int cari, int kiri, int kanan){
   int tengah = (kiri+kanan)/2;
   
   if(data[tengah] == cari){
    cout << "data ditemukan diarray ke-" << tengah;
   }
   else if(data[tengah] < cari){
    binary(data,cari,tengah+1,kanan);
   }//data tengah+1 ke kanan
   else{
    binary(data,cari,kiri,tengah-1);
   }//data tengah+1 ke kiri
}

int main(){
    int data[8] = {1,2,3,4,5,6,7,8};
                 //0,1,2,3,4,5,6,7
    int cari = 5;
    
    binary(data,cari,0,7);
}
