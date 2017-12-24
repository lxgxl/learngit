#include <iostream>
#include <stdio.h>
using namespace std;

struct student
{
    int id;
    string name;
    int kaoqin[3];
};

int main()
{
    student stu[1000];

    cout << "请输入考勤记录（学号 姓名 考勤记录）（以-1结束输入）" << endl;
    int i = 1;
    while (1)
    {
        bool flag = true;
        int id, kq;
        string name;
        cin >> id;
        if (id == -1)
        {
            break;
        }
        cin >> name >> kq;

        for (int j = 1; j < i; j++)
        {
            if (stu[j].id == id)
            {
                stu[j].kaoqin[kq]++;
                flag = false;
            }
        }

        if (flag)
        {
            for (int j = 0; j <= 2; j++)
            {
                stu[i].kaoqin[j] = 0;
            }
            stu[i].id = id;
            stu[i].name = name;
            stu[i].kaoqin[kq]++;
            i++;
        }
    }

    cout << "学号\t姓名\t旷课\t迟到\t早退\n";
    for (int j = 1; j < i; j++)
    {
        cout << stu[j].id << "\t" << stu[j].name << "\t"
             << stu[j].kaoqin[0] << "\t" << stu[j].kaoqin[1] << "\t" << stu[j].kaoqin[2] << endl;
    }

    getchar();
    getchar();
    return 0;
}