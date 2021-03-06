// 1002. 写出这个数 (20)
// 读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

// 输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

// 输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

// 输入样例：
// 1234567890987654321123456789
// 输出样例：
// yi san wu

#include <cstdio>
const char* pingyin[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main(int argc, const char * argv[]) {
    char input[101];
    scanf("%s",input);

    int sum = 0;
    for (int i = 0; input[i]; i++) {
        sum += (input[i] - '0');
    }
    int digit[3];
    digit[0] = sum / 100;
    sum %= 100;
    digit[1] = sum / 10;
    sum %= 10;
    digit[2] = sum;
    if (digit[0])
        printf("%s ",pingyin[digit[0]]);
    if (digit[0] || digit[1])
        printf("%s ",pingyin[digit[1]]);
    printf("%s",pingyin[digit[2]]);
    return 0;
}

