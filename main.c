#include <stdio.h>
#include <stdlib.h>

void print_linha_cresce(int size, int linha){
    for(int x = (size - linha); x > 0; x--){
        printf(" ");
    }
    for(int j = 0; j < linha; j++){
        printf("* ");
    }
    printf("\n");
}

void print_linha_meio(int size){
    for(int j = 0; j < size; j++){
        printf("* ");
    }
    printf("\n");
}

void print_linha_diminui(int size, int linha){
    for(int y = 0; y <= linha; y++){
        printf(" ");
    }
    for(int j = (size - linha)-1; j > 0; j--){
        printf("* ");
    }
    printf("\n");
}

int main(){
    int num = 0;

    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        print_linha_cresce(num, i);
    }
    print_linha_meio(num);
    for(int i = 0; i < num; i++){
        print_linha_diminui(num, i);
    }

    return 0;
}