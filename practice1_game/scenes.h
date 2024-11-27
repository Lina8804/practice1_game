#ifndef SCENES_H
#define SCENES_H

#include <iostream>
#include <string>
using namespace std;

// Структура ресурсов
struct Resources {
    int life = 3;
    int hunger = 2;
    int money = 0;
    int health = 3;
    int comfort = 0;
    int careerGrowth = 0;
    int food = 0;
    bool hasPigeonFriend = false;
};

// объявление функций
void displayResources(const Resources& res);
void startIntro(Resources& res);
void startGame(Resources& res);
char makeChoice(const string& prompt, Resources& res);
void waitForInput(const string& prompt);

void scene1_market(Resources& res);
void scene2_market(Resources& res);
void scene3_market(Resources& res);
void scene4_market(Resources& res);
void scene5_market(Resources& res);
void scene5_1_market(Resources& res);
void scene6_market(Resources& res);
void scene7_girl(Resources& res);
void scene7_1_girl(Resources& res);
void scene7_2_girl(Resources& res);
void scene8_girl(Resources& res);
void scene9_grandfather(Resources& res);
void scene10_grandfather(Resources& res);
void scene11_grandfather(Resources& res);
void scene12_grandfather(Resources& res);
void scene13_grandfather(Resources& res);
void scene14_grandfather(Resources& res);

void gameLoop(Resources& res);

#endif