#include <stdio.h>
#include <math.h>

int main(){
    int N = 5000, m, n, k, i;
    double a = 2, b = 1, t = 0, tau = 0.01, C_k_l, l, rho, s[2][N];
    for (int i = 0; i < N; i++){
        s[0][i] = a*sin(t);
        s[1][i] = b*cos(t);
        t += tau;
    }
    scanf("%d", &k);
    printf("k = %d.   ", k);
    // for (k = 3; k < 10; k++){
        l = 0.25;
        while (l > 0.000001){
            C_k_l = 0;
            for (m = 0; m < N - k; m++){
                for (n = 0; n < N - k; n++){
                    rho = 0;
                    for (i = 0; i < k; i++){
                        a = s[0][n + i] - s[0][m + i];
                        b = s[1][n + i] - s[1][m + i];
                        rho = a*a + b*b;
                        if (rho < l)
                            C_k_l += 1;
                    }
                }
            }
            C_k_l /= N*N;
            printf("%lf, ", log(C_k_l)/log(l));
            l /= 2;
        }
        printf("\n");
    // }
    return 0;
}
