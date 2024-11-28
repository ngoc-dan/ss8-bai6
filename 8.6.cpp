#include<stdio.h>
int main(){
int i,j,sum=0;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for( i=0 ; i<=2 ; i++){
	printf("\n");
    	for( j=0 ; j<=2 ; j++){
    		if(i!=1 && j!=1 || i==1&&j==1){
    			printf("%d ",arr[i][j]);
    			sum=sum+arr[i][j];
    			
			}
    	}
    }
    printf("\n");
    printf("tong la : %d",sum);
    return 0;
}
    
