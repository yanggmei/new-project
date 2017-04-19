#include <stdio.h>
#include <stdlib.h>
#define N 6

int main()
{
 int arry[N]={15,20,25,30,35,40};
 int i;
 int j=0;
 int temp;
 int *p_arrystart=arry;//指向数组的首元素的指针；
 int *p_arryend=arry+N-1;//指向数组末元素的指针；
 while(j<N/2)
 {
   temp=*p_arrystart;
   *p_arrystart=*p_arryend;
   *p_arryend=temp;
   p_arrystart++;
   p_arryend--;
   j++;

 }
 p_arrystart=arry;//重置
 for(i=0;i<N;i++)
 {
     printf("%d\n",*(p_arrystart+i));
 }














  /*int arry[N]={15,20,25,30,35};
  int i;
  int *p_arry=arry;
  int temp;
    for(i=0;i<N/2;i++)
     {
         temp=p_arry[i];
         p_arry[i]=p_arry[N-1-i];
         p_arry[N-1-i]=temp;
     }

 for(i=0;i<N;i++)
      {
         // printf("第%d个元素的值为%d\t地址为%p\n",i+1,p_arry[i],&p_arry[i]);
         printf("第%d个元素的值为%d\t地址为%p\n",i+1,*(p_arry+i),p_arry+i);
        // printf("第%d个元素的值为%d\t地址为%p\n",i+1,*p_arry,p_arry);
        // p_arry++;
      }





   // for(i=0;i<N;i++)
     // {
         // printf("第%d个元素的值为%d\t地址为%p\n",i+1,p_arry[i],&p_arry[i]);
         //printf("第%d个元素的值为%d\t地址为%p\n",i+1,*(p_arry+i),p_arry+i);
        // printf("第%d个元素的值为%d\t地址为%p\n",i+1,*p_arry,p_arry);
        // p_arry++;
      //}



/*double score[]={88,89,76,79,99};
    double *p_score=score;
    int i;
    printf("数组的首元素地址：%p；数组的地址：%p\n",&score[0],p_score);
    printf("数组的首元素值：%.2lf；数组的值：%.2lf\n",score[0],*p_score);
    for(i=0;i<5;i++)
    {
        printf("%.2lf\t",p_score[i]);

        printf("%.2lf\t",*(p_score+i));
        printf("%.2lf\t",p_score[i]++);
    }

    /*int num1=8;
    int num2=16;
    int *p_num1=&num1;
    int *p_num2=&num2;
    printf("num1的值为%d,num1的地址为%p\n",*p_num1,p_num1);
    printf("num2的值为%d,num2的地址为%p\n",*p_num2,p_num2);
    printf("num1的值为%d,num1的地址为%p\n",num1,&num1);
    printf("num2的值为%d,num2的地址为%p\n",num2,&num2);
    //num2=num1;
    p_num2=p_num1;
    printf("num1的值为%d,num1的地址为%p\n",num1,p_num1);
    printf("num2的值为%d,num2的地址为%p\n",num2,p_num2);
    printf("num1的值为%d,num1的地址为%p\n",*p_num1,p_num1);
    printf("num2的值为%d,num2的地址为%p\n",*p_num2,p_num2);
    int **p_num3=&p_num2;
    printf("指针变量p_num2的地址：%p\t值为：%d\n",*p_num3,**p_num3);
    printf("指针变量p_num3的地址：%p\t值为：%d\n",p_num3,num2);
    printf("指针变量p_num2的地址：%p\t值为：%d\n",p_num2,*p_num2)*/




    return 0;
}
