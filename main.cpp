#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;
#include "alisveris.h"

void Ayakkabi::get(){
   int i;
   cout << "\n\t*************** ALISVERIS SITESINE HOSGELDINIZ***************\n" <<endl;
   cout << "\n\t\t>Seceneklerden birini seciniz:\n";
   cout << "\n\t\t1.Uye Girisi\n\n\t\t2.Kayit Ol\n\n\t\t3.Uygulamayi Kapat\n";
   cout << "\n\t\t>Seciminizi giriniz:";
   cin >>i;
     if(i==1){
        system("cls");
        uyegirisi();
     }
     else if(i==2){
        system("cls");
        kayitol();
     }
     else if(i==3){
        exit(0);
     }
     else{
        cout << "\n\t\tYanlis secim yaptiniz" <<endl;
        getch();
        system("CLS");
        get();
     }
}

int Ayakkabi::uyegirisi(){
   int i = 0;
   while (i < 3)
   {
     cout << "\n\n\t\t>Lutfen kullanici adinizi giriniz: ";
     cin >> kullaniciadi;
     cout << "\n\t\t>Lutfen sifrenizi giriniz: ";
     cin >> kullanicisifre;

     if ((kullaniciadi == "sevde" || kullaniciadi == "Sevde")  && kullanicisifre == 1234)
       {
         cout << "\n\t\t>Giris basarili.\n\n\t\t>Hosgeldin Sevde Sazak!\n";
         break;
       }
     else if ((kullaniciadi == "fatih" || kullaniciadi == "Fatih" )&& kullanicisifre == 4567)
       {
         cout << "\n\t\t>Giris basarili.\n\n\t\t>Hosgeldin Fatih Tosun!\n";
         break;
       }
     else
       {
         cout << "\n\t\t>Kullanici adi ya da sifre yanlis. Lutfen tekrar deneyiniz.\n" <<endl;
         i++;
       }
    if (i == 3)
    {
        cout << "\n\t\t>Cok fazla yanlis girildi. Daha sonra tekrar deneyiniz." <<endl;
        exit(0);
    }
}
}

void Ayakkabi::kayitol(){
    cout << "\n\n\t\t>Adinizi giriniz:";
    cin >>kullaniciadi;
    cout << "\n\t\t>Soyadinizi giriniz:";
    cin >>kullanicisoyad;
    cout << "\n\t\t>Dogum yilinizi giriniz:";
    cin >>dogumyili;
    cout << "\n\t\t>Sifrenizi giriniz:";
    cin >>kullanicisifre;
    try{
     if(dogumyili < 2004){
      cout << "\n\t\t>Kayit basarili" <<endl;
      cout << "\n\t\t>Hosgeldin " << kullaniciadi << " " << kullanicisoyad <<endl;
     }
     else{
        throw(dogumyili);
     }
    }
    catch(int dogumyili){
      cout << "\n\t\t>Kayit olmak icin en az 18 yasinda olmaniz gerekiyor" <<endl;
      exit(0);
    }
}

int Ayakkabi::secim(){
    getch();
    system("cls");
    int i;
    cout << "\n\n\t\t**********KATEGORILER**********"<<endl;
    cout << "\n\n\t\t1-Kadin Ayakkabilari\n\n\t\t2-Erkek Ayakkabilari\n\n\t\t>Seceneklerden birini seciniz:";
    cin >>i;
    return i;
}

