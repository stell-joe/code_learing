#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*#include<stdio.h>

int main()
{
	struct books
	{
		int bno;
		char bname[20];
		char field[10];
		char author[10];
		char publisher[30];
		float price;
	};
	struct books bk1;
//	printf("%d\n", sizeof(bk1));
//	return 0;
//}
//*/
//
////结构体
////结构是一种集合，数组是一组相同类型元素的集合
//#include<stdio.h>
//
//
//struct Pu
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//一个汉字两个字符，再加一个\0
//	int high;
//};
///*struct Pu
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//一个汉字两个字符，再加一个\0
//	int high;
//}p1,p2;//p1和p2是struct Pe结构类型创建的两个变量，也是全局的结构体变量
//*/
//
////struct可以放在main函数之内，但是仅在内部使用
//int main()
//{
//	struct Pu p1;//结构体变量的创建
//	return 0;
//}

//struct Pu
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//一个汉字两个字符，再加一个\0
//	int high;
//}p3,p4;
//struct Pu p5, p6;
//struct St
//{
//	struct Pu p;
//	int num;
//	float f;
//};
//void print1(struct Pu p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量.成员变量
//}
//void print2(struct Pu* sp)
//{
//	printf("%s %s %s %d\n",sp->name, sp->tele, sp->sex, sp->high);//结构体指针->成员变量
//}
//int main()
//{
//	struct Pu p1 = { "张三","123654789987","男",199 };
//	struct St s = { {"李四","123654456321","女",166},100,3.14f};//浮点数在内存中不能精确保存
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//	print1(p1);
//	print2(&p1);
//	return 0;
//}

//结构体类型的定义
/*struct Stu
{
	//学生的相关属性
	char name[20];
	int age;

};
*/
//匿名结构体类型，只能使用一次
//struct
//{
//	char name[20];
//	int age;
//}s1;
//int main()
//{
//
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node next;
//};


//这种写法是不正确的，虽然是一个节点包括下一个的节点，但是求它的大小的话就会一直无限套娃下去，无法计算
//struct Node
//{
//	int data;
//	struct Node* next;//自己找到和自己同类型的地址
//};//节点包含两个部分，一部分存放数据，即数据域；另一个地方存放地址，即指针域


//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
////这么写之后以下两种是等价的,相当于是把struct Node的名字改成Node
////struct Node n1
////Node n2;


//struct Point
//{
//	int x;
//	int y;
//}p1 = {2,3};



//结构体内存对齐
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}
////结果是12
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	printf("%d", sizeof(struct S2));
//	return 0;
//}
////结果是8


//vs编译器默认的对齐数是8,其他编译器没有，默认就是自身的大小
//结构体的对齐规则：第一个成员在结构体偏移量为0
//其他成员变量要对齐到某个数字的整数倍的地址处
//对齐数是编译器默认的对其数和该成员大小的较小值
//嵌套一个结构体，对齐到该结构体最大的对齐数

//让占用小的尽量集中在一起，这样能一定程度上减少空间的占用 
//但是还是看自身的需求

//#pragma可以修改默认的对齐数

//#pragma pack(4)
//struct s
//{
//	int i;
//	double d;
//};
//#pragma pack()//这里就取消了
//int main()
//{
//	printf("%d\n", sizeof(struct s));
//	return 0;
//}
////如此看来#pragma(1)就不需要对齐了
////一般来说括号里的数是2的n次方
//
//#pragma once//在头文件使用，防止头文件被多次使用
// 





































