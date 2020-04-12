/*
 C言語による植木算
 https://neguse-atama.hatenablog.com
*/
#include <stdio.h>
int main(void){
    int bangou,honsuu,kankazu,zenkyori,kannaga,tuzuki;
    do{
        printf("植木算を計算します。\n");
        printf("全体の距離と間隔の長さを入力してください。\n全体の距離:");  scanf("%d",&zenkyori);
        printf("間隔の長さ:");  scanf("%d",&kannaga);
        printf("1.両端に木を植える場合\n2.両端に木を植えない場合\n3.円形に木を植える場合\n");
        printf("以上から1,2,3のいずれかを選び、入力してください:");  scanf("%d",&bangou);
        kankazu=zenkyori/kannaga;
        if(bangou==1){
            honsuu=kankazu+1;
            printf("求める植木の数は%dです。\n",honsuu);
        }else if(bangou==2){
            honsuu=kankazu-1;
            printf("求める植木の数は%dです。\n",honsuu);
        }else if(bangou==3){
            honsuu=kankazu;
            printf("求める植木の数は%dです。\n",honsuu);
        }else{
            printf("1,2,3以外の数を入力しないでください。\n");
        }
        printf("計算をやり直しますか。・・・(0)はい (1)いいえ:");
        scanf("%d",&tuzuki);
    }while(tuzuki==0);
    return (0);
}