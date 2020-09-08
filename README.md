# The Mini-Game Proooogram by 'Mini-game-heaven'
&lt;Introduction to Computer &amp; Lab> final project, spring semester, 2016

**Contents**<br>
-Project Plan-<br>
[1.Introduction](#introduction)<br>
[2.Problem Statement](#problem-statement)<br>
[3.Project Objectives](#project-objectives)<br>
[4.Literature Review](#literature-review)<br>
[5.Project Description](#project-description)<br>
[6.Plan of Work](#plan-of-work)<br>
[7.Expected Results](#expected-results)<br>
[8.References](#references)<br>
-Implementation-<br>
[1.My Part](#my-part)<br>

![1](https://user-images.githubusercontent.com/40985307/92434289-68b3cd80-f1da-11ea-83c8-417775b5b1d7.png)

## Introduction

- My team decided to make a program of mini-games.
- Each team members will write a program of different mini-games.
- User will get to choose one of five mini-games.
- And the selected game starts!

## Problem Statement

![4](https://user-images.githubusercontent.com/40985307/92434422-b6303a80-f1da-11ea-9ef8-cb637535d7e9.png)

## Project Objectives

- Practice making flowcharts
- Apply flowcharts on writing source codes
- Practice making source codes in own
- Design and make a program by ourselves(team people)
- Make a simple game using what we learned during class

**=> Application of learnings from class**

## Literature Review

![6](https://user-images.githubusercontent.com/40985307/92434616-3f477180-f1db-11ea-961e-d6e5a91c6fdb.png)

## Project Description

- When a user opens the program, there will appear some options of mini-games. The user selects one of them and becomes a player.
  - Rock scissors paper game
  - Dice tossing game([my assignment](#my-assignment))
  - Guess the dice number game
  - Baskin Robbins game
  - Up & Down game

### My Assignment

```
Player sets a goal to move. He/she then sets how many times he/she will throw the dice.
Computer will give dice numbers in random as the number of repetition.
If the sum of dice numbers is same with or bigger than the number of goal, the player wins.
If not, the player loses.
```

## Plan of Work

![8](https://user-images.githubusercontent.com/40985307/92434927-09ef5380-f1dc-11ea-9a02-1ad0dcb4ea44.png)

## Expected Results

![9](https://user-images.githubusercontent.com/40985307/92435002-386d2e80-f1dc-11ea-96a0-8fbd3163b9f4.png)

## References

Literature Review: http://www.justanswer.com/computer-programming/3l16w-create-dice-rolling-game-game-allow-user.html

## My Part

```cpp
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
```
