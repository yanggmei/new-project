#include <stdio.h>
#include <stdlib.h>
#define N 6

int main()
{
 int arry[N]={15,20,25,30,35,40};
 int i;
 int j=0;
 int temp;
 int *p_arrystart=arry;//ָ���������Ԫ�ص�ָ�룻
 int *p_arryend=arry+N-1;//ָ������ĩԪ�ص�ָ�룻
 while(j<N/2)
 {
   temp=*p_arrystart;
   *p_arrystart=*p_arryend;
   *p_arryend=temp;
   p_arrystart++;
   p_arryend--;
   j++;

 }
 p_arrystart=arry;//����
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
         // printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ%p\n",i+1,p_arry[i],&p_arry[i]);
         printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ%p\n",i+1,*(p_arry+i),p_arry+i);
        // printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ%p\n",i+1,*p_arry,p_arry);
        // p_arry++;
      }





   // for(i=0;i<N;i++)
     // {
         // printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ%p\n",i+1,p_arry[i],&p_arry[i]);
         //printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ%p\n",i+1,*(p_arry+i),p_arry+i);
        // printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ%p\n",i+1,*p_arry,p_arry);
        // p_arry++;
      //}



/*double score[]={88,89,76,79,99};
    double *p_score=score;
    int i;
    printf("�������Ԫ�ص�ַ��%p������ĵ�ַ��%p\n",&score[0],p_score);
    printf("�������Ԫ��ֵ��%.2lf�������ֵ��%.2lf\n",score[0],*p_score);
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
    printf("num1��ֵΪ%d,num1�ĵ�ַΪ%p\n",*p_num1,p_num1);
    printf("num2��ֵΪ%d,num2�ĵ�ַΪ%p\n",*p_num2,p_num2);
    printf("num1��ֵΪ%d,num1�ĵ�ַΪ%p\n",num1,&num1);
    printf("num2��ֵΪ%d,num2�ĵ�ַΪ%p\n",num2,&num2);
    //num2=num1;
    p_num2=p_num1;
    printf("num1��ֵΪ%d,num1�ĵ�ַΪ%p\n",num1,p_num1);
    printf("num2��ֵΪ%d,num2�ĵ�ַΪ%p\n",num2,p_num2);
    printf("num1��ֵΪ%d,num1�ĵ�ַΪ%p\n",*p_num1,p_num1);
    printf("num2��ֵΪ%d,num2�ĵ�ַΪ%p\n",*p_num2,p_num2);
    int **p_num3=&p_num2;
    printf("ָ�����p_num2�ĵ�ַ��%p\tֵΪ��%d\n",*p_num3,**p_num3);
    printf("ָ�����p_num3�ĵ�ַ��%p\tֵΪ��%d\n",p_num3,num2);
    printf("ָ�����p_num2�ĵ�ַ��%p\tֵΪ��%d\n",p_num2,*p_num2)*/




    return 0;
}
