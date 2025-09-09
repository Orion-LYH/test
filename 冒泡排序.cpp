#include <stdio.h>
int main()
{
	int data[5];
   printf("请输入数据：\n");
   int i,j;
   for(i = 0;i < 5;i ++)
   {
   	scanf("%d",&data[i]);	
   }
   
   for(i = 0;i < 5;i ++)  
   {
   	for(j = 0;j < 5 - 1 - i;j++)
   	{
   	  if(data[j] > data[j+1])    
		 {
		 	int temp;        
			temp = data[j];
			data[j] = data[j+1];
			data[j+1] = temp;
		 }	
	}
   }
   
   printf("排序好的数组为：\n");
   for(i = 0;i < 5;i ++)    
   {
   	 printf("%d ",data[i]);
   }
   return 0;


 } 
