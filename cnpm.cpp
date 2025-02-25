#include <stdio.h>
#include <stdlib.h>

typedef long long ll;
ll Ictu(int x) {
    ll res = 0;
    for (int i = 1; i <= x; i++) {
        char temp[20];
        sprintf(temp, "%d%d", i, i);
        int num = atoi(temp);
        res += num;
    }
    return res;
}

int main() {
    int x;
    printf("Nhap So N: ");
    ll result = Ictu(x);
    printf("S = %lld\n", result);
    
    return 0;
}