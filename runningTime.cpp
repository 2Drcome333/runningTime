#include<iostream>
using namespace std;
#include<ctime>

int main(void)
{
	clock_t start,end;
	start=clock();
	cout<<"���ڼ�������ʱ��...."<<endl;
	end=clock();
	cout<<"����ʱ��Ϊ�� "<<end-start<<endl; 
}
