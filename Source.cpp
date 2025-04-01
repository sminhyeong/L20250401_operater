#include<iostream>

using namespace std;

//µ¡¼À ÇÔ¼ö
int Add(int Num1, int Num2)
{
	return Num1 + Num2;
}

float Add(float Num1, float Num2)
{
	return Num1 + Num2;
}

//»¬¼À ÇÔ¼ö
int Sub(int Num1, int Num2)
{
	return Num1 - Num2;
}


float Sub(float Num1, float Num2)
{
	return Num1 - Num2;
}

//°ö¼ÀÇÔ¼ö
int Mul(int Num1, int Num2)
{
	return Num1 * Num2;
}

float Mul(float Num1, float Num2)
{
	return Num1 * Num2;
}

//³ª´°¼À ÇÔ¼ö
int Div(int Num1, int Num2)
{
	if (Num2 == 0) return -1;
	return Num1 / Num2;
}

float Div(float Num1, float Num2)
{
	if (Num2 == 0) return -1;
	return Num1 / Num2;
}


int main()
{
	int Number1 = 10;
	int Number2 = 4;
	cout << Add(Number1, Number2) << endl;
	cout << Sub(Number1, Number2) << endl;
	cout << Mul(Number1, Number2) << endl;
	cout << Div(Number1, Number2) << endl;
	cout << Add((float)Number1, (float)Number2) << endl;
	cout << Sub((float)Number1, (float)Number2) << endl;
	cout << Mul((float)Number1, (float)Number2) << endl;
	cout << Div((float)Number1, (float)Number2) << endl;
	return 0;
}