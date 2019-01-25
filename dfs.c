#include<stdio.h>
void dfs(int);
int arr[10][10],visited[10],n;   
int main()
{
    int i,j;
    printf("Enter number of vertices:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
    for(i=0;i<n;i++)
        visited[i]=0;
    dfs(0);
}
 void dfs(int i)
{
    int j;
	printf("\n%d",i);
    visited[i]=1;
	for(j=0;j<n;j++)
       if(!visited[j]&&arr[i][j]==1)
            dfs(j);
}

