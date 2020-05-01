#include <stdio.h>
#include <malloc.h>
#include <string.h>
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


//void f(int* pArr, int len)
//{
//	int i;
//
//	for (i = 0; i < len; ++i)
//		printf("%d ", pArr[i]);  //*(pArr+i) 等价于 pArr[i] 也等价于b[i] 也等价于*(b+i)
//	printf("\n");
//}
//
//int main(void)
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[6] = { -1,-2,-3,-4,5,-6 };
//	int c[100] = { 1,99,22,33 };
//
//	f(b, 6);
//
//	return 0;
//}

//void f(int* pArr, int len)
//{
//	//pArr[2] = 10; //pArr[2] == *(pArr+2) == *(a+2) == a[2]
//
//	int i;
//
//	for (i = 0; i < len; ++i)
//		printf("%d\n", pArr[i]);
//}
//
//int main(void)
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//
//	//printf("%d\n", a[2]);
//	f(a, 5);
//	//printf("%d\n", a[2]);
//
//
//	//printf("%#X, %#X\n", a, &a[0]);
//
//	//a == &a[0]
//
//	return 0;
//}

//void f(int* p)
//{
//	*p = 10;
//}
//
//int main(void)
//{
//	int i = 5;
//
//	f(&i);  //希望在内部修改i的值，只能发送地址
//	printf("i = %d\n", i);
//
//	return 0;
//}

//指针变量的运算  指针变量不能相加，不能相乘，也不能相除。 如果两个指针变量指向的是同一块连续空间中的不同存储单元，则这个两个指针才可以相减。

//int main(void)
//{
//	int i = 5;
//	int j = 10;
//	int* p = &i;
//	int* q = &j;
//	int a[5];
//	p = &a[1];
//	q = &a[4];
//	printf("p和q所指向的单元相隔%d个单元\n", q - p);
//}

//一个指针变量到底占几个字节

/*预备知识:
	sizeof(数据类型)
		功能:返回值就是该数据类型所占的字节数
		例子:sizeof(char) = 1, sizeof(int) = 4，sizeof(double) = 8

		sizeof(变量名)
		功能:返回值是该变量所占的字节数;

假设p指向char类型(1个字节)
假设q指向int类型(4个字节)
假设r指向double类型(8个字节)
p,q,r本身所占的字节数是否一样
*/

//int main(void)
//{
//	char ch = 'A';
//	int i = 99;
//	double x = 66.6;
//
//	char* p = &ch;
//	int* q = &i;
//	double* r = &x;
//
//	printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r));
//
//	return 0;
//}
/*
总结：
一个指针变量，无论它指向的变量占几个字节，该变量本身只占四个字节

一个变量的地址使用该变量首字节的地址来表示
*/


//动态内存分配
/*
传统数组的缺点(传统数组也叫静态数组)
	1.数组长度必须事先制定，且只能是常整数，不能是变量。
		int a[5]; //ok
		int len = 5; int a[len]; //error

	2.传统形式定义的数组，该数组的内存程序员无法手动释放。在一个函数运行期间，系统为该函数中数组所分配的空间会一直存在，直到该函数运行完毕时，数组空间才会被系统释放。

	3.数组的长度一旦定义，其长度不能再更改。数组的长度不能在函数运行的过程中动态的扩充或缩小。

	4.传统形式定义的数组不能跨函数使用。A函数定义的数组，在A函数运行期间可以被其他函数使用，但A函数运行完毕之后，A函数中的数组将无法再被其他函数使用。
	  

为什么需要动态分配内存
动态内存分配举例_动态数组的构造
静态内存和动态内存的比较
跨函数使用内存的问题
*/

//void g(int* pArr, int len)
//{
//	pArr[2] = 88;
//}
//
//void f(void)
//{
//	int a[5] = { 1,2,3,4,5 }; //20个字节的存储空间程序员无法手动编程释放它，它只能在本函数运行完毕时由系统自动释放
//	g(a, 5);
//	printf("%d\n", a[2]);
//}
//
//int main(void)
//{
//	f();
//
//	return 0;
//}

//动态内存分配举例_动态数组的构造

//malloc是memory allocate 内存分配

//int main(void)
//{
//	int i = 5; //分配了4个字节 静态分配
//
//	int* p = (int*)malloc(4);
//	/*
//		1. 使用malloc函数，必须添加malloc.h这个头文件
//		2. malloc函数只有一个形参，并且形参是整型
//		3. 
//			4 表示请求系统为本程序分配4个字节
//
//		4. malloc函数只能返回第一个字节的地址
//		5. 557行分配了8个字节，p变量占4个字节，p指向的内存也占4个字节
//		6.p本身所占的内存是静态分配的，p所指向的内存是动态分配的
//	*/
//
//	* p = 5; //*p代表的就是一个int变量，只不过*p这个整型变量的内存分配方式和555的i变量分配方式不同
//
//	free(p); //表示把p指向的内存释放掉，p本身的内存是静态的，不能由程序员手动释放，p本身的内存只能在p变量所在的函数运行终止时由系统自动释放
//
//	printf("hello！\n");
//
//	return 0;
//}

//malloc用法_2

//void f(int* q)
//{
//	*q = 200;
//}
//
//int main(void)
//{
//	int* p = (int*)malloc(sizeof(int)); //sizeof(int)返回值是int所占的字节数
//	*p = 10;2
//
//	printf("%d\n", *p);   //10
//	f(p);
//	printf("%d\n", *p);   //200
//
//	return 0;
//}

