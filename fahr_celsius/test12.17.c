#include <stdio.h>

int main()
{
	//�������¶�Ϊ0,20,40...300ʱ���ֱ��ӡ�����¶��������¶ȵĶ�Ӧ��
	int fahr;//�����¶�
	int celsius;//�����¶�
	int lower, upper, step;
	lower = 0;//�¶ȱ������
	upper = 300;//�¶ȱ������
	step = 20; //����
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}