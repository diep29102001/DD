#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap canh a :");
	scanf("%d",&a);
	printf("nhap canh b :");
	scanf("%d",&b);
	printf("nhap canh c :");
	scanf("%d",&c);
	if((a+b>c) && (b+c>a) && (c+a>b))
	{
		printf("day la tam giac");
	}
	else{
		printf("day khong phai tam giac");
	}
}
