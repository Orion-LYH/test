#include <stdio.h>
int main()
{
	int data[5];
   printf("���������ݣ�\n");
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
   
   printf("����õ�����Ϊ��\n");
   for(i = 0;i < 5;i ++)    
   {
   	 printf("%d ",data[i]);
   }
   return 0;


 } 
