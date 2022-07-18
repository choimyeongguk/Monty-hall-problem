#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, num;
	int cor_keep, wro_keep=0;
	int cor_change, wro_change=0;
	int answer, choose;
	int change;
	double change_pro, keep_pro;
	
	srand(time(NULL));
	for(num=10;num<1000001;num=num*10){
		for(i=0;i<num;i++){
			answer = rand()%3+1;
			choose = rand()%3+1;
			change = rand()%2;
		
			if(choose==answer){
				if(change==0){
					cor_keep++;
				}else{
					wro_change++;
				}
			}else{
				if(change==0){
					wro_keep++;
				}else{
					cor_change++;
				}
			}
		}
		change_pro = (double)cor_change/(cor_change+wro_change)*100;
		keep_pro = (double)cor_keep/(cor_keep+wro_keep)*100;
		printf("\n<%d회 반복>\n", num);
		printf("선택 유지 : win %d, lose %d => %.2lf%%\n", cor_keep, wro_keep, keep_pro);
		printf("선택 변경 : win %d, lose %d => %.2lf%%\n", cor_change, wro_change, change_pro);
	}
}
