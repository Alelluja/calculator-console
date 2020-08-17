#include <iostream>
#include <math.h>
#include "console_calculator.h"

using namespace std;

void show_menu();
void life_calculators_menu();
void game_calculators_menu();
void math_calculators_menu();

void clear_console()
{
    system("cls");
}

void show_menu_again()
{
    printf("1. Show menu\n");
    printf("0. Exit\n\n");

    //Handle user input
    int choice = 0;

    printf("Choose option: ");
    scanf_s("%i", &choice);

    choice == 0 ? exit(0) : show_menu();
}

//Life
void main_bmi()
{
    clear_console();

    printf("\n-= Calculator BMI =-\n\n");

    float weight,
        height;

    printf("Enter the weight(kg): ");
    scanf_s("%f", &weight);

    printf("\nEnter the height(cm): ");
    scanf_s("%f", &height);

    printf("\nYour BMI: %0.2f\n\n", bmi(weight, height));

    show_menu_again();
}

void main_cost_travel()
{
    clear_console();

    printf("\n-= Calculator Travel Costs =-\n\n");

    float combustion,
        cost,
        length;

    printf("Enter the number of combustion fuel(l/100km): ");
    scanf_s("%f", &combustion);

    printf("\nEnter the cost fuel(zl): ");
    scanf_s("%f", &cost);   
    
    printf("\nEnter the length of route(km): ");
    scanf_s("%f", &length);

    printf("\nTravel Costs: %0.2fzl\n\n", cost_travel(combustion, cost, length));

    show_menu_again();
}

void main_avg_combustion()
{
    clear_console();

    printf("\n-= Calculator Average Combustion =-\n\n");

    float combustion,
        length;

    printf("Enter the number of combustion fuel(l): ");
    scanf_s("%f", &combustion);

    printf("\nEnter the length of traveled kilometers: ");
    scanf_s("%f", &length);

    printf("\nAverage combustion: %0.2f\n\n", avg_combustion(combustion, length));

    show_menu_again();
}

//Games
void main_winratio()
{
    clear_console();

    printf("\n-= Calculator Winratio =-\n\n");

    float wins,
        totality;

    printf("Enter the number of wins: ");
    scanf_s("%f", &wins);

    printf("\nEnter the number of matches: ");
    scanf_s("%f", &totality);

    printf("\nYour Winratio: %0.1f%%\n\n", winratio(wins, totality));

    show_menu_again();
}

void main_kda()
{
    clear_console();

    printf("\n-= Calculator KDA =-\n\n");

    float kills,
        deaths,
        assists;

    printf("Enter the number of kills: ");
    scanf_s("%f", &kills);

    printf("\nEnter the number of deaths: ");
    scanf_s("%f", &deaths);

    printf("\nEnter the number of assists: ");
    scanf_s("%f", &assists);

    printf("\nYour KDA: %0.2f\n\n", kda_ratio(kills, deaths, assists));

    show_menu_again();
}

void main_pick_ratio()
{
    clear_console();

    printf("\n-= Calculator Pick ratio =-\n\n");

    float pick,
        games;

    printf("Enter the number of champion picks: ");
    scanf_s("%f", &pick);

    printf("\nEnter the number of games on picked champion: ");
    scanf_s("%f", &games);

    printf("\nYour pick ratio: %0.1f%%\n\n", pick_ban_ratio(pick, games));

    show_menu_again();
}

void main_ban_ratio()
{
    clear_console();

    printf("\n-= Calculator Ban ratio =-\n\n");

    float ban,
        games;

    printf("Enter the number of champion bans: ");
    scanf_s("%f", &ban);

    printf("\nEnter the number of games on banned champion: ");
    scanf_s("%f", &games);

    printf("\nYour ban ratio: %0.1f%%\n\n", pick_ban_ratio(ban, games));

    show_menu_again();
}

//Math
void main_square_area()
{
    clear_console();

    printf("\n-= Calculator Area Square =-\n\n");

    float a;

    printf("Enter the number side of the square: ");
    scanf_s("%f", &a);

    printf("\nArea square: %0.2f%\n\n", square_area(a));

    show_menu_again();
}

void main_rectangle_area()
{
    clear_console();

    printf("\n-= Calculator Area Rectangle =-\n\n");

    float a,
        b;

    printf("Enter the number side of the rectangle: ");
    scanf_s("%f", &a);    
    
    printf("\nEnter the number second side of the rectangle: ");
    scanf_s("%f", &b);

    printf("\nArea rectangle: %0.2f%\n\n", rectangle_area(a, b));

    show_menu_again();
}

