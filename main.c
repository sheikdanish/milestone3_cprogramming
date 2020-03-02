//142895-Sheik Mohammed Danish V1.0


#include "header.h"
int main()
{
    mobile *phone = calloc(num, sizeof(mobile));

    read_det(phone);

    char OEMname[20];
    int chk=1;
    int c;
    int upperlimit;
    int lowerlimit;
    while(chk==1)
    {
        printf("\n\n1-Display model details, 2-Average price, 3-Maximum Battery, 4-Maximum Camera Resolution, 5-Models of Vendor within price range, 6-Minimum Storage:  ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:{
                disp_det(phone);
                }break;
            case 2:{
                printf("Average price: Rs. ");
                avg_price(phone);
                }break;
            case 3:
                max_battery(phone);
                break;
            case 4:{
                printf("Enter upper limit:");
                scanf("%d",&upperlimit);
                printf("Enter lower limit:");
                scanf("%d",&lowerlimit);

                max_camres(phone,upperlimit,lowerlimit);
                }break;
            case 5:{
                printf("Enter OEM name:");
                scanf("%s",OEMname);
                printf("Enter upper limit:");
                scanf("%d",&upperlimit);
                printf("Enter lower limit:");
                scanf("%d",&lowerlimit);
                num_models_price(phone,OEMname,upperlimit,lowerlimit);
                }break;
            case 6:
                num_models_minstorage(phone);
                break;
            default:
                chk=0;
                break;
        }
    }
return 0;
}
