#include <stdio.h>

int main(){
    int e;
    printf("e=?");
    scanf("%d",&e);

    if(e<10){
        printf("eは10未満です。\n");
    } else{
        printf("error\n");
    }
    return 0;
}
