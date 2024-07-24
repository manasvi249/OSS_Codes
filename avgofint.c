#include <stdio.H>
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    int sum=0;

    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
     sum+=arr[i];
    }
      double avg = (double)sum / n;
    printf("The average is: %.2f\n", avg);

    free(arr);
}
