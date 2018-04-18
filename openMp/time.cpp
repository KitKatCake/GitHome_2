////#include <iostream>
////#include <ctime>
////using namespace std;
////#define N 200000
////int main()
////{
////	clock_t start, finish;
////	start = clock();
////	unsigned int i;
////	for (i = 0; i < N; i++)
////	{
////		//cout << "Hello World!" << endl;
////		cout << i << endl;
////
////	}
////	finish = clock();
////	cout << finish - start << "/" << CLOCKS_PER_SEC << " (s) " << endl;
////
////
////	
////	
////	return 0;
////}
//
//
//#include <iostream>
//#include <time.h>
//#include <omp.h>
//using namespace std;
//void test()
//{
//	int a = 0;
//	for (int i = 0; i < 100000000; i++)
//		a++;
//}
//int main()
//{
////	clock_t t1 = clock();
////#pragma omp parallel for
////	for (int i = 0; i < 8; i++)
////		test();
////	clock_t t2 = clock();
////	cout << "time: " << t2 - t1 << endl;
//
//
//	/*for (int i = 0; i < 10; i++)
//	{
//		cout << i << endl;
//
//	}*/
//
//
//
////	int coreNum = omp_get_num_procs();
////	//cout << coreNum << endl;
////
////	int sum = 0;
////	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int *sumArray = new int[coreNum];
////    int i;
////	for (i = 0; i < coreNum; ++i)
////	{
////		sumArray[i] = 0;
////	}
////#pragma omp parallel for
////	for (i = 0; i < 10; ++i)
////	{
////		int k = omp_get_thread_num();
////	    sumArray[k] += a[i];
////	}
////	for (int i = 0; i<coreNum; ++i)
////		sum += sumArray[i];
////
////	cout << "sum: " << sum << endl;
//
//
//
//
//
//
//
//
//	return 0;
//}