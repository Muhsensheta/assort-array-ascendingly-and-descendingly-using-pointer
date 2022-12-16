#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void asort(int * arr,int size);
void dsort(int * arr,int size);
void print(int * arr,int size);
int arr[SIZE];

int main()
{
    int i;
    //FILL THE ARRAY
    for (i=0;i<SIZE;i++){
        arr[i]=(int) rand();
    }
    print(arr,SIZE);
    //assort array ascendingly then print .
    asort(arr,SIZE);
    print(arr,SIZE);
    //assort array descendingly then print .
    dsort(arr,SIZE);
    print(arr,SIZE);
return 0;
}
/*assort function is to arrange the array ascendingly.
- it's compare each element with the element before .
- swap between them to get the larger element then assort elements ascendingly.*/
 void asort(int * arr,int size){
 int i,temp;
 for(i=0;i<size;i++){
    if(arr[i]<arr[i-1]){
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
        asort(arr,i);
    }
 }
}
/*assort function is to arrange the array descendingly.
- it's compare each element with the element before .
- swap between them to get the smallest  element then assort elements descendingly.*/
void dsort(int * arr,int size){
 int i,temp;
 for(i=0;i<size;i++){
    if(arr[i]>arr[i-1]){
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
        dsort(arr,i);
    }
 }
}
void print(int * arr,int size){
int i;
printf("NEW ARRAY \n");
for(i=0;i<size;i++){
    printf("%d  ",arr[i]);
}
  printf("\n");

}
