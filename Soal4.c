#include <string.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

pthread_t threadID[101];

void* Factorial(void* arg);

int main(int argc, char *argv[]) {
    for(int i=1;i<argc;i++){
        int stringLenght = strlen(argv[i]);
        unsigned long long int *parsedInt=malloc(sizeof(unsigned long long int));
        for(int s=0;s<stringLenght;s++){
            *parsedInt=(*parsedInt)*10 + (argv[i][s]-'0');
        }
        pthread_create(&threadID[i],NULL,&Factorial,parsedInt);
    }
    for(int i=1;i<argc;i++){
        pthread_join(threadID[i],NULL);
    }
    return 0;
}

void* Factorial(void* arg){
    
    
}

