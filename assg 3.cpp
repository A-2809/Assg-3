#include<stdio.h>
main()
{
	int i;
	printf("enter any value between 1 to 5\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1: printf("Food item: French fries\nPrice: Rs.99");
				break;
		case 2: printf("Food item: Pasta\nPrice: Rs.179");
				break;
		case 3: printf("Food item: Burger\nPrice: Rs.129");
				break;
		case 4: printf("Food item: Sandwich\nPrice: Rs.149");
				break;
		case 5: printf("Food item: Pizza\nPrice: Rs.239");
				break;
		default: printf("value is not between 1 to 5");
	}
	return 0;
}
