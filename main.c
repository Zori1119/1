#include<stdio.h>
int main()
{
    int n,i;
    printf("请输入学院总数\n");
    scanf("%d",&n);
    struct College
    {
        int num;
        char name[20];
        char place[30];
        int qua;
        long long call;
    };
    struct College col[n];
    for(i=0;i<n;i++)
    scanf("%d%s%s%d%ld",&Collegei.num,Collegei.name,Collegei.palce,&Collegei.qua,&Collegei.call);
    printf("%d%s%s%d%ld"，College[i].num,College[i].name,College[i].place,College[i].qua,College[i].call);
    return 0;
}