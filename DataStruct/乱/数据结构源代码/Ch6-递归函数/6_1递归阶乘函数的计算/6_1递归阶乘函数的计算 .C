/* ======================================== */
/*    程式实例: 6_1.c                       */
/*    递归阶乘函数的计算                    */
/* ======================================== */

/* ---------------------------------------- */
/*  递归阶乘函数                            */
/* ---------------------------------------- */
int factorial(int j)
{
   int sum;                       /* 阶乘总和变数          */

   if ( j == 0 )                  /* 终止条件              */
      sum = 1;
   else
      sum = j * factorial(j - 1);  /* 递归阶乘函数调用      */
   return sum;
}

/* ---------------------------------------- */
/*  主程式: 计算整数0到4的阶乘.             */
/* ---------------------------------------- */
void main()
{
   int i;

   for ( i = 0; i < 5; i++ )      
      printf("%d! = %d\n",i,factorial(i));/*递归阶乘函数调用*/
}
