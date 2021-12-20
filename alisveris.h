#ifndef ALISVERIS_H_INCLUDED
#define ALISVERIS_H_INCLUDED

class Tarih{
public:
    Tarih(){
    gun = 15;
    ay = 6;
    yil = 2021;
    }

    int gun;
    int ay;
    int yil;
    void print(){
    cout << gun << "." << ay << "." << yil <<endl;
    }
};

class Ayakkabi{
private:
    string kullaniciadi;
    string kullanicisoyad;
    int dogumyili;
    int kullanicisifre;
protected:
    string r; //renk
    int n; //numara
public:
    string il, ilce, adres, mah, sokak, bina;

    Ayakkabi(string renk, int numara){
    r = renk;
    n = numara;
    }
    Ayakkabi(string a, string b, int c, int d){
    kullaniciadi = a;
    kullanicisoyad = b;
    dogumyili = c;
    kullanicisifre = d;
    }

    Tarih teslimattarihi;
    void get();
    int uyegirisi();
    void kayitol();
    int secim();
    int fatura();
    friend void adresbilgi(Ayakkabi x);

};


class KadinAyakkabi : public Ayakkabi{
public:
    int x; // fiyat toplami
    int s; // urun adedi
    KadinAyakkabi(string renk, int numara , int toplam, int adet): Ayakkabi(renk, numara){
    r = renk;
    n = numara;
    x = toplam;
    s = adet;
    }
    int yazdir1();
};


class ErkekAyakkabi : public Ayakkabi{
public:
    int x; // fiyat toplami
    int s; // urun adedi
    ErkekAyakkabi(string renk, int numara , int toplam, int adet): Ayakkabi(renk, numara){
    r = renk;
    n = numara;
    x = toplam;
    s = adet;
    }
   int yazdir2();
};

#endif // ALISVERIS_H_INCLUDED