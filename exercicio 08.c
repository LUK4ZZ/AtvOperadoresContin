#include<stdio.h>

int main(){

    int idade = 65, tempo = 10;
    
    if(idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >=25)){
        printf("Pode se aposentar");
    }else{
        printf("Não pode se aposentar");
    }

}