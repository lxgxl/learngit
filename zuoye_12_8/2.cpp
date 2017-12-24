#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, a[1000] = {0}, mark[1000];
    cout << "请输入有几个候选人" << endl;
    cin >> n;
    cout << "请输入每人限投票数" << endl;
    int piao;
    cin >> piao;

    while (1)
    {
        cout << "请输入要投票的序号(以-1结束)" << endl;
        while (1)
        {
            int man;
            cin >> man;
            if (man == -1)
            {
                break;
            }
            else
            {
                if (man >= 1 && man <= n && mark[man] == 0)
                {
                    mark[man] = 1;
                    a[man]++;
                }
            }
            for (int i = 2; i <= piao; i++)
            {
                cin >> man;
                if (man >= 1 && man <= n && mark[man] == 0)
                {
                    mark[man] = 1;
                    a[man]++;
                }
            }

            for (int i = 1; i <= n; i++)
            {
                mark[i] = 0;
            }
        }

        int max1 = 1, max2 = 0;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] == a[max1])
            {
                max2 = i;
            }
            else if (a[i] > a[max1])
            {
                max1 = i;
            }
        }

        if (a[max1] == a[max2])
        {
            cout << "获胜者大于1，重新开始\n\n\n";
            continue;
        }
        else
        {
            cout << "获胜者为 " << max1 << endl;
            break;
        }
    }

    getchar();
    getchar();
    return 0;
}