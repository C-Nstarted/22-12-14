//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	double a = 5 / 2.0;//a=5.0/2;
//	printf("a=%lf\n", a);
//	int a = 5 / 2;
//	printf("a=%d\n", a);
//	int b = 5 % 2;
//	printf("b=%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	//>>--右移操作符
//	//移动的是二进制位
//	//000000000000000000000000000100000
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	//
//	//整数的二进制表示有：原码、反码、补码
//	//储存到内存的是补码
//	//10000000 00000000 00000000 00000001--原码
//	//11111111 11111111 11111111 11111110--反码
//	//11111111 11111111 11111111 11111111--补码
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	//00000000 00000000 00000000 00000101
//	int b = a << 1;
//	//00000000 00000000 00000000 00001010
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{   
//    &-按二进制位与
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;*/
//	00000000000000000000000000000011
//	00000000000000000000000000000101
//	00000000000000000000000000000001
//	printf("%d\n", c);
//	|-按二进制或
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	printf("%d\n", c);
//	^-按二进制异或
//	相同为0，相异为1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 10));
//	printf("%d\n", s);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	//~--按二进制取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - （二进制取反）补码
//	//11111111111111111111111111111110 - 反码
//	//10000000000000000000000000000001 - 原码
//	printf("%d\n", ~a);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++，先使用，后++
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	////三木操作符
//	//b = (a > 5 ? 3 : -3);
//	return 0;
//}
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct Stu s1 = { "张三",20,"2019131545" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%s\n", (*ps).name);
//	/*printf("%s\n", s1.name );
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//
//
//
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//
//
//int Sn_x(int x)
//{
//	//2+22+222+2222+22222
//	//x+xx+xxx+xxxx+xxxxx
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	for (i = 0; i < 5; i++)
//	{
//		tmp = 10 * tmp + x;
//		sum += tmp;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int Sn = 0;
//	scanf("%d", &a);
//	Sn=Sn_x(a);
//	printf("%d\n", Sn);
//	return 0;
//}
// 
// 
// 
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i<100000 ; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum =sum+ pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char ch[] = { "abcdef"};
//	char* p =  ch;
//	for (int i = 0; i < sizeof(ch) / sizeof(ch[0]); ++i)
//	{
//		printf("%c ", *p);   
//		++p;                
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//在这里完成代码
//	// 分析：因为数组中存储的元素类型是int类型的，因此只要给一个int的指针，依次取索引数组中的每个元素即可
//	int* p = arr;  // 数组名代表数组首元素的地址
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("%d ", *p);   // *p: 取到p所指向位置的元素
//		++p;                 // 获取p的下一个位置
//	}
//
//	return 0;
//}