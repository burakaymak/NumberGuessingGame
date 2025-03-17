#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() { 
    srand(time(NULL)) ;
    int tahmin ;
    int rastgele_sayi =(rand()%10)+1 ;
    int kac_defa = 1 ;
    printf("Tahmininizi giriniz : \n") ;
    scanf("%d",&tahmin) ; 
    while(tahmin != rastgele_sayi) {
        if(tahmin > rastgele_sayi) {
            printf("Tahmininizi düsürün. \n");
            scanf("%d",&tahmin) ;
        }else if(tahmin < rastgele_sayi) {
            printf("Tahmininizi yükseltin. \n") ;
            scanf("%d",&tahmin) ;
        }
        kac_defa++ ;
    } printf("%d denemede doğru sonuca ulaştınız. ",kac_defa) ; 


    return 0 ;
}