void main_triangle_area()
{
    clear_console();

    printf("\n-= Calculator Area Triangle =-\n\n");

    float a,
        h;

    printf("Enter the number side of the triangle: ");
    scanf_s("%f", &a);    
    
    printf("\nEnter the number height of the triangle: ");
    scanf_s("%f", &h);

    printf("\nArea triangle: %0.2f%\n\n", triangle_area(a, h));

    show_menu_again();
}

void main_trapezoid_area()
{
    clear_console();

    printf("\n-= Calculator Area Trapezoid =-\n\n");

    float a,
        b,
        h;

    printf("Enter the number side of the trapezoid: ");
    scanf_s("%f", &a);      
    
    printf("Enter the number second side of the trapezoid: ");
    scanf_s("%f", &b);    
    
    printf("\nEnter the number height of the trapezoid: ");
    scanf_s("%f", &h);

    printf("\nArea triangle: %0.2f%\n\n", trapezoid_area(a, b, h));

    show_menu_again();
}

void main_rhomb_area()
{
    clear_console();

    printf("\n-= Calculator Area Rhomb =-\n\n");

    float a,
        h;

    printf("Enter the number side of the rhomb: ");
    scanf_s("%f", &a);

    printf("\nEnter the number height of the rhomb: ");
    scanf_s("%f", &h);

    printf("\nArea triangle: %0.2f%\n\n", rhomb_parallelogram_area(a, h));

    show_menu_again();
}

void main_parallelogram_area()
{
    clear_console();

    printf("\n-= Calculator Area Parallelogram =-\n\n");

    float a,
        h;

    printf("Enter the number side of the parallelogram: ");
    scanf_s("%f", &a);

    printf("\nEnter the number height of the parallelogram: ");
    scanf_s("%f", &h);

    printf("\nArea triangle: %0.2f%\n\n", rhomb_parallelogram_area(a, h));

    show_menu_again();
}

//Main Menu
void show_menu()
{
    printf("-= Choose your Calculator =-\n\n");
    printf("1. Life Calculators\n");
    printf("2. Game Calculators\n");
    printf("3. Math Calculators\n");
    printf("0. Exit\n\n");

    int choice = 0;

    printf("Choose option: ");
    scanf_s("%i", &choice);

    switch (choice)
    {
        case 0:
        {
            exit(0);
        }
        case 1:
        {
            life_calculators_menu();
        }
        case 2:
        {
            game_calculators_menu();
        }
        case 3:
        {
            math_calculators_menu();
        }
    }
}

void life_calculators_menu()
{
    clear_console();

    printf("\n-= Choose your Calculator =-\n\n");
    printf("1. BMI Calculator\n");
    printf("2. Travel Costs Calculator\n");
    printf("3. Combustion Calculator\n");
    printf("0. Exit\n\n");

    int choice = 0;

    printf("Choose option: ");
    scanf_s("%i", &choice);

    switch (choice)
    {
        case 0:
        {
            exit(0);
        }
        case 1:
        {
            main_bmi();
        }
        case 2:
        {
            main_cost_travel();
        }
        case 3:
        {
            main_avg_combustion();
        }
    }
}

void game_calculators_menu()
{
    clear_console();

    printf("\n-= Choose your Calculator =-\n\n");
    printf("1. KDA Calculator\n");
    printf("2. Pick Ratio Calculator\n");
    printf("3. Ban Ratio Calculator\n");
    printf("0. Exit\n\n");

    int choice = 0;

    printf("Choose option: ");
    scanf_s("%i", &choice);

    switch (choice)
    {
        case 0:
        {
            exit(0);
        }
        case 1:
        {
            main_kda();
        }
        case 2:
        {
            main_pick_ratio();
        }
        case 3:
        {
            main_ban_ratio();
        }
    }
}

void math_calculators_menu()
{
    clear_console();

    printf("\n-= Choose your Calculator =-\n\n");
    printf("1. Area Square Calculator\n");
    printf("2. Area Rectangle Calculator\n");
    printf("3. Area Triangle Calculator\n");
    printf("4. Area Trapezoid Calculator\n");
    printf("5. Area Rhomb Calculator\n");
    printf("6. Area Parallelogram Calculator\n");
    printf("0. Exit\n\n");

    int choice = 0;

    printf("Choose option: ");
    scanf_s("%i", &choice);

    switch (choice)
    {
        case 0:
        {
            exit(0);
        }
        case 1:
        {
            main_square_area();
        }
        case 2:
        {
            main_rectangle_area();
        }
        case 3:
        {
            main_triangle_area();
        }
        case 4:
        {
            main_trapezoid_area();
        }
        case 5:
        {
            main_rhomb_area();
        }
        case 6:
        {
            main_parallelogram_area();
        }
    }
}

int main()
{
    show_menu();

    return 0;
}