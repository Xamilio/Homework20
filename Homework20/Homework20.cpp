#include<iostream>
//1
#define h1(a, b) ((a) % (b) == 0 )
 
//2
#define h2(x, r) ( \
  (r) = 0;\
  for (int i = 0; i < (x); i++) \
  { \
		(r) = (r) + i; \
  })

//3 
#define h3(l, y, r) ( \
  r = 1;\
  for (int i = 0; i < (y); i++) \
  { \
  	(r) = (r) * (l); \
  })


using namespace std;
//1
//int main()
//{
//	int a = 30, b = 2;
//	if (h1(a, b))
//	{
//		cout << "True";
//	}
//	else
//	{
//		cout << "False";
//	}
//}

//2
//int main()
//{
//	int r = 0;
//	int x;
//	cout << "Введите число которое больше 1: ";
//	cin >> x;
//	h2(x, r);
//	cout << r;
//	
//}

//3
// 
//int main()
//{
//	int l = 5;
//	int y = 4;
//	int r = 1;
//	h3(l, y, r);
//	cout << r;
//}

//4
void print(int max)
{
	
	if (1 <= max) 
	{
		print(max - 1);
		cout << max << " ";
	}
	
}
int main()
{
	int max;
	cout << "Введите число: ";
	cin >> max;
	print(max);
}
