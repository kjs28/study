#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y;
	int count=0;
	int **array;
	int x_counts=1,y_counts=1;
	int i=0,j=0;
	int res=0;
	scanf("%d %d",&x,&y);
	array=(int**)malloc(sizeof(int)*x);
	
	for(count=0;count<x;count++)
	{
		int cnt=0;
		for(cnt;cnt<y;cnt++)
		{
			array[count]=(int*)malloc(sizeof(int)*y);
		}
	}
	
	for(count=0;count<x;count++)
	{
		int cnt=0;
		char *arr_val=(char*)malloc(sizeof(char)*(y+1));
		scanf("%s",arr_val);
		for(cnt;cnt<y;cnt++)
		{
			array[count][cnt]=(int)arr_val[cnt]-48;
		}
	}
	int cnt_x=0;
	int cnt_y=0;
	int tmp=0;
	for(i;i<x-1;i++)
	{
		j=0;
		for(j;j<y-1;j++)
		{
			if(array[i][j]==1&&array[i][j+1]==1)
			{
				if(cnt_x==0)
				{
					cnt_x++;
					tmp=i;
				}
				else
				{
					if(i==tmp)
						cnt_x++;
				}
			}
		}
	}
	tmp=0;
	for(i=0;i<y-1;i++)
	{
		j=0;
		for(j;j<x-1;j++)
		{
			
			if(array[j][i]==1&&array[j+1][i]==1)
			{
				if(cnt_y==0)
				{
					cnt_y++;
					tmp=i;
				}
				else
				{
					if(i==tmp)
						cnt_y++;
				}
			}
		}
	}
	
	if(cnt_x!=cnt_y)
		printf("none\n");
	else
		printf("%d\n",(x_counts+cnt_x)*(y_counts+cnt_y));
	
	return 0;
}
