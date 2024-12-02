#include<stdio.h>
int main(){
	int n,x;
	do{
		printf("nhap so luong phan tu cua mang:");
		scanf("%d",&n);
		if(n<=0 ||n>100){
			printf("so luong phan tu phai nam trong khoang 0 den 100");
		}
	}while(n<=0 ||n>100);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("phan tu [%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("nhap so can dem");
	scanf("%d",&x);
	int count=0;
	for(int i=0;i<n;i++){
		count += (arr[i] == x);
	}
	printf("so %d xuat hien %d lan trong mang\n",x,count);
	return 0;
}
