#include <stdio.h>

//����� ����ϴ� ����� ������ �Լ��� ���� �� ����
int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;
	if (nParam < 1 || nParam > 10)
	{
		//�Ű������� ���� ���� ���� ��ȿ���� �ʴٴ� �޽����� ����Ѵ�.
		//'�޽��� ���'�� UI�� �ش��ϹǷ� �Լ� ������
		//ó���ϴ� ���� �ٶ������� �ʴ�.
		puts("ERROR: 1~10������ ������ �Է��ϼ���.");
		return 0;
	}

	//����� ����ϰ� ��ȯ�Ѵ�.
	for (i = 1; i <= nParam; ++i)
		nResult *= i;
	return nResult;
}

int main(void)
{
	printf("MAX: %d\n", GetFactorial(1));
	printf("MAX: %d\n", GetFactorial(5));
	//������ �Է� ������ ��� ���� �Ű������� ����.
	printf("MAX: %d\n", GetFactorial(11));
	printf("MAX: %d\n", GetFactorial(10));
	return 0;
}

