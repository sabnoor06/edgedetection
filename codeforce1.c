#include<stdio.h>
int main()
{
int n;
printf("how many force vectors are present \n");
scanf("%d",&n);
int arr[n][3];
int i,j;

for(i=0;i<n;i++)
{
for(j=0;j<3;j++)
{
    scanf("%d   ",&arr[i][j]);
}
}
    return 0;
}