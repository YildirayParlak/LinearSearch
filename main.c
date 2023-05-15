
#include <stdio.h>

// Linear Search fonksiyonu, dizide aranan elemanýn bulunup bulunmadýðýný kontrol eder
int linearsearch(int dizi[], int boyut, int aranan) {
    int j;
    for(j=0; j<boyut; j++) {
        if(dizi[j] == aranan) {
            return j; // aranan eleman bulunduðunda elemanýn indeksini döndürür
        }
    }
    return -1; // aranan eleman bulunamazsa -1 döndürür
}

int main() {
    int n, aranan, i;
    printf("Dizinin boyutunu giriniz: ");//dizinin boyutunu istiyoruz kullanýcýdan
    scanf("%d", &n);
    int dizi[n];
    printf("Dizinin elemanlarini giriniz:\n");//dizinin elemanlarini girmesini istiyoruz kullanýcýdan
    for(i=0; i<n; i++) {
        scanf("%d", &dizi[i]);
    }
    printf("Aranacak elemani giriniz: ");//kullanýcýdan aranacak elemaný istiyoruz
    scanf("%d", &aranan);

    // linearsearch fonksiyonu çaðrýlarak aranan elemanýn dizide olup olmadýðý kontrol edilir
    int sonuc = linearsearch(dizi, n, aranan);
    if(sonuc == -1) {
        printf("Aranan eleman dizide bulunamadi.");//eger aranan eleman dizide yer almiyorsa bulunmadi yazýlacak
    }
    else {
        printf("Aranan eleman dizide bulundu ve %d. indiste yer aliyor.", sonuc);//eger aranan eleman dizide yer aliyorsa bulundu yazacak
    }
    return 0;
}
