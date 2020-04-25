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
//bool IsPrime(int m)
//{
//	int i;
//
//	for (i = 2; i < m; i++)
//	{
//		if (m % i == 0)
//			break;
//	}
//	if (i == m)
//		return true;
//	else
//		return false;
//}
//
////把1到n之间所有的素数在显示器上输出
//void TraverseVal(int n)
//{
//	int i;
//
//	for (i = 2; i <= n; i++)
//	{
//		if (IsPrime(i))
//			printf("%d\n", i);
//	}
//}
//
//int main(void)
//{
//	int val;
//
//	scanf_s("%d", &val);
//
//	TraverseVal(val);
//
//	return 0;
//}

////指针热身
//int main(void)
//{
//	int* p;  //p是变量的名字，int* 表示p变量存放的是int类型变量的地址
//	//int* p  :  p是变量名，p变量的数据类型是int*类型，所谓int*类型就是存放int变量地址的类型
//	int i = 3;
//	int j;
//	//p = &i;  //正确
//	////p = i;  //错误，p只能存放int类型变量的地址，不能存放int类型变量的值
//	////p = 55; //错误，原因同上
//
//	p = &i;
//	/*
//		1.p保存了i的地址，因此p指向i;
//		2.p不是i，i也不是p，更准确地说，修改p的值，不影响i的值，修改i的值也不会影响p的值
//		3.如果一个指针变量指向了某个普通变量，则*指针变量就完全等同于普通变量
//			例：
//				如果p是个指针变量，并且存放了普通变量i的地址，则p指向了普通变量i
//				*p 就完全等同于 i
//				或者说：在所有出现*p的地方都可以替换成i
//						在所有出现i的地方都可以替换成*p
//
//			 *p 就是以p的内容为地址的变量
//	*/
//
//	j = *p; //等价于j = i
//	printf("i = %d, j = %d\n", i, j);
//
//
//
//	return 0;
//}

//指针常见错误
//int main(void)
//{
//	int* p;
//	int i = 5;
//
//	* p = i; //错误
//	printf("%d\n", *p);
//
//	return 0;
//}

//int main(void)
//{
//	int i = 5;
//	int* p;
//	int* q;
//
//	p = &i;
//	//*q = p; //错误 类型不一样
//	//*q = *p;  //错误
//	p = q;  //错误 q是垃圾值，q赋给p，p也变成垃圾值
//
//	printf("%d\n", *q); //q的空间是属于本程序的，所以本程序可以读写q的内容，但如果q内部是垃圾值，则本程序不能读写*p的内容。因为*q所代表的内存单元的控制权限别没有分配给本程序，所以本程序运行到237行时就会立即出错
//
//	return 0;
//}

//经典指针程序_互换两个数字

//不能完成互换功能
//void exchange(int a, int b)
//{
//	int t;
//
//	t = a;
//	a = b;
//	b = t;
//
//	return;
//}

//不能完成互换
//void exchange(int* p, int* q)
//{
//	int* t;
//
//	t = p;
//	p = q;
//	q = t;
//}

//可以完成互换功能
//void exchange(int* p, int* q)
//{
//	int t;
//
//	t = *p;    // p是int*， *p是int
//	*p = *q;
//	*q = t;
//}
//
//int main(void)
//{
//	int a = 3;
//	int b = 5;
//	
//	exchange(&a, &b);
//
//	printf("a=%d b=%d\n", a, b);
//
//}

/*  
	*号的含义
	1.乘法
	2.定义指针变量
		int* p; //定义了一个名字叫p的变量，int*表示p只能存放int变量地址
	3.指针运算符
		该运算符放在已经定义好的指针变量的前面
		如果p是一个已经定义好的指针变量，则*p表示以p的内容为地址的变量

		int* p;  与  *p = 5; 
		这两个*号的含义不一样
*/

//复习
//int main(void)
//{
//	int* p;
//	int i = 5;
//	char ch = 'A';  //C语言规定 单个字符用单引号括起来;  字符串用双引号括起来
//
//	p = &i;  //正确 
//	*p = 99;
//	printf("i=%d, *p=%d\n", i, *p);
//	//p = &ch; //错误
//	//p = ch;  //错误
//	//p = 5; //错误
//}

//void swap(int* p, int* q)//形参的名字是p和q，接收数据的是p和q
//{
//	int t;
//
//	t = *p;
//	*p = *q;
//	*q = t;
//}
//
//int main(void)
//{
//	int a = 3;
//	int b = 5;
//
//	swap(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//指针和数组
//int main(void)
//{
//	int a[5]; //a是数组名，5是数组元素的个数 元素就是变量 a[0] -- a[4]
//	//int a[3][4]  //3行4列, a[0][0]是第一个元素，a[i][j]是第i+1行j+1列元素
//	int b[5];
//	//一维数组名是指针常量，它存放的是一维数组第一个元素的地址
//	//a = b;  //错误 a是常量
//
//	printf("%#x\n", &a[0]); //0xeff85c
//	printf("%#x\n", a);		//0xeff85c
//	
//	return 0;
//}

/*
	下标和指针的关系
	如果p是个指针变量，则p[i] 永远等价于 *(p+i)
*/


//确定一个函数需要2个参数  1.数组第一个元素的地址，数组的长度

//f函数可以输出任何一个一维数组内容
//void f(int* pArr, int len)
//{
//	int i;
//
//	for (i = 0; i < len; ++i)
//		printf("%d ", *(pArr + i));  //*pArr *(pArr+1) *(pArr+2)
//	printf("\n");
//}
//
//int main(void)
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[6] = { -1,-2,-3,-4,5,-6 };
//	int c[100] = { 1,99,22,33 };
//
//	f(a, 5); //a是int*类型
//
//	return 0;
//}

//void f(int* pArr, int len)
//{
//	pArr[3] = 88;  //pArr[3] 等价于 *(pArr+3)
//}
//
//int main(void)
//{
//	int a[6] = { 1,2,3,4,5,6 };
//
//	printf("%d\n", a[3]);  //4
//	f(a, 6);  
//	printf("%d\n", a[3]);  //a[3]等于*(a+3),*(a+3)代表第四个元素  88
//
//	return 0;
//}
////381行pArr[3] 388,390行a[3]是同一个变量


void f(int* pArr, int len)
{
	int i;

	for (i = 0; i < len; ++i)
		printf("%d ", pArr[i]);  //*(pArr+i) 等价于 pArr[i] 也等价于b[i] 也等价于*(b+i)
	printf("\n");
}

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int b[6] = { -1,-2,-3,-4,5,-6 };
	int c[100] = { 1,99,22,33 };

	f(b, 6);

	return 0;
}



