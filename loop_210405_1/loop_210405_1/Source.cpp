/*
50보다 작은 5의 배수를 출력하세요.
5\m10\n15\n20\/...

#include<iostream>
	using namespace std;
	void main(){
		for (int i = 1; i < 10; i ++) {
			cout<<i*5<<endl;
		}
		fgetc(stdin);
*/

#include<iostream>

/*
1단 ~ 9단 까지 구구단을 출력하세요
	#include<stdio.h>
	void main(){
		for (int i = 1; i <= 9; i++) {
			printf("%d 단 ======= \n", i);
			for (int j = 1; j <= 9; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
*/


/* for loop를 이용하여 아래 와같이 별을 출력하세요.
*/
#include<iostream>
void main() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}