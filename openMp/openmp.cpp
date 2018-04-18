//#include <iostream>
//#include <omp.h>
//#include <cstdlib>
//using namespace std;
//#define MAX 10
//#define SIZE 10
//
//int main()
//{
////	int count = 0;
////#pragma omp parallel num_threads(MAX)
////	{
////#pragma omp atomic
////		count++;
////	}
////	printf_s("Number of threads: %d\n", count);
//
//	int i;
//	int max;
//	int a[SIZE];
//	for (i = 0; i < SIZE; i++)
//	{
//		a[i] = rand();
//		printf_s("%d\n", a[i]);
//	}
//	max = a[0];
//#pragma omp parallel for num_threads(4)
//	for (i = 1; i < SIZE; i++)
//	{
//		if (a[i] > max)
//		{
//#pragma omp critical
//			{
//				if (a[i] > max)
//					max = a[i];
//			}
//		}
//	}
//
//	printf_s("max = %d\n", max);
//
//	return 0;
//}