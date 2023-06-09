
#include <stdio.h>

// Linear Search fonksiyonu, dizide aranan elemanın bulunup bulunmadığını kontrol eder
int linearsearch(int dizi[], int boyut, int aranan) {
    int j;
    for(j=0; j<boyut; j++) {
        if(dizi[j] == aranan) {
            return j; // aranan eleman bulunduğunda elemanın indeksini döndürür
        }
    }
    return -1; // aranan eleman bulunamazsa -1 döndürür
}

int main() {
    int n, aranan, i;
    printf("Dizinin boyutunu giriniz: ");//dizinin boyutunu istiyoruz kullanıcıdan
    scanf("%d", &n);
    int dizi[n];
    printf("Dizinin elemanlarini giriniz:\n");//dizinin elemanlarini girmesini istiyoruz kullanıcıdan
    for(i=0; i<n; i++) {
        scanf("%d", &dizi[i]);
    }
    printf("Aranacak elemani giriniz: ");//kullanıcıdan aranacak elemanı istiyoruz
    scanf("%d", &aranan);

    // linearsearch fonksiyonu çağrılarak aranan elemanın dizide olup olmadığı kontrol edilir
    int sonuc = linearsearch(dizi, n, aranan);
    if(sonuc == -1) {
        printf("Aranan eleman dizide bulunamadi.");//eger aranan eleman dizide yer almiyorsa bulunmadi yazılacak
    }
    else {
        printf("Aranan eleman dizide bulundu ve %d. indiste yer aliyor.", sonuc);//eger aranan eleman dizide yer aliyorsa bulundu yazacak
    }
    return 0;
}
