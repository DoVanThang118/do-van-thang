#include <stdio.h>
int main(){
	int n;
	printf ("nhap n: ");
	scanf ("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf ("nhap: ");
		scanf ("%d",&arr[i]);
	}
	int a = arr[0];
	int b = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]> b){
			b = arr[i];
		}
		if(arr[i] < a){
			a = arr[i];
		}
	}
	printf("Doan can tim [%d,%d]",a,b);
}
