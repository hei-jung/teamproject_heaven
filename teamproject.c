#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int x, y;
	for (x = 1; x < 81; x++)
		printf("=");
	printf("\n    > The Mini-Game Proooogram\n    > Made By 'Mini-game-heaven' Team\n");

	for (x = 1; x < 30; x++)
		printf("-");
	printf("<The Mini-Games Menu>");
	for (x = 1; x < 30; x++)
		printf("-");
	printf("\n");
	printf("\n    #1. Dice Tossing Game\n    #2. Dice numbers matching game\n    #3. Baskin Robbins 31 game\n    #4. Rock Paper Scissors game\n    #5. UP & DOWN GAME)\n\n");
	for (x = 1; x < 81; x++)
		printf("=");
	printf(">> What are the games you want?\n>> (1,2,3,4,5)\n>> Enter the number : ");
	scanf("%d", &y);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	switch (y)
	{
	case 1:
	{
		int goal, toss, a, dice, sum = 0, conti;

		printf("\n<<Dice Tossing Game!!>>\n");

		for (;;)
		{
			printf("\nSet your goal in number. Goal must be larger than 0.\n");
			scanf("%d", &goal);
			if (goal <= 0)
				printf("Goal must be larger than 0.\n");
			else
				break;
		}

		for (;;)
		{
			printf("How many times will you toss your dice?\n");
			scanf("%d", &toss);
			if (toss < 1)
				printf("You should toss your dice at least once.\n");
			else
			{
				printf("You will throw dice %d times.\n", toss);
				printf("Your goal is [%d].\n To start game, press Enter.", goal);
				getchar();
				break;
			}
		}
		getchar();

		srand((unsigned int)time(NULL));

		for (a = 1; a <= toss; a++)
		{
			dice = rand() % 6 + 1;
			sum += dice;
			printf("No.%d Dice number is [%d].\n", a, dice);
		}

		for (;;)
		{
			printf("You moved %d.\n", sum);
			if (sum < goal)
			{
				printf("You lose :( \n");

			}
			else
			{
				printf("Winner! :) \n");

			}
			printf("Thank you for playing~\n");
			exit(0);
		}
		break;
	}
	case 2:
	{
		int a, select, money, dice, conti;

		for (;;)
		{
			printf("Enter your money.(More than 1000 won.) : ");
			scanf("%d", &a);
			if (a < 1000)
				printf("Enter more than 1000 won.\n");
			else
			{
				printf("You have %d won.\n-Press Enter to start the game-", a);
				money = a;
				getchar();
				break;
			}
		}
		getchar();
		printf("\n<<Dice numbers matching game!>>\n");

		for (;;)
		{
			printf("\nGuess and enter the dice number.(Correct + 500, Incorrect - 500) : ");
			scanf("%d", &select);

			srand((unsigned int)time(NULL));
			dice = rand() % 6 + 1;

			printf("Dice number is [%d]. You selected [%d].\n", dice, select);
			if (dice == select)
				money = money + 500;
			else
				money = money - 500;

			printf("You have %d won.\n", money);

			if (money < 500)
			{
				printf("--------You have your money 'All in'. Game over.---------\n");
				return 0;
			}

			printf("CONTINUE? (0 : Continue / 1 : End) : ");
			scanf("%d", &conti);
			switch (conti)
			{
			case(0) :
				continue;
			case(1) :
			{
				printf("Good Game.\n");
				return 0;
			}
			}
		}
	}
	case 3:
	{
		int i, c, a = 0;
		int n, m;
		printf("This game is Baskin Robbins 31 game and the person who says out 31 will lose.\n\n");
		printf("Let's start the game!!\n\n");
		printf("*************************************************************************\n\n");
		while (1)
		{
			if (a >= 31)
			{
				break;
			}
			else
			{
				printf("Enter one of 1 to 3:");
				scanf("%d", &n);

				c = a;
				for (i = c + 1; i <= (n + c); i++)
				{
					printf("%d  ", i);
					a++;
				}
				printf("\n");

				if (a == 31) {
					printf("You lose.");
					printf("\n");
					break;
				}
				c = a;
				srand(time(NULL));
				m = rand() % 3 + 1;
				printf("PC: %d\n", m);

				for (i = c + 1; i <= (m + c); i++) {
					printf("%d  ", i);
					a++;
				}
				printf("\n");

				if (a == 31) {
					printf("You win.");
					printf("\n");
					break;
				}
			}
		}
		return 0;
	}
	case 4:
	{
		int i = 0;
		int com = 0;
		int user, user1, user2;
		int con = 0;
		int win = 0, draw = 0;
		int s;
		char *arr[3] = { "Rock","Scissors","Paper" };

		printf("Rock Paper Scissors game\n - Enter <for 1> = 1 or \n - <for 2> = 2\n>> : ");
		scanf("%d", &s);

		if (s == 1)
		{
			printf("This game shows you how much you have won until you lost! \n");
			while (i < 1)
			{
				printf("Rock is 1,Scissors is 2,Paper is 3. Select a number. :");
				scanf("%d", &user);

				srand((int)time(NULL));
				com = rand() % 10;
				if (com < 4)
					com = 1;
				else if (com > 6)
					com = 2;
				else
					com = 3;

				con = user - com;
				if (con == -1 || con == 2)
				{
					win += 1;
					printf("You chose <%s>, PC chooses <%s>, You win!\n", arr[user - 1], arr[com - 1]);
					continue;
				}
				else if (con == 0)
				{
					draw += 1;
					printf("You chose <%s>, PC chooses <%s>, Tie!\n", arr[user - 1], arr[com - 1]);
					continue;
				}
				else
				{
					printf("You chose <%s>, PC chooses <%s>, You lose! ¤Ð¤Ð\n", arr[user - 1], arr[com - 1]);
					break;
				}
			}
			printf("Game Result : %dWins, %dDraws", win, draw);
		}
		else if (s == 2)
		{
			char *arr[3] = { "Rock","Scissors","Paper" };
			printf("user1, select Rock 1, Scissors 2, Paper 3 : ");
			scanf("%d", &user1);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n¦£ user1's selection is over. \n¦¦ Your turn.\n\n\n\n");
			printf("user2, select Rock 1, Scissors 2, Paper 3 : ");
			scanf("%d", &user2);

			con = user1 - user2;

			if (con == -1 || con == 2)
			{
				printf("user1 selected <%s>, user2 selected <%s>, user1 wins!\n", arr[user1 - 1], arr[user2 - 1]);
			}
			else if (con == 0)
			{
				printf("user1 selected <%s>, user2 selected <%s>, Tie!\n", arr[user1 - 1], arr[user2 - 1]);
			}
			else
			{
				printf("user1 selected <%s>, user2 selected <%s>, user2 wins!\n", arr[user1 - 1], arr[user2 - 1]);
			}
		}
		return 0;
	}
	case 5:
	{
		int ans, user_ans = 0;
		int count = 10;
		int select = 0;

		printf("Select level.(0 ~ Selected Level) : ");
		scanf("%d", &select);

		srand((unsigned)time(NULL));
		ans = rand() % select + 1;

		printf("CPU-Let's get the game started.\nCPU-Guess my number.(UP/DOWN GAME)\n\n\n ");

		while (user_ans != ans)
		{
			printf("Enter number : ");
			scanf("%d", &user_ans);

			printf("\t<Chances left : %d>\n", count);
			if (count == 0)
			{
				printf("<<<Chance over, CPU WIN!!.>>>\n");
				exit(0);
			}
			if (ans == user_ans)
			{
				printf("\t<<<Correct!!!>>>\n");
				exit(0);
			}
			else if (ans < user_ans && user_ans >= 0 && user_ans <= select)
			{
				printf("\t DOWN DOWN DOWN !!!\n");
			}
			else if (ans > user_ans && user_ans >= 0 && user_ans <= select)
			{
				printf("\t UP UP UP !!!\n");
			}
			else if (user_ans < 0 || user_ans > select)
				printf("Enter a number 0 between %d ;\n", select);
			count--;
		}
	}
	}
}