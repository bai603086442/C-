#include <stdio.h>

//int f(void) //括号中的void表示该函数不能接受数据 int表示函数返回值是int类型
//{
//	return 10;  //向主调函数返回10
//}
//
//
//void g(void)  //函数名前面的void表示该函数没有返回值
//{
//	// return 10;  错误
//}
//
//
//int main(void)
//{
//	int j = 88;
//
//	j = f();
//	printf("%d\n", j);
//
//	//f = g();  错误
//
//	return 0;
//}

// 判断一个数字是否为素数
//bool IsPrime(int val)
//{
//	int i;
//
//	for (i = 2; i < val; ++i)
//	{
//		if (val % i == 0)
//			break;
//	}
//	if (i == val)
//		return true;
//	else
//		return false;
//}
//
//int main(void)
//{
//	int m;
//
//	scanf_s("%d", &m);
//	
//	if (IsPrime(m))
//		printf("yes\n");
//	else
//		printf("no\n");
//
//	return 0;
//}

//函数的声明
//没有形参要写void

//void g(void)
//{
//	f(); //错误  因为函数f的定义放在了调用f语句的后面，语法出错
//}
//
//void f(void)
//{
//	printf("哈哈\n");
//}
//
//int main(void)
//{
//	f();
//
//	return 0;
//}

//void f(int i)
//{
//	printf("%d\n", i);
//}
//
//int main(void)
//{
//	f(5);
//
//	return 0;
//}

//如何在软件开发中合理地设计函数来解决实际问题

//bool IsPrime(int val)
//{
//	int i;
//
//	for (i = 2; i < val; ++i)
//	{
//		if (val % i == 0)
//			break;
//	}
//	if (i == val)
//		return true;
//	else
//		return false;
//}
//
//int main(void)
//{
//	int val;
//
//	scanf_s("%d", &val);
//
//	if (IsPrime(val))
//		printf("yes\n");
//	else
//		printf("no\n");
//
//	return 0;
//}

//int main(void)
//{
//	int val;
//	int i;
//	int j;
//
//	scanf_s("%d", &val);
//
//	for ( i = 2; i <= val; i++)
//	{
//		for ( j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//判断m是否为素数
bool IsPrime(int m)
{
	int i;

	for (i = 2; i < m; i++)
	{
		if (m % i == 0)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

//把1到n之间所有的素数在显示器上输出
void TraverseVal(int n)
{
	int i;

	for (i = 2; i <= n; i++)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
}

int main(void)
{
	int val;

	scanf_s("%d", &val);

	TraverseVal(val);

	return 0;
}




