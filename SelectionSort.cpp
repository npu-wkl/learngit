/*************************************************************************
	> File Name: SelectionSort.cpp
	> Author: amoscykl
	> Mail: amoscykl@163.com 
	> Created Time: 2019年03月24日 星期日 10时46分13秒
 ************************************************************************/

#include<iostream>
using namespace std;
void SelectionSort(int A[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++)
			if(A[j]<A[k]) k=j;
		if(i!=k) t=A[i],A[i]=A[k],A[k]=t;
	}
}
#include<ctime>
#define N 10
int main()
{
	int A[N],i;
	srand((unsigned int)time(0));
	for(i=0;i<N;i++)
	{
		A[i]=rand()%100;
		cout<<A[i]<<" ";
	}
	cout<<endl;
	SelectionSort(A,N);
	for(i=0;i<N;i++) cout<<A[i]<<" ";
	return 0;
}
