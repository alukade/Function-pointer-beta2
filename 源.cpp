# include <stdio.h>
int Max(int, int);  //��������
int main(void)
{
    int(*p)(int, int);  //����һ������ָ��
    int a, b, c;
    p = Max;  //�Ѻ���Max����ָ�����p, ʹpָ��Max����
    printf("please enter a and b:");
    scanf_s("%d%d", &a, &b);
    c = (*p)(a, b);  //ͨ������ָ�����Max����
    printf("a = %d\nb = %d\nmax = %d\n", a, b, c);
    return 0;
}
int Max(int x, int y)  //����Max����
{
    int z;
    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;
}