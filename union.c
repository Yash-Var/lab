
#include <stdio.h>

int main()
{
    int a[1000];
    int b[1000];
    int n,m;
    printf("Enter the size of the both the array : ");
    scanf("%d%d",&n,&m);
    printf("Enter the element of the array first : ");
 for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
 }
  printf("Enter the element of the array Second : ");
  for(int i=0;i<m;i++){
     scanf("%d",&b[i]);
 }
    int i=0,j=0;
    printf("The Union of A and B is : ");
   while(i<n && j<m){
       if(a[i]<b[j]){
           printf("%d ",a[i]);
           i++;
       }else if(b[j]<a[i]){
           printf("%d ",b[j]);
           j++;
       }else
       {
            printf("%d ",b[j]);
            j++;
            i++;
       }
   }
   while(i<n){
        printf("%d ",a[i++]);
   }
   while(j<m)
   {
       printf("%d ",b[j++]); 
   }
   
   
   
   
printf("\n");
  printf("The Intersecton of A and B is : ");
int p=0,q=0;
  while(p<n && q<m){
       if(a[p]<b[q]){
          
           p++;
       }else if(b[q]<a[p]){
          
           q++;
       }else
       {
            printf("%d ",b[q]);
            q++;
            p++;
       }
   }
    return 0;
}
