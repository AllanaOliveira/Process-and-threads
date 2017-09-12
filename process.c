#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(void){
	pid_t child = fork();
	if((int) child == 0){
		sleep(2);
		printf("Processo filho rodando com numero de processo %d...\n", (int)getpid());
	}
	if((int) child > 0) {
		printf("Processo pai rodando com numero de processo %d...\n", (int)getpid());
		int i;
		for(i = 0; i < 3; i++){
			sleep(1);
			printf("Esperando...\n");
		}
		printf("\n");
	}
}
