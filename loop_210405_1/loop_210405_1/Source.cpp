/*
50���� ���� 5�� ����� ����ϼ���.
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
1�� ~ 9�� ���� �������� ����ϼ���
	#include<stdio.h>
	void main(){
		for (int i = 1; i <= 9; i++) {
			printf("%d �� ======= \n", i);
			for (int j = 1; j <= 9; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
*/


/* for loop�� �̿��Ͽ� �Ʒ� �Ͱ��� ���� ����ϼ���.
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