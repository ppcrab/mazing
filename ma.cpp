
#include "ma.h"


StructPointer seta(char **num){
  StructPointer p=(StructPointer)malloc(sizeof(StructPointerTest));
  char dir[30];
  for(int i=0;i<13;i++){
    for(int j=0;j<13;j++){
      a[i][j] = num[i][j]-48;
    }
  }
  find_direct(1,1,11,11);
  for(int i=0;i<realsize;i++){
    p->dicr[i] = way_direct[i];
    cout<<way_direct[i];
  }
  cout<<endl;
  p->realsize = realsize;
  //strcpy(p->dicr,dir);
  /*for(int i=0;i<realsize;i++){    
    cout<<p->dicr[i];
  }*/
  return p;
}


void find_direct(int x_p,int y_p,int ending_x,int ending_y){
  point pp;
  a[x_p][y_p] = 5;
  if((x_p==ending_x&&ending_y==y_p)||re==1){
     re=1;
     if(x_p==ending_x&&ending_y==y_p){
          realsize = way_point.size();
     }
     return;
  }
  if(a[x_p+1][y_p]==0){
         pp.x = x_p+1;
         pp.y = y_p;
         pp.di++;
         way_direct.push_back(down);
         way_point.push_back(pp);
         number++;
         find_direct(x_p+1,y_p,ending_x,ending_y);
  }
  if(a[x_p][y_p+1]==0){
         pp.x = x_p;
         pp.y = y_p+1;
         pp.di++;
         way_direct.push_back(right);
         way_point.push_back(pp);

         number++;
         find_direct(x_p,y_p+1,ending_x,ending_y);

  }
  if(a[x_p-1][y_p]==0){   
         pp.x = x_p-1;
         pp.y = y_p;
         pp.di++;
         way_direct.push_back(up);
         way_point.push_back(pp);
         number++;
         find_direct(x_p-1,y_p,ending_x,ending_y);
  }
  if(a[x_p][y_p-1]==0){
         pp.x = x_p;
         pp.y = y_p-1;
         pp.di++;
         way_direct.push_back(left);
         way_point.push_back(pp);
         number++;
         find_direct(x_p,y_p-1,ending_x,ending_y);
  }
   if((x_p==ending_x&&ending_y==y_p)||re==1){
     re=1;
     return;
   }
  if(way_point[number].di<=1){
   way_point[number].di--;
   way_point.pop_back();
   way_direct.pop_back();
   number--;
   }
   way_point[number].di--;

}


void findway(int ending_x,int ending_y){
  point start0;
  x_num = 1;
  y_num = 1;
  start0.x = 1;
  start0.y = 1;
  way_point.push_back(start0);
  find_direct(1,1,ending_x,ending_y);

}





