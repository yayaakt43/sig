#include <stdio.h>
#include <signal.h>

void traiter_signal(){
        printf("Signal Ctrl+C bien reçu !\n");
    
}

int main(){
        signal(SIGINT, traiter_signal);
        printf("Le Ctrl+c est neutralisé\n");
    printf("Pour sortir du processus appuyer sur la touche Entrée\n");
        getchar();
        printf("Fin du programme\n");
return 0;}
