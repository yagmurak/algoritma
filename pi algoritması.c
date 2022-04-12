#include <stdio.h>
#include <stdlib.h>

int main(){
    double n,a,b;
    double formul = 0.0;
    
    for (n=0; n<=1000; n++ )
    {
        a=2;
        printf ("a=%f\n",a);
        b= ((4*n+1)*(4*n+3));
        printf ("b=%f\n",b);
        formul += 4*(a/b);
       
       
    
    }
    printf ("\n formul = %f", formul);
    return 0;
}
