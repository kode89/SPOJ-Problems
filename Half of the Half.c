#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
/**
*  SPOJ: Half of the Half
*/


int main()

{
     int test_cases;
     int i;
     char word[201];
     scanf("%d\n", &test_cases);
     if (test_cases >= 1 && test_cases <= 100){
        for (i = 0; i < test_cases; i++){

            scanf("%s", word);

            int m;
            float charcount;

            charcount = 0;
            for(m=0; word[m]; m++) {
                if(word[m] != ' ') {
                    charcount ++;
                }
            }
            int j;
            for (j=0; j < round(charcount/2);){
                printf("%c", word[j]);
                j += 2;
            }
            printf("\n");

        }
     }

return 0;
}
