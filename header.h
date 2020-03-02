//142895-Sheik Mohammed Danish V1.0


#ifndef HEADER_FILES
#define HEADER_FILES
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static const int num = 50;

typedef struct {
    int model_no;
    int battery_cap;
    int cam_res;
    int price;
    int RAM;
    int ROM;
    char OEM[20];
    float disp_size;
}mobile;

//function prototypes.
void read_det(mobile *ptr);

void disp_det(mobile *ptr);

void avg_price(mobile *ptr);

void max_battery(mobile *ptr);

void max_camres(mobile *ptr,int,int);

void num_models_price(mobile *ptr,char OEM[20],int,int);

void num_models_minstorage(mobile *ptr);

#endif // HEADER_FILES
