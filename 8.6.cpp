#include<stdio.h>
int main(){
int i,sum=0;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for( i=0 ; i<=2 ; i++){
	
    	for( i=0 ; i<=2 ; i++){
    			printf("%d \n",arr[i][i]);
    			sum=sum+arr[i][i];
    			
			}
    	}
    
    printf("\n");
    printf("tong la : %d",sum);
    return 0;
}
    
