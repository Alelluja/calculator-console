#pragma once
#include <iostream>
#include <math.h>

//Life
float bmi(float weight, float height)
{
    if (weight <= 0 || height <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return weight / (pow(height, 2) / 10000);
}

float cost_travel(float combustion, float cost, float length)
{
    if (combustion <= 0 || cost <= 0 || length <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return (combustion * (length / 100) * cost);
}

float avg_combustion(float combustion, float length)
{
    if (combustion <= 0 || length <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return combustion / (length / 100);
}

//Games
float winratio(float wins, float totality)
{
    if (wins <= 0 || totality <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return (wins / totality) * 100;
}

float kda_ratio(float kills, float deaths, float assists)
{
    if (kills <= 0 || deaths <= 0 || assists <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return (kills + assists) / deaths;
}

float pick_ban_ratio(float pick, float games)
{
    if (pick <= 0 || games <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return (pick / games) * 100;
}

//Math
float square_area(float a)
{
    if (a <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return pow(a, 2);
}

float rectangle_area(float a, float b)
{
    if (a < 0 || b < 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return a * b;
}

float triangle_area(float a, float h)
{
    if (a <= 0 || h <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return (a * h) / 2;
}

float trapezoid_area(float a, float b, float h)
{
    if (a <= 0 || b <= 0 || h <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return ((a + b) * h) / 2;
}

float rhomb_parallelogram_area(float a, float h)
{
    if (a <= 0 || h <= 0)
    {
        printf("Give a number higher than zero!\n");

        return 0;
    }

    return a * h;
}