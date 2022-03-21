#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    double  i , a , b ;
    double faktoriyel = 1;
    int x , n;
    
    printf("x degerini giriniz");
    scanf("%d", &x);

   
    for (n = 1; n <= 50; n++)
    {
        faktoriyel *= (2*n) * (2*n + 1);
        printf ("faktoriyel = %f\n", faktoriyel);
        a = pow ((-1), n); // a = -1;
        printf("a = %f\n",a);
        b = pow (x, (2*n+1)); // b = 33;
        printf("b = %f\n",b);
        i += (a * b) / (double)faktoriyel;
        
    }
    printf("\n işlem sonucu = %f", i+x);

    return 0;
}
