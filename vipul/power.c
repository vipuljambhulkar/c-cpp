#include<stdio.h>
#include<math.h>
int power(int a, int b){
    if (b==0)
        return 1 ;
    return a*power(a,b-1);
}
int main(){
    int a ;
    int b ;
    printf("%d",power(7,2));
    return 0;
}
