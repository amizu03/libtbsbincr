#include "tbs_enc.h"

int main() {
    // const tbs_config cfg = tbs_config_default(thread_safe: false);

    // _TBS_USE_VAR(cfg);

    tbs_enc({
        printf("hey\n");
    }, re_encrypt: false);

    // int a = tbs_enc_exp(1) + tbs_enc_exp(2); // + tbs_enc_exp(2 * tbs_enc_exp(3)));
    // printf("%d\n", a);

    // // tbs_enc({
    // //     printf("ho\n");
    // // }, thread_safe: false);

    tbs_enc({
        printf("ho\n");
        tbs_enc({
            printf("go\n");
        });
        tbs_enc(
            printf("%d + %d = %d\n",
                tbs_enc_exp(1), tbs_enc_exp(3), tbs_enc_exp(1 + 3))
        );
    });

            printf("%d + %d = %d\n",
                tbs_enc_exp(1), tbs_enc_exp(3), tbs_enc_exp(1 + 3));
    // printf("%d\n", tbs_enc_exp(1));
}
