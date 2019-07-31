#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("nhap so n tu ban phim: ");
	scanf("%d",&n);
	int sum = 0;
	for(int i=1;i<n;i++){
		if(n%i==0){
		printf("\n cac uoc cua n la:%d  ",i);
		sum=sum+i;
		}
	}
	//printf("%d",sum);
	if (sum==n){
	printf("\nday la so hoan hao");
}else{
	printf("\nday khong phai so hoan hao");
	
}
	
}
