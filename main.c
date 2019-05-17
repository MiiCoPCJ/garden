#include<stdio.h>
#include"curl_func.h"

int main(void){
    char *url = "https://www.okex.me/api/spot/v3/instruments/BTC-USDT/ticker";
    char *spf;

    spf = curl_func(url);

    printf("result: %s",spf);
}