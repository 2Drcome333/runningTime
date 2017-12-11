#include<iostream>
using namespace std;
#include<ctime>

int main(void)
{
	clock_t start,end;
	start=clock();
	cout<<"正在计算运行时间...."<<endl;
	end=clock();
	cout<<"运行时间为： "<<end-start<<endl; 
}
