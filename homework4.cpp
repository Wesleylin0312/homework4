#include <stdio.h> 

int main(void)
{ 
for(int second=0; 
printf("輸入想轉換的秒數:") && 
scanf("%d", &second) && 
second > 0; 
printf("%d 小時 %d 分鐘 %d 秒\n", 
second/(60*60), (second%(60*60))/60, second%60)); 
return 0; 
} 
