//例题说明解答与总结
//1.关于C语言关键字：
//关键字不能自己创建；typedef不是关键字
//2.continue用于while、do—while、for循环里面，不在switch中出现
//3.define属于预处理指令，不是关键字
//4.指针是个变量，用来存放地址
//5.static可以修饰局部变量；可以修全局变量；可以修饰函数
//6.if语句是一种分支语句，可以实现单分支，也可以实现多分支
//7.switch语句中的default子句可以放在任意位置；switch语句中的case后的表达式只能是整形常量表达式；switch语句中case表达式不要求顺序
//8.switch必须是整形常量表达式；char可以因为字符对应的ASCII码值

//int func(int a){
//
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//	return 0;
//}
//-----------输出结果： func（1）= 0；因为没有break所以一直往下执行

//#include <stdio.h>
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {//余数为1
//	case 1:
//		switch (y)//y=3
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");//执行这一行
//		}
//	case 2://因为default后面没有break，所以执行case 2
//		printf("third");
//	}
//	return 0;
//}
//-----------运行结果为：hellothird

//写代码按从大到小输出
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//算法实现：a中放最大值，b次之，c最小
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//求1-100之间所有3的倍数
//int main() {
//	int i;
//	for (i = 1; i < 101; ++i) {
//		if (i % 3 == 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数  (辗转相除法)
//int main() 
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//
//	while (r = m % n)
//	{	
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
