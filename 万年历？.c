#include <stdio.h>

int main()
{
	int year,month,day;
	int cnt,days;
	scanf("%d %d %d", &year, &month, &day);
	switch (month) {
		case 2:
			if(year%4==0) {
				days=29;
				break;
			}else {
				days=28;
				break;
			}
		case 4:
		case 6:
		case 9:
		case 11:
			days=30;
			break;
		default :
			days=31;
			break;
	}
	for (cnt=1;cnt<=days;cnt++) {
		if(cnt==day) {
			printf("%3d*", cnt);
		}else{
		    printf("%4d", cnt);
	    }
		if(cnt%7==0) {
			putchar ('\n');
		}
	}
}
