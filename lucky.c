#include<stdio.h>
#include<stdlib.h>

void get_lucky(int a,int b);
int get_size(int num);

int timer=0;

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b)
		get_lucky(b,a);
	else
		get_lucky(a,b);
	
	return 0;
}

void get_lucky(int a,int b)
{
	int count=0;
	int i=a;
	
	for(i;i<b;i++)
	{
		if(i==7)
		{
				count++;
		}
		else
		{
			if(i==7)
			{
				count++;
			}
			else
			{
			int cnt=get_size(i);
			
			int res=i;
			int *arr=(int*)malloc(sizeof(int)*(cnt+1));
			int j=0;
			
			for(j;j<=cnt+1;j++)
			{
				arr[j]=res%10;
				res=res/10;
				timer++;
			}
			j=0;
			do
			{
				do
				{
					if(arr[j]<arr[j+1])
					{
						arr[j]=arr[j+1]-arr[j];
					}
					else
					{
						arr[j]=arr[j]-arr[j+1];
					}
					j++;
					timer++;
				}while(j<cnt);
				cnt--;
				j=0;
				timer++;
			}while(cnt>0);
			if(arr[0]==7)
				count++;
				timer++;
			}
		}
	}
	printf("%d\n",count);
	printf("%d\n",timer);
}

int get_size(int num)
{
	int cnt=0;
	int res=num;
	do
	{
		res=res/10;
		timer++;
		cnt++;
	}while(res>=10);
	
	return cnt;
}