int KadinAyakkabi::yazdir1(){
   system("cls");
   string a;
   ifstream oku("dosya2.txt");
   while(getline(oku, a)){
        cout <<a <<endl<<endl;
   }
   oku.close();
   cout << "\t\t>Almak istediginiz urunlerin kodunu giriniz" <<endl;
   cout << "\t\t>Alisverisi tamamladiginizda 0 giriniz\n\n\t\t>";
   int i=0;
   while (i < 1){
     int tercih;
     cin >>tercih;
     if(tercih==1){
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "kirmizi" || r == "beyaz" || r == "siyah") && (n == 36 || n == 37 || n == 38)){
          x +=( 350 * s);
          cout << "\t\t"<< s <<" adet Puma "<< n << " numara " << r << " ayakkabi "<< 350 * s <<" TL\n\n\t\t>";
        }
        else if((r != "kirmizi" || r != "beyaz" || r != "siyah") && (n != 36 || n != 37 || n != 38)){
          cout << "\t\t" <<">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==2){
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "mavi" || r == "siyah" || r == "mor" || r == "pembe") && (n == 36 || n == 37 || n == 38 || n == 39)){
          x += (550 * s);
          cout << "\t\t"<< s <<" adet Adidas "<< n << " numara " << r << " ayakkabi "<< 550 * s << "TL\n\n\t\t>";
        }
        else if((r != "mavi" || r != "siyah" || r != "mor" || r != "pembe") && (n != 36 || n != 37 || n != 38 || n != 39)){
          cout << "\t\t" << ">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==3){
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "pembe" || r == "mor" || r == "siyah" || r == "beyaz") && (n == 36 || n == 37)){
          x += (450 * s);
          cout << "\t\t"<< s <<" adet Nike "<< n << " numara " << r << " ayakkabi "<< 450 * s << " TL\n\n\t\t>";
        }
        else if((r != "pembe" || r != "mor" || r != "siyah" || r != "beyaz") && (n != 36 || n != 37)){
          cout << "\t\t" << ">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==4){
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "siyah" || r == "beyaz") && (n == 36 || n == 37 || n == 38)){
          x += (250 * s);
          cout << "\t\t"<< s <<" adet Hummel "<< n << " numara " << r << " ayakkabi "<< 250 * s <<" TL\n\n\t\t>";
        }
        else if((r != "siyah" || r != "beyaz") && (n != 36 || n != 37 || n != 38)){
          cout << "\t\t"<< ">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==5)
     {
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "mor" || r == "kirmizi" || r== "pembe") && (n == 37 || n == 38 || n == 39)){
          x += (225 * s);
          cout << "\t\t"<< s <<" adet Lumberjack "<< n << " numara " << r << " ayakkabi "<< 225 * s <<" TL\n\n\t\t>";
        }
        else if((r != "mor" || r != "kirmizi" || r != "pembe") && (n != 37 || n != 38 || n != 39)){
          cout << "\t\t"<< ">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==6)
     {
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "siyah" || r == "gri") && (n == 38 || n == 39 || n == 40)){
          x +=( 366 * s);
          cout << "\t\t"<< s <<" adet New Balance "<< n << " numara " << r << " ayakkabi "<< 366 * s <<" TL\n\n\t\t>";
        }
        else if((r != "siyah" || r !="gri") && (n != 38 || n != 39 || n != 40)){
          cout << "\t\t"<< ">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==0){
        break;
     }
     else{
        cout << "\t\t>Hatali islem yaptiniz\n\n";
        break;
     }
   }
   if(x==0){
        cout << "\t\t>Sepette urun yok\n\t\t>Alisverise devam etmek icin urun ekleyiniz" <<endl;
        getch();
        system("cls");
        yazdir1();
   }
   else{
        cout << "\t\t>Sepetteki urunlerin toplam fiyati " << x << " TL" <<endl;
   }
}

