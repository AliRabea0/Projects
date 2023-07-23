#include <stdio.h>
#include <stdlib.h>
unsigned int count;
unsigned int fr50 (unsigned int num);
unsigned int sum (unsigned int num1);
void print_array (unsigned int *ptr);
unsigned int numOfDigits (unsigned int num);
unsigned int sumOfDigits (unsigned int num);

int main()
{
    unsigned int num,result;
    printf("enter the number :\n");
    scanf("%i\n",&num);
    result=sumOfDigits(num);
    printf("the value = %i\n",result);
    return 0;
}
//////////////////////count from 1 to 50 //////////////////////
unsigned int fr50 (unsigned int num)
{
    unsigned int count=0;
    if (50>=num)
    {
        printf("%i ",num);
        fr50(num+1);
    }


}
//////////////////////summing from n to 1//////////////////////
unsigned int sum (unsigned int num1)
{
    unsigned int sum2=0;
    if (num1>0)
    {
        return (num1+sum(num1-1));
    }
}
//////////////////////Print Array//////////////////////
void print_array (unsigned int *ptr)
{
    if (count<6)
    {
        printf("%i ",ptr[count]);
        count++;
        print_array(ptr);
    }
}
//////////////////////number of digits//////////////////////
unsigned int numOfDigits (unsigned int num)
{
    unsigned int ret=0;
    if (num>0)
    {
        ret=num/10;
        num=ret;
        count++;
        numOfDigits(num);
    }
    return (count);
}
//////////////////////sum of digits//////////////////////
unsigned int sumOfDigits (unsigned int num)
{
    unsigned int ret=0;
    ret=num%10;
    count=num/10;
    num=count;
    return (ret+sumOfDigits(num));
}
