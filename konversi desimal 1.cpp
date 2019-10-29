#include <iostream>
using namespace std;

void binary(int desimal);
void binary(int desimal)
{ 
     int sisa;
     int hasil;

     if ( desimal <=1)

     {

        cout<<desimal;

        return;

     }

     sisa = desimal %2;

     hasil = desimal / 2;

     binary(hasil);

     cout<<sisa;

}

void oktal(int desimal);
void oktal(int desimal)
{ 
     int sisa;
     int hasil;

     if ( desimal <=1)

     {

        cout<<desimal;

        return;

     }

     sisa = desimal %8;

     hasil = desimal / 8;

     oktal(hasil);

     cout<<sisa;

}

void hexadecimal(int desimal);
void hexadecimal(int desimal)
{ 
     int sisa;
     int hasil;

     if ( desimal <=1)

     {

        cout<<desimal;

        return;

     }

     sisa = desimal %16;

     hasil = desimal / 16;

     hexadecimal(hasil);

     cout<<sisa;

}

int main()

{

    int a;
    
	cout << "Konversi Bilangan" ;
    cout << "Masukkan Bilangan yang akan dikonversi : ";
    cin>>a;

    cout << a << " dalam biner adalah " ; 
    binary(a);
    cout<<endl;
    
	cout << a << " dalam oktal adalah " ; 
    oktal(a);
    cout<<endl;
	
	cout << a << " dalam hexadecimal adalah " ; 
    hexadecimal(a);
    cout<<endl;
     

    return 0;
}


