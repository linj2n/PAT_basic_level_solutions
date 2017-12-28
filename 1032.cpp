//1032. 挖掘机技术哪家强(20)
//18:15
//18:28
//为了用事实说明挖掘机技术到底哪家强，PAT组织了一场挖掘机技能大赛。现请你根据比赛结果统计出技术最强的那个学校。
//
//输入格式：
//
//输入在第1行给出不超过10^5的正整数N，即参赛人数。随后N行，每行给出一位参赛者的信息和成绩，包括其所代表的学校的编号（从1开始连续编号）、及其比赛成绩（百分制），中间以空格分隔。
//
//输出格式：
//
//在一行中给出总得分最高的学校的编号、及其总分，中间以空格分隔。题目保证答案唯一，没有并列。
//
//输入样例：
//6
//3 65
//2 80
//1 100
//2 70
//3 40
//3 0
//输出样例：
//2 150
#include <cstdio>
int arr[100001] = {};
int main(int argc, const char * argv[]) {
    int n,schoolId,score;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d",&schoolId,&score);
        arr[schoolId] += score;
    }
    
    int theHighestScoreSchoolId = 0,theHighestScore = -1;
    for (int i = 1; i <= 100001; i++)
    {
        if (theHighestScore < arr[i])
        {
            theHighestScoreSchoolId = i;
            theHighestScore = arr[i];
        }
    }
    printf("%d %d\n",theHighestScoreSchoolId,theHighestScore);
    return 0;
}
