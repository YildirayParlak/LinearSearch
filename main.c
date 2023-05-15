
#include <stdio.h>

// Linear Search fonksiyonu, dizide aranan eleman�n bulunup bulunmad���n� kontrol eder
int linearsearch(int dizi[], int boyut, int aranan) {
    int j;
    for(j=0; j<boyut; j++) {
        if(dizi[j] == aranan) {
            return j; // aranan eleman bulundu�unda eleman�n indeksini d�nd�r�r
        }
    }
    return -1; // aranan eleman bulunamazsa -1 d�nd�r�r
}

int main() {
    int n, aranan, i;
    printf("Dizinin boyutunu giriniz: ");//dizinin boyutunu istiyoruz kullan�c�dan
    scanf("%d", &n);
    int dizi[n];
    printf("Dizinin elemanlarini giriniz:\n");//dizinin elemanlarini girmesini istiyoruz kullan�c�dan
    for(i=0; i<n; i++) {
        scanf("%d", &dizi[i]);
    }
    printf("Aranacak elemani giriniz: ");//kullan�c�dan aranacak eleman� istiyoruz
    scanf("%d", &aranan);

    // linearsearch fonksiyonu �a�r�larak aranan eleman�n dizide olup olmad��� kontrol edilir
    int sonuc = linearsearch(dizi, n, aranan);
    if(sonuc == -1) {
        printf("Aranan eleman dizide bulunamadi.");//eger aranan eleman dizide yer almiyorsa bulunmadi yaz�lacak
    }
    else {
        printf("Aranan eleman dizide bulundu ve %d. indiste yer aliyor.", sonuc);//eger aranan eleman dizide yer aliyorsa bulundu yazacak
    }
    return 0;
}