int ErkekAyakkabi::yazdir2(){
   system("cls");
   string a;
   ifstream oku("dosya1.txt");
   while(getline(oku, a)){
        cout <<a <<endl<<endl;
   }
   oku.close();
   cout << "\n\n\t\t>Almak istediginiz urunlerin kodunu giriniz" <<endl;
   cout << "\t\t>Alisverisi tamamladiginizda 0 giriniz\n\n\t\t>";
   int i = 0;
   while (i < 1){
     int tercih;
     cin >>tercih;
     if(tercih==1){
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "gri" || r == "beyaz" || r == "siyah") && (n == 37 || n == 38 || n == 40 || n == 42)){
          x +=( 420 * s);
          cout << "\t\t"<< s <<" adet Nike "<< n << " numara " << r << " ayakkabi "<< 420 * s<<" TL\n\n\t\t>";
        }
        else if((r != "gri" || r != "beyaz" || r != "siyah") && (n != 37 || n != 38 || n != 40 || n != 42)){
          cout << "\t\t" <<">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==2){
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "beyaz" || r == "siyah") && (n == 37 || n == 39 || n == 42)){
          x += (230 * s);
          cout << "\t\t"<< s <<" adet Hummel "<< n << " numara " << r << " ayakkabi "<< 230 * s <<" TL\n\n\t\t>";
        }
        else if((r != "beyaz" || r != "siyah") && (n != 37 || n != 39 || n != 42)){
          cout << "\t\t" << ">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==3){
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "gri" || r == "siyah" || r == "beyaz") && (n == 37 || n == 41)){
          x += (300 * s);
          cout << "\t\t"<< s <<" adet Puma "<< n << " numara " << r << " ayakkabi "<< 300 * s <<" TL\n\n\t\t>";
        }
        else if((r != "gri" || r != "siyah" || r != "beyaz") && (n != 37 || n != 41)){
          cout << "\t\t" << ">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==4){
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "siyah") && (n == 38 || n == 40 || n == 41)){
          x += (200 * s);
          cout << "\t\t"<< s <<" adet Kinetix "<< n << " numara " << r << " ayakkabi "<< 200 * s <<" TL\n\n\t\t>";
        }
        else if((r != "siyah") && (n != 38 || n != 40 || n != 41)){
          cout << "\t\t"<< ">Urun bulunmamaktadir\n\n\t\t";
        }
     }
      else if(tercih==5){
        cout << "\t\tRenk:";
        cin >>r;
        cout << "\t\tNumara:";
        cin >>n;
        cout << "\t\tUrun Adedi:";
        cin >>s;
        if((r == "beyaz" || r == "gri") && (n == 37 || n == 38 || n == 39 || n == 40)){
          x += (550 * s);
          cout << "\t\t"<< s <<" adet Adidas "<< n << " numara " << r << " ayakkabi "<< 550 * s <<" TL\n\n\t\t>";
        }
        else if((r != "beyaz" || r != "gri") && (n != 37 || n != 38 || n != 39 || n != 40)){
          cout << "\t\t"<< ">Urun bulunmamaktadir\n\n\t\t>";
        }
     }
     else if(tercih==0){
        break;
     }
     else{
        cout << "\t\t>Hatali islem yaptiniz\n\n";
        break;
     }
    }
    if(x==0){
        cout << "\t\t>Sepette urun yok\n\t\t>Alisverise devam etmek icin urun ekleyiniz" <<endl;
        getch();
        system("cls");
        yazdir2();
    }
    else{
        cout << "\t\t>Sepetteki urunlerin toplam fiyati " << x << " TL" <<endl;
    }

}

void adresbilgi(Ayakkabi x){
   getch();
   system("cls");
   cout << "\n\n\t\t>Adres bilgilerini giriniz" <<endl;
   cout << "\n\n\t\t>Il:";
   cin >>x.il;
   cout << "\n\n\t\t>Ilce:";
   cin >>x.ilce;
   cout << "\n\n\t\t>Mahalle:";
   cin >>x.mah;
   cout << "\n\n\t\t>Sokak:";
   cin >>x.sokak;
   cout << "\n\n\t\t>Bina adi:";
   cin >>x.bina;
   system("cls");
   cout << "\n\n\n\n\t\t>Teslimat Adresi" <<endl;
   cout << "\t\t " << x.mah << " mahallesi " << x.sokak << " sokak " << x.bina << " apartmani " <<endl;
   cout << "\t\t " << x.mah << "/" << x.ilce << "/" << x.il <<endl;
   cout << "\n\t\t>Odeme Yontemi" <<endl;
   cout << "\t\t Kapida Odeme" <<endl;
   cout << "\n\t\t>Tahmini Teslimat Tarihi" <<endl;
   cout << "\t\t " << x.teslimattarihi.gun << "/" << x.teslimattarihi.ay << "/" << x.teslimattarihi.yil <<endl;
}

int main()
{
   Ayakkabi a1("-", "-", 0, 0);
   a1.get();
   if(a1.secim()==1){
       KadinAyakkabi k1("-", 0, 0, 0);
       k1.yazdir1();
      }
   else{
      ErkekAyakkabi e1("-", 0, 0, 0);
      e1.yazdir2();
    }
  adresbilgi(a1);
    return 0;
}

