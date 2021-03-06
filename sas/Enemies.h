
#ifndef Enemies_hpp
#define Enemies_hpp

#include <stdio.h>
#include "libs.h"
#include "Mob.h"
#include "TexRect3d.h"
#include <vector>
//#include <cstdlib>
#include <random>



class Enemies {
public:
    Enemies();
    float speed;
    float maxSpeed;
    int mobTimer;
    int minTimeBetwnMob;
    int rTime;
    void reset();
    float bgCounter;
    
    void addLongBone();
    void addThiccBone();
    TexRect3d* bg;
    bool displayFirstBG;
    bool firstRun;
    std::mt19937 eng;
    
    std::vector<Mob*> bones;
    std::vector<TexRect3d*> bgs;
    void Adv();
    void addBone();
    bool ultraContainment(float, float);
    void draw();
    ~Enemies();
    
};

#endif /* Enemies_hpp */
