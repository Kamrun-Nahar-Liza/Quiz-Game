#include<stdio.h>
#include<string.h>
#include <time.h>

struct name
{
    char name[20];
    int score;
}player;

int main()
{
    system("color 2F");
    char name[20];
    printf("      Type your name:");
    gets(name);
    system("cls");
    printf("\n                                       Hello!");
    int n;
    printf("\n\n                                Welcome to Quiz game");
    printf("\n        -----------------------------------");
    printf("\n         Enter '1' to start the game");
    printf("\n         Enter '2' to view score");
    printf("\n         Enter '3' for help ");
    printf("\n         Enter '4' for quit" );
    printf("\n      -----------------------------------");
    printf("\nEnter your choice: ");
    scanf("%d",&n);
    system("cls");
    system("color 1F");
    if(n==3)
    {
        printf("\n\tThis game is very easy to play. You'll be asked some general");
        printf("\n\n\tknowledge questions and the right answer is to be chosen among");
        printf("\n\n\tthe four options provided. Your score will be calculated at the");
        printf("\n\n\tend. Remember that the more quicker you give answer the more");
        printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
        printf("\n\n\tat the end and displayed. If you secure highest score, your score");
        printf("\n\n\twill be recorded. So BEST OF LUCK.");
    }
    question1();
}
question1()
{
    system ("cls");
    int a;
    clock_t t;
    printf("\n        LEVEL 1      ");
    printf("\n\nwhich one is the correct spelling?");
    printf("\n\n1.function\t2.fungtion\n\n3.none\t\t4.funcsion\n\n");
    t = clock();
    printf("Enter a answer:  ");
    scanf("%d",&a);
    if(a==1)
    {
            t = clock() - t;
            double time_taken = ((double)t)/CLOCKS_PER_SEC;
            if(time_taken < 10)
            {
                player.score=player.score+10;
            }
            else if(time_taken < 15)
            {
                player.score=player.score+8;
            }
            else if(time_taken < 20)
            {
                player.score=player.score+5;
            }
            else
            {
                player.score=player.score+0;
            }
            system("cls");
            printf("\nCongratulation!\nYour answer is correct");
            printf("\nLevel 1 took %.2f seconds to execute", time_taken);
            printf("\nSCORE: %d", player.score);
            question2();
        }
        else
        {
            system("cls");
            printf("\n\n\t\t\t\t%s\n",player.name);
            printf("\t\t\t\tScore is %d", player.score);
            printf("\n      Opps!\n    Your answer is wrong :( ");
        }

}
question2()
{
    int b;
    clock_t t;
    printf("\n\nWhat is the world's longest river?");
    printf("\n\n1.Amazon\t2.Cox's Bazar\n\n3.St.Lawrence River\t4.Nile River\n\n");
    t = clock();
    printf("Enter a answer:  ");
    scanf("%d",&b);
    if(b==1)
    {
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        if(time_taken < 10)
        {
            player.score=player.score+10;
        }
        else if(time_taken < 15)
        {
            player.score=player.score+8;
        }
        else if(time_taken < 20)
        {
            player.score=player.score+5;
        }
        else
        {
            player.score=player.score+0;
        }
        system("cls");
        printf("\nCongratulation!\nYour answer is correct");
        printf("\nLevel 1 took %.2f seconds to execute\n", time_taken);
        printf("\nSCORE: %d", player.score);
        question3();
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\t\t%s\n",player.name);
        printf("\t\t\t\tScore is %d", player.score);
        printf("\n      Opps!\n    Your answer is wrong :( ");
    }

}
question3()
{
    int c;
    clock_t t;
    printf("\n\nMount Everest is located in ?");
    printf("\n\n1.India\t2.China\n\n3.Tibet\t4.Nepal");
    t = clock();
    printf("\nEnter a answer: ");
    scanf("%d",&c);
    if(c==4)
    {
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        if(time_taken < 10)
        {
            player.score=player.score+10;
        }
        else if(time_taken < 15)
        {
            player.score=player.score+8;
        }
        else if(time_taken < 20)
        {
            player.score=player.score+5;
        }
        else
        {
            player.score=player.score+0;
        }
        system("cls");
        printf("\nCongratulation!\nYour answer is correct");
        printf("\nLevel 1 took %.2f seconds to execute\n", time_taken);
        printf("\nSCORE: %d", player.score);
        question4();
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\t\t%s\n",player.name);
        printf("\t\t\t\tScore is %d", player.score);
        printf("\n      Opps!\n    Your answer is wrong :( ");
    }

}

