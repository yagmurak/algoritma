/*
#include <stdio.h>
#include <stdlib.h>
int main(){
     int i,n,x,sonuc = 1;

     printf("x giriniz : ");
     scanf("%d",&x);
     printf("n giriniz : ");
     scanf("%d",&n);

     i=0;
     while(i<n){
         sonuc = sonuc * x;
         i++;
     }

     printf("%d uzeri %d = %d",x, n, sonuc);
    
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
     int formul,i,n,x,sonuc = 1;

     printf("x giriniz : ");
     scanf("%d",&x);
 
     printf("n giriniz : ");
     scanf("%d",&n);
    
     i=0;
     while(i<n){
         sonuc = sonuc * x;
         i++;
         
         printf("%d uzeri %d = %d",x, n, sonuc);
     }
    
    formul += sonuc / (n * (n - 1));
    printf("formul=%d\n",formul);
    
    for (n=0;n<5;n++){
        printf("%d. adim sonucu = %d\n",n,formul);
        
    }
    

    return 0;
}

