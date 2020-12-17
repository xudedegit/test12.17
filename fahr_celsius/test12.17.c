#include <stdio.h>

int main()
{
	//当华氏温度为0,20,40...300时，分别打印华氏温度与摄氏温度的对应表
	int fahr;//华氏温度
	int celsius;//摄氏温度
	int lower, upper, step;
	lower = 0;//温度表的下限
	upper = 300;//温度表的上限
	step = 20; //步长
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}