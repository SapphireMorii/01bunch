#include <iostream>
#include <string>

using namespace std;

void initia(int numbers[], const int len)
{
	for (int k = 0; k < len; k++)
	{
		numbers[k] = 0;
	}
}
void initia(char numbers[], const int len)
{
	for (int k = 0; k < len; k++)
	{
		numbers[k] = '0';
	}
}

int main()
{
	int n, q, cnt = 0;
	string num;
	cin >> n;
	cin >> num;
	cin >> q;
	int* cntg = new int[n + 4];
	initia(cntg, n + 4);
	int* group = new int[q];
	initia(group, q);
	for (int j = 0; j < q; j++)
	{
		cin >> group[j];
	}
	for (int i2 = 0; i2 < n; i2++)
	{
		cnt = 0;
		if (num[i2] == '1')
		{
			cntg[cnt]++;
			cnt++;
		}
		int j2 = i2 + 1;
		for (int j2 = i2 + 1; j2 < n; j2++)
		{
			if (num[j2] == '1')
			{
				cntg[cnt]++;
				cnt++;
			}
			else
			{
				if (cnt)
				{
					cntg[cnt - 1]++;
				}
			}
		}
	}
	for (int k = 0; k < q; k++)
	{
		cout << cntg[group[k] - 1] << endl;
	}
	delete[]group;
	delete[]cntg;
	return 0;
}