//动态构造一维数组示例

//int main(void)
//{
//	int a[5]; //如果int占4个字节，则本数组总共包含有20个字节。每4个字节被当做了一个int变量来使用
//	int len;
//	int* pArr;
//	int i;
//
//	//动态构造一维数组
//	printf("请输入你要存放的元素的个数：");
//	scanf_s("%d", &len);
//
//	pArr = (int*)malloc(4 * len); //动态地构造了一个一位数组，该一维数组的长度是len，数组名是pArr，该数组每个元素是int类型。 类似于 int pArr[len];
//
//	//对一维数组进行操作
//	//对动态一维数组进行赋值
//	for (i = 0; i < len; ++i)
//		scanf_s("%d",&pArr[i]);
//
//	//对一维数组进行输出
//	printf("一维数组的内容是：");
//	for (i = 0; i < len; i++)
//		printf("%d\n", pArr[i]);
//
//	//free(pArr);  //释放掉动态分配的数值
//
//	return 0;
//}

/*动态内存和静态内存的比较
	静态内存是有系统自动分配，由系统自动释放
	静态内存是在栈分配的

	动态内存是由程序员手动分配，手动释放
	动态内存是在堆分配的
*/

//多级指针
//int main(void)
//{
//	int i = 10;
//	int* p = &i;
//	int** q = &p;
//	int*** r = &q;
//
//	//r = &p;  错误 r是int***类型，r只能存放int** 类型变量的地址
//
//	printf("i = %d\n", ***r);
//}

//void f(int** q)
//{
//	//q是p的地址，*q就是p  
//}
//
//void g()
//{
//	int i = 10;
//	int* p = &i;
//
//	f(&p); //p是int*类型，&p是int**类型
//}
//
//int main(void)
//{
//	g();
//	return 0;
//}

//跨函数使用内存_1
//void f(int** q)    //q是个指针变量，无论q是什么类型的指针变量，都只占四个字节
//{
//	int i = 5;
//	//q是p的地址，*q就是p，q和**q都不等价于p
//	*q = &i; // p = &i
//}
//
//int main(void)
//{
//	int* p;
//
//	f(&p);
//	printf("%d\n", *p); //本语句语法没有问题，但是逻辑有问题
//
//	return 0;
//}

//动态内存可以跨函数使用示例
//void f(int** q)
//{
//	*q = (int*)malloc(sizeof(int));  //sizeof(数据类型)返回值是该数据类型所占的字节数
//	//等价于 p = (int*)malloc(sizeof(int))
//
//	//q = 5; //error
//	//*q = 5; //p = 5; error
//	**q = 5; //*p = 5;
//
//}
//
//int main(void)
//{
//	int* p;
//	
//	f(&p);
//	printf("%d\n", *p);
//
//	return 0;
//}

//结构体
//struct Student
//{
//	int age;
//	float score;
//	char sex;
//};
//
//int main(void)
//{
//	struct Student st = {80, 66.6, 'F'}; //初始化 定义同时赋值
//
//	struct Student st2;
//	st2.age = 10;
//	st2.score = 88;
//	st2.sex = 'F';
//
//	printf("%d %f %c\n", st.age, st.score, st.sex);
//	printf("%d %f %c\n", st2.age, st2.score, st2.sex);
//
//	return 0;
//}

//struct Student
//{
//	int age;
//	float score;
//	char sex;
//};
//
//int main(void)
//{
//	struct Student st = { 80, 66.6f, 'F' };
//	struct Student* pst = &st; 
//
//	//st.age = 10;
//	//pst->age = 88; //pst->age在计算机内部会被转换成 (*pst).age
//
//	pst->age = 88;
//	st.score = 66.6f;
//	printf("%d %f\n", st.age, pst->score); //88 66.599998 浮点数不能准确存储
//
//	return 0;
//	
//}

//struct Student
//{
//	int age;
//	char sex;
//	char name[100];
//}; //封号不能省
//
//int main(void)
//{
//	struct Student st = { 20, 'F', "小红" };
//	struct Student* pst = &st;
//
//	printf("%d %c %s\n", st.age, st.sex, st.name);
//	printf("%d %c %s\n", pst->age, pst->sex, pst->name); //pst->age 转化成 (*pst).age 等于st.age
//}

struct Student
{
	int age;
	char sex;
	char name[100];
}; 

//此函数无法修改主函数 st的值   错误
//void InputStudent(struct Student stu)
//{
//	stu.age = 10;
//	strcpy_s(stu.name, "张三"); //不能写成 stu.name = "张三";
//	stu.sex = 'F';
//}

void InputStudent(struct Student* pstu) //pstu只占四个字符
{
	(*pstu).age = 10;
	strcpy_s(pstu->name, "张三");
	pstu->sex = 'F';
}

void OutputStudent(struct Student* pst)
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}

int main(void)
{
	struct Student st;
	
	InputStudent(&st); //对结构体变量输入 必须发送st的地址
	//printf("%d %c %s\n", st.age, st.sex, st.name);
	OutputStudent(&st); //对结构体变量输出 可以发送st的地址，也可以直接发送st的内容,但为了减少内存耗费，也为了提高运行速度，推荐使用发送地址
	
	return 0;
}




