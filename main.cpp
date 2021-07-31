#include<iostream>
using namespace std;
int main()
{
	int z[25] ={24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
	for (int i = 0; i < 25 ; i++)
	{
		for (int j = 0; j <25-1; j++)
		{
			if (z[j] > z[j + 1])
			{
				int temp = z[j];
				z[j] = z[j + 1];
				z[j + 1] = temp;
			}
		}
	}
	for (int k = 0; k < 25; k++)
	{
		cout << z[k] <<endl;
	}
	return 0;
}