#include<stdio.h>
main()
{
	int c=0;
	printf("Welcome to <Fast_Food>, The adda of Bhukkads....\n");
	printf("Enter any random number of your choice, then I will suggest a food-item for you: ");
	printf("");           /* here printf("") is used to bring the cursor in next line*/
	scanf("%d",&c);
	switch(c)             /* from here switch-case method start*/
	{
		case 1:
			printf("Food-item - Biryani\nPrice - Rs250\n");
			break;          /*here break terminate switch-case condition*/
		case 2:
			printf("Food-item - Burger\nPrice - Rs105\n");
			break;
		case 3:
			printf("Food-item - Noodles\nPrice - Rs150\n");
			break;
		case 4:
			printf("Food-item - French Fries\nPrice - Rs60\n");
			break;
		case 5:
			printf("Food-item - Ice-cream\nPrice - Rs50\n");
			break;
		case 6:
			printf("Food-item - Chicken-roll\nPrice - Rs200\n");
			break;
		default:
			printf("Oops!, Try another number\n");
	}
	if (c>=1 && c<=6)                      /* I have added this 'if' codition to acknowledge the user if he had got his meal*/
	{
		printf("\"Please pay at counter\"\n\'Enjoy your meal\'");	
	}
	return 0;
}
