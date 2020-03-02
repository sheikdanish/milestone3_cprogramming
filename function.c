//142895-Sheik Mohammed Danish V1.0


#include "header.h"
//
void read_det(mobile *ptr)
{
    for(int i=0;i<num;i++)
    {
        printf("Enter Model number:");
        scanf("%d",&(ptr+i)->model_no);
        printf("Enter Vendor:");
        scanf("%20s",&(ptr+i)->OEM);
        printf("Enter Display Size:");
        scanf("%f",&(ptr+i)->disp_size);
        printf("Enter Battery Capacity:");
        scanf("%d",&(ptr+i)->battery_cap);
        printf("Enter Camera Resolution:");
        scanf("%d",&(ptr+i)->cam_res);
        printf("Enter Price:");
        scanf("%d",&(ptr+i)->price);
        printf("Enter RAM:");
        scanf("%d",&(ptr+i)->RAM);
        printf("Enter ROM:");
        scanf("%d",&(ptr+i)->ROM);
    }
}

void disp_det(mobile *ptr)
{
    for(int i=0;i<num;i++)
    {
        printf("\nModel: %d , Vendor: %s , Display: %f cm, Battery: %d mAh, RAM: %d GB, ROM: %d GB, Camera: %d MP, Price: Rs. %d",(ptr+i)->model_no,(ptr+i)->OEM,(ptr+i)->disp_size,(ptr+i)->battery_cap,(ptr+i)->RAM,(ptr+i)->ROM,(ptr+i)->cam_res,(ptr+i)->price);
    }
}

void avg_price(mobile *ptr)
{
    int totalPrice = 0;
    for (int i=0; i<num; i++)
    {
        totalPrice = totalPrice + (ptr+i)->price;
    }
  float avg=totalPrice/num;
  printf("%f",avg);
}

void max_battery(mobile *ptr)
{
    int max_battery_cap=0;
    for(int i=0; i<num; i++)
    {
       if(max_battery_cap<(ptr+i)->battery_cap)
            max_battery_cap=(ptr+i)->battery_cap;
    }
    printf("Model(s) with maximum battery capacity of %d mAH: ",max_battery_cap);
    for(int i=0; i<num; i++)
    {
       if(max_battery_cap==(ptr+i)->battery_cap)
            printf("%d, ",(ptr+i)->model_no);
}
}

void max_camres(mobile *ptr,int ul,int ll)
{
    int max_camresvalue=0;
    for(int i=0; i<num; i++)
    {
       if((max_camresvalue<(ptr+i)->cam_res)&&(ul>(ptr+i)->price)&&(ll<(ptr+i)->price))
            max_camresvalue=(ptr+i)->cam_res;
    }
    printf("Model(s) with maximum camera resolution of %d MP: ",max_camresvalue);
    for(int i=0; i<num; i++)
    {
       if(max_camresvalue==(ptr+i)->cam_res)
            printf("%d, ",(ptr+i)->model_no);

    }
}

void num_models_price(mobile *ptr,char OEM_name[20],int ul,int ll)
{
    int model_num=0;
    printf("Model(s) of %s within price range Rs. %d - Rs. %d:",OEM_name,ll,ul);
    for(int i=0; i<num; i++)
    {
       if((strcmp(OEM_name,(ptr+i)->OEM)==1)&&(ul>(ptr+i)->price)&&(ll<(ptr+i)->price))
        {
            printf("%d, ",(ptr+i)->model_no);
            model_num+=1;
        }
    printf("\nNumber of models: %d",model_num);
    }
}

void num_models_minstorage(mobile *ptr)
{
    int min_storage=(ptr->ROM);
    for(int i=0; i<num; i++)
    {
       if(min_storage>(ptr+i)->ROM)
            min_storage=(ptr+i)->ROM;
    }
    int min_storage_count=0;
    for(int i=0;i<num;i++)
    {
        if((ptr->ROM)==min_storage)
        {
            printf("%d, ",(ptr+i)->model_no);
            min_storage_count+=1;
        }
    }
        printf("Number of models: %d",min_storage_count);
}


