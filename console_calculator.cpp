#include <iostream>
#include <math.h>

using namespace std;

//Life
float calculate_bmi(float weight, float height)
{
    if (weight <= 0 || height <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = weight / (pow(height, 2) / 10000);

    return result;
}

float calculate_cost_travel(float combustion, float cost, float length)
{
    if (combustion < 0 || cost < 0 || length < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = (combustion * (length / 100) * cost);

    return result;
}

float calculate_avg_combustion(float combustion, float length)
{
    if (combustion < 0 || length < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = combustion / (length / 100);

    return result;
}

//Games
float calculate_winratio(float wins, float totality)
{
    if (wins < 0 || totality < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = (wins / totality) * 100;

    return result;
}

float calculate_kda_ratio(float kills, float deaths, float assists)
{
    if (kills < 0 || deaths < 0 || assists < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = (kills + assists) / deaths;

    return result;
}

float calculate_pick_ban_ratio(float pick, float games)
{
    if (pick < 0 || games < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = (pick / games) * 100;

    return result;
}

//Math
float calculate_area_square(float a)
{
    if (a < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = pow(a, 2);

    return result;
}

float calculate_area_rectangle(float a, float b)
{
    if (a < 0 || b < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = a * b;

    return result;
}

float calculate_area_triangle(float a, float h)
{
    if (a < 0 || h < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = (a * h) / 2;

    return result;
}

float calculate_area_trapezoid(float a, float b, float h)
{
    if (a < 0 || b < 0 || h < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = ((a + b) * h) / 2;

    return result;
}

float calculate_area_rhomb_parallelogram(float a, float h)
{
    if (a < 0 || h < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    float result;

    result = a * h;

    return result;
}

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
void take_info_about_bmi()
{
    clear_console();

    printf("\n-= Calculator BMI =-\n\n");

    float weight,
        height;

    printf("Enter the weight(kg): ");
    scanf_s("%f", &weight);

    printf("\nEnter the height(cm): ");
    scanf_s("%f", &height);

    printf("\nYour BMI: %0.2f\n\n", calculate_bmi(weight, height));

    show_menu_again();
}

void take_info_about_cost_travel()
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

    printf("\nTravel Costs: %0.2fzl\n\n", calculate_cost_travel(combustion, cost, length));

    show_menu_again();
}

void take_info_about_avg_combustion()
{
    clear_console();

    printf("\n-= Calculator Average Combustion =-\n\n");

    float combustion,
        length;

    printf("Enter the number of combustion fuel(l): ");
    scanf_s("%f", &combustion);

    printf("\nEnter the length of traveled kilometers: ");
    scanf_s("%f", &length);

    printf("\nAverage combustion: %0.2f\n\n", calculate_avg_combustion(combustion, length));

    show_menu_again();
}

//Games
void take_info_about_winratio()
{
    clear_console();

    printf("\n-= Calculator Winratio =-\n\n");

    float wins,
        totality;

    printf("Enter the number of wins: ");
    scanf_s("%f", &wins);

    printf("\nEnter the number of matches: ");
    scanf_s("%f", &totality);

    printf("\nYour Winratio: %0.1f%%\n\n", calculate_winratio(wins, totality));

    show_menu_again();
}

void take_info_about_kda()
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

    printf("\nYour KDA: %0.2f\n\n", calculate_kda_ratio(kills, deaths, assists));

    show_menu_again();
}

void take_info_about_pick_ratio()
{
    clear_console();

    printf("\n-= Calculator Pick ratio =-\n\n");

    float pick,
        games;

    printf("Enter the number of champion picks: ");
    scanf_s("%f", &pick);

    printf("\nEnter the number of games on picked champion: ");
    scanf_s("%f", &games);

    printf("\nYour pick ratio: %0.1f%%\n\n", calculate_pick_ban_ratio(pick, games));

    show_menu_again();
}

void take_info_about_ban_ratio()
{
    clear_console();

    printf("\n-= Calculator Ban ratio =-\n\n");

    float ban,
        games;

    printf("Enter the number of champion bans: ");
    scanf_s("%f", &ban);

    printf("\nEnter the number of games on banned champion: ");
    scanf_s("%f", &games);

    printf("\nYour ban ratio: %0.1f%%\n\n", calculate_pick_ban_ratio(ban, games));

    show_menu_again();
}

//Math
void take_info_about_area_square()
{
    clear_console();

    printf("\n-= Calculator Area Square =-\n\n");

    float a;

    printf("Enter the number side of the square: ");
    scanf_s("%f", &a);

    printf("\nArea square: %0.2f%\n\n", calculate_area_square(a));

    show_menu_again();
}

void take_info_about_area_rectangle()
{
    clear_console();

    printf("\n-= Calculator Area Rectangle =-\n\n");

    float a,
        b;

    printf("Enter the number side of the rectangle: ");
    scanf_s("%f", &a);    
    
    printf("\nEnter the number second side of the rectangle: ");
    scanf_s("%f", &b);

    printf("\nArea rectangle: %0.2f%\n\n", calculate_area_rectangle(a, b));

    show_menu_again();
}

void take_info_about_area_triangle()
{
    clear_console();

    printf("\n-= Calculator Area Triangle =-\n\n");

    float a,
        h;

    printf("Enter the number side of the triangle: ");
    scanf_s("%f", &a);    
    
    printf("\nEnter the number height of the triangle: ");
    scanf_s("%f", &h);

    printf("\nArea triangle: %0.2f%\n\n", calculate_area_triangle(a, h));

    show_menu_again();
}

void take_info_about_area_trapezoid()
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

    printf("\nArea triangle: %0.2f%\n\n", calculate_area_trapezoid(a, b, h));

    show_menu_again();
}

void take_info_about_area_rhomb()
{
    clear_console();

    printf("\n-= Calculator Area Rhomb =-\n\n");

    float a,
        h;

    printf("Enter the number side of the rhomb: ");
    scanf_s("%f", &a);

    printf("\nEnter the number height of the rhomb: ");
    scanf_s("%f", &h);

    printf("\nArea triangle: %0.2f%\n\n", calculate_area_rhomb_parallelogram(a, h));

    show_menu_again();
}

void take_info_about_area_parallelogram()
{
    clear_console();

    printf("\n-= Calculator Area Parallelogram =-\n\n");

    float a,
        h;

    printf("Enter the number side of the parallelogram: ");
    scanf_s("%f", &a);

    printf("\nEnter the number height of the parallelogram: ");
    scanf_s("%f", &h);

    printf("\nArea triangle: %0.2f%\n\n", calculate_area_rhomb_parallelogram(a, h));

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

    choice == 0 ? exit(0) : (choice == 1 ? life_calculators_menu() : (choice == 2 ? game_calculators_menu() : math_calculators_menu()));
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

    choice == 0 ? exit(0) : (choice == 1 ? take_info_about_bmi() : (choice == 2 ? take_info_about_cost_travel() : take_info_about_avg_combustion()));
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

    choice == 0 ? exit(0) : (choice == 1 ? take_info_about_kda() : (choice == 2 ? take_info_about_pick_ratio() : take_info_about_ban_ratio()));
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

    choice == 0 ? exit(0) : 
        (choice == 1 ? take_info_about_area_square() : 
            (choice == 2 ? take_info_about_area_rectangle() : 
                (choice == 3 ? take_info_about_area_triangle() : 
                    (choice == 4 ? take_info_about_area_trapezoid() : 
                        (choice == 5 ? take_info_about_area_rhomb() : take_info_about_area_parallelogram())))));
}

int main()
{
    show_menu();

    return 0;
}