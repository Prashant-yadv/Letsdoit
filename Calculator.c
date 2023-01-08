#include<stdio.h>
int main(){
	int a;
	int b;
	
	printf("\nLet1s make a Calculator:\n");
	printf("\na:");
	scanf("%d", &a);
	printf("\nb:");
	scanf("%d", &b);
	
	printf("\nOutput:\n");
	
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a%b);
	printf("%d\n",a/b);
	printf("%d\n",a*b);
	printf("%d\n",a^b);
	printf("%d\n",a|b);
	return 0;
}
