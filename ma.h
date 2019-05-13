#ifndef MA_H
#define MA_H

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


#define down 's'
#define right 'd'
#define left 'a'
#define up 'w'


int number=0;

struct point{
 int x;
 int y;
 int di=0;
}start,end;

vector <point> way_point;

vector <char> way_direct;

int x_num=1,y_num=1,re=0;
int a[13][13];
int realsize;

//void findway(int ending_x,int ending_y);
//void find_direct(int x_p,int y_p,int ending_x,int ending_y);
//void seta(int ma[100][100]);

extern "C"{
   
 typedef struct StructPointerTest  
   {  
    char dicr[30];
    int realsize;  
   
   }StructPointerTest, *StructPointer;
   void findway(int ending_x,int ending_y);
   void find_direct(int x_p,int y_p,int ending_x,int ending_y);
   StructPointer seta(char **ma);


}

#endif
