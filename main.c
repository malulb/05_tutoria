#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define MAX 50

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *increment(void *arg);
int mat, soma;
int A[MAX][MAX];

int main(void){

    int *p;
    scanf("%d", &mat);
    pthread_t threads[mat];

    for (int i = 0; i < mat; ++i) {
        for (int j = 0; j < mat; ++j) {
            scanf("%d", &A[i][j]);
    }
  }

    for (int i = 0; i < mat; i++){
        p = malloc(sizeof(int));
        *p = i;
        if (pthread_create(&(threads[i]), NULL, increment, p)){
            printf("erro thread: %d", i);
        }
    }

    for (int i = 0; i<mat; i++){
        pthread_join(threads[i],NULL);
    }

    printf("%d\n", soma);
    return 0;
}

void *increment(void *arg){
    pthread_mutex_lock(&mutex);
    int k = *((int*) arg);
   for (int i = 0; i < mat; i++) {
      soma += A[k][i];
   }
    pthread_mutex_unlock(&mutex);
    return NULL;
}