question4()
{
    int d;
    clock_t t;
    system("color 4F");
    printf("\n              Level 2");
    printf("\n\nWhich of these is not web browser?");
    printf("\n\n1.Firebox\t2.Opera\n\n3.Facebook\t4.Chrome");
    t = clock();
    printf("\nEnter a answer: ");
    scanf("%d",&d);
    if(d==3)
    {
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        if(time_taken < 10)
        {
            player.score=player.score+10;
        }
        else if(time_taken < 15)
        {
            player.score=player.score+8;
        }
        else if(time_taken < 20)
        {
            player.score=player.score+5;
        }
        else
        {
            player.score=player.score+0;
        }
        system("cls");
        printf("\nCongratulation!\nYour answer is correct");
        printf("\nLevel 1 took %.2f seconds to execute\n", time_taken);
        printf("\nSCORE: %d", player.score);
        question5();
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\t\t%s\n",player.name);
        printf("\t\t\t\tScore is %d", player.score);
        printf("\n      Opps!\n    Your answer is wrong :( ");
    }

}
question5()
{
    int e;
    clock_t t;
    printf("\n\n\nWhich one is the smallest country in the world by population?");
    printf("\n\n1.San Marino\t2.Vatican City\n\n3.Polan\t\t4.Tuvan");
    t = clock();
    printf("\nEnter a answer: ");
    scanf("%d",&e);
    if(e==2)
    {
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        if(time_taken < 10)
        {
            player.score=player.score+10;
        }
        else if(time_taken < 15)
        {
            player.score=player.score+8;
        }
        else if(time_taken < 20)
        {
            player.score=player.score+5;
        }
        else
        {
            player.score=player.score+0;
        }
        system("cls");
        printf("\nCongratulation!\nYour answer is correct");
        printf("\nLevel 1 took %.2f seconds to execute\n", time_taken);
        printf("\nSCORE: %d", player.score);
        question6();
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\t\t%s\n",player.name);
        printf("\t\t\t\tScore is %d", player.score);
        printf("\n      Opps!\n    Your answer is wrong :( ");
    }
}

question6()
{
    int f;
    clock_t t;
    printf("\n\nWhich is the largest living fish?");
    printf("\n\n1.Sun fish\t2.Blue Whale\n\n3.Whale Shark\t4.Manta Ray");
    t = clock();
    printf("\nEnter a answer: ");
    scanf("%d",&f);
    if(f==3)
    {
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        if(time_taken < 10)
        {
            player.score=player.score+10;
        }
        else if(time_taken < 15)
        {
            player.score=player.score+8;
        }
        else if(time_taken < 20)
        {
            player.score=player.score+5;
        }
        else
        {
            player.score=player.score+0;
        }
        system("cls");
        printf("\nCongratulation!\nYour answer is correct");
        printf("\nLevel 1 took %.2f seconds to execute\n", time_taken);
        printf("\nSCORE: %d", player.score);
        question7();
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\t\t%s\n",player.name);
        printf("\t\t\t\tScore is %d", player.score);
        printf("\n      Opps!\n    Your answer is wrong :( ");
    }

}
question7()
{
    int g;
    clock_t t;
    system("color 5F");
    printf("\n\n               Level 3");
    printf("\n\nWhich of these is the largest?");
    printf("\n\n1.Virus\t2.Bacteria\n\n3.Atom\t4.DNA Virus");
    t = clock();
    printf("\nEnter a answer: ");
    scanf("%d",&g);
    if(g==2)
    {
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        if(time_taken < 10)
        {
            player.score=player.score+10;
        }
        else if(time_taken < 15)
        {
            player.score=player.score+8;
        }
        else if(time_taken < 20)
        {
            player.score=player.score+5;
        }
        else
        {
            player.score=player.score+0;
        }
        system("cls");
        printf("\nCongratulation!\nYour answer is correct");
        printf("\nLevel 1 took %.2f seconds to execute\n", time_taken);
        printf("\nSCORE: %d", player.score);
        }
    else
    {
        system("cls");
        printf("\n\n\t\t\t\t%s\n",player.name);
        printf("\t\t\t\tScore is %d", player.score);
        printf("\n      Opps!\n    Your answer is wrong :( ");
    }

}
