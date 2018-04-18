//#include <iostream>
//using namespace std;
//int main() {
//	int sum = 0;
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//#pragma omp parallel for reduction(+:sum)
//	for (int i = 0; i < 10; i++)
//		sum = sum + a[i];
//	cout << "sum: " << sum << endl;
//	return 0;
//
//}

//#include <iostream>
//int main() {
//	int max = 0;
//	int a[10] = { 11,2,33,49,113,20,321,250,689,16 };
//#pragma omp parallel for
//	for (int i = 0; i < 10; i++)
//	{
//		int temp = a[i];
//#pragma omp critical
//		{
//			if (temp > max)
//				max = temp;
//		}
//	}
//	cout << "max: " << max << endl;
//	return 0;
//
//}

//sections
//#include <stdio.h>  
//#include <omp.h>  
//
//int main() {
//#pragma omp parallel sections num_threads(4)  
//	{
//		printf_s("Hello from thread %d\n", omp_get_thread_num());
//#pragma omp section  
//		printf_s("Hello from thread %d\n", omp_get_thread_num());
//
//
//	}
//	return 0;
//}

//nowait

//#include <iostream>
//#include <omp.h>
//using namespace std;
//#define SIZE 5
//void test(int *a, int *b, int *c, int size)
//{
//	int i;
//#pragma omp parallel
//	{
//#pragma omp  for nowait
//		for (i = 0; i < size; i++)
//		{
//			b[i] = a[i] * a[i];
//		}
//#pragma omp  for nowait
//		for (i = 0; i < size; i++)
//		{
//			c[i] = a[i]/2;
//		}
//	}
//}
//int main()
//{
//	int a[SIZE], b[SIZE], c[SIZE];
//	int i;
//
//	for (i = 0; i<SIZE; i++)
//		a[i] = i;
//
//	test(a, b, c, SIZE);
//
//	for (i = 0; i<SIZE; i++)
//		printf_s("%d, %d, %d\n", a[i], b[i], c[i]);
//
//
//
//	return 0;
//}


//ordered

//#include <stdio.h>  
//#include <omp.h>  
//void test(int first, int last)
//{
//#pragma omp for schedule(static) ordered  
//	for (int i = first; i <= last; ++i) {
//	 
//		if (i % 2)
//		{
//#pragma omp ordered   
//			printf_s("test() iteration %d\n", i);
//		}
//	}
//}
//
//void test2(int iter)
//{
//#pragma omp ordered  
//	printf_s("test2() iteration %d\n", iter);
//}
//
//int main()
//{
//	int i;
//#pragma omp parallel  
//	{
//		test(1, 8);
//#pragma omp for ordered  
//		for (i = 0; i < 5; i++)
//			test2(i);
//	}
//	return 0;
//}

//master


//#include <omp.h>  
//#include <stdio.h>  
//
//int main()
//{
//	int a[5], i;
//
//#pragma omp parallel  
//	{
//
//#pragma omp for  
//		for (i = 0; i < 5; i++)
//			a[i] = i * i;
//
//
////#pragma omp master  
////		for (i = 0; i < 5; i++)
////			printf_s("a[%d] = %d\n", i, a[i]);
//
//	}
//#pragma omp barrier  
//
//		 
//#pragma omp for  
//		for (i = 0; i < 5; i++)
//			a[i] += i;
//	
//
//	
//	return 0;
//}



//single

//#include <stdio.h>  
//#include <omp.h>  
//
//int main() {
//#pragma omp parallel num_threads(4)  
//	{
//#pragma omp single  
//		
//		printf_s("read input\n");
//
//		
//		printf_s("compute results\n");
//
//#pragma omp single  
//	 
//		printf_s("write output\n");
//	}
//
//	return 0;
//}



//parallel


#include <stdio.h>  
#include <omp.h>  
int main() {
#pragma omp parallel num_threads(4)  
	{
		int i = omp_get_thread_num();
		printf_s("Hello from thread %d\n", i);
	}
	return 0;
}

