#include <stdio.h>
#include <pthread.h>

int k;

void* add_func() {
    int i;
    sleep(1);
    for (i = 0; i < 10000; i++) {
        k++;
        printf("[add_func] k = %d\n", k);
        usleep(1);
    }
}

void* sub_func() {
    int i;
    sleep(1);
    for (i = 0; i < 10000; i++) {
        k -= 1;
        printf("[sub_func] k = %d\n", k);
        usleep(1);
    }
}

int main(int argc, char *argv) {
    pthread_t t_id1, t_id2;
    k = 0;
    pthread_attr_t tattr1, tattr2;
    struct sched_param param1, param2;

    pthread_create(&t_id1, NULL, add_func, NULL);
    pthread_create(&t_id2, NULL, sub_func, NULL);
    pthread_join(t_id1, NULL);
    pthread_join(t_id2, NULL);

    return 1;
}
