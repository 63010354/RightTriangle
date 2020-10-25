#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int side[3];

void RightTriangle();

int main()
{
	int i = 0;
	while (i < 3)
	{
		cin >> side[i];
		i++;
	}

	if (side[0] <= 0 || side[1] <= 0 || side[2] <= 0)
	{
		cout << "width and height must be greater than 0";
	}
	else RightTriangle();

}

void RightTriangle()
{
	sort(side, side + 3);
	if (pow(side[0], 2) + pow(side[1], 2) == pow(side[2], 2))
	{
		cout << "Yeahhh, it is symmetry triangle!!";
	}
	else cout << "Nahhh, it is not symmetry triangle!!";

}
