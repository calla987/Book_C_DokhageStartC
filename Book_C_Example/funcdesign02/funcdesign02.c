#include <stdio.h>

//����� ���ϴ� '���'�� ������ �޽����� ��������� �ʴ´�.
int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;
	//�Ű����� ���� ��ȿ���� �ʴٸ� 0�� ��ȯ�����ν�
	//ȣ���� �Լ����� ������ �˸���!
	if (nParam < 1 || nParam > 10)		return 0;

	for (i = 1; i <= nParam; ++i)
		nResult *= i;
	return nResult;
}

//ȭ�� ��°� ������ �ڵ�� ��� main() �Լ��� ����Ѵ�.
int main(void)
{
	int nResult = 0, nInput = 0;

	printf("����� ���� ����(1~10)�� �Է��ϼ���. : ");
	scanf("%d", &nInput);

	//��ȯ ���� Ȯ���� ������ ������ �ĺ��ϰ� ������ �� �ִ�.
	nResult = GetFactorial(nInput);
	if (nResult == 0)
	{
		//�޽��� ����� ȣ���� �Լ��� �Ѵ�!
		puts("ERROR: 1~10������ ������ �Է��ϼ���.");
		return 0;
	}

	printf("Result: %d\n", nResult);
	return 0;
}
