#include<stdio.h>
#include<stdlib.h>

void split_func(char *val,int len);

int main()
{
	int len;
	char *val;
	
	scanf("%d",&len);
	val=(char*)malloc(sizeof(char)*len);
	scanf("%s",val);
	
	split_func(val,len);
	
	return 0;
}

void split_func(char *val,int len)
{
	int i=0,j=0;
	int a,b,split,count=0;
	
	if(len%2==0)
	{
		split=len/2;
	}
	else
	{
		split=len/2;
		if(len%2>0)
			split++;
	}
	char *val1=(char*)malloc(sizeof(char)*split);
	char *val2=(char*)malloc(sizeof(char)*(len-split));
	int *res=(int*)malloc(sizeof(int)*split);
	
	for(i;i<split;i++)
	{
		val1[i]=val[i];
	}
	for(i=split;i<len;i++)
	{
		val2[j]=val[i];
		j++;
	}
	i=0;
	j=0;
	do
	{
		if(i==0&&split==len-split)
		{
			if((int)val1[i]-48+(int)val2[j]-48>=10)
			{
				res[i]=(int)val1[i]-48+(int)val2[j]-48;
				i++;
				j++;
				count++;
			}
			else
			{
				res[i]=(int)val1[i]-48+(int)val2[j]-48;
				i++;
				j++;	
			}
		}
		else if(i==0)
		{
			res[i]=(int)val1[i]-48;
			i++;
		}
		else
		{
			if((int)val1[i]-48+(int)val2[j]-48>=10)
			{
				count++;
				res[i]=(int)val1[i]-48+(int)val2[j]-48;
				i++;
				j++;
			}
			else
			{
				res[i]=((int)val1[i]-48+(int)val2[j]-48);
				i++;
				j++;
			}
		}
	}while(i<split);
	j=0;
	for(j=0;j<=count;j++)
	{
		i=0;
		for(i=0;i<split;i++)
		{
			if(res[i]>=10)
			{
				res[i-1]++;
				res[i]=res[i]%10;
			}
		}
	}
	
	for(i=0;i<split;i++)
	{
		printf("%d",res[i]);
	}
}
