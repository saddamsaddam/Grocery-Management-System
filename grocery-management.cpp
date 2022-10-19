#include <stdio.h>
#include <stdlib.h>
#include<cstring>
using namespace std;
#include<iostream>
int n,type;
int chkresult;
char yn[50];
int loop=0;
int loopw=0;
void insertproduct();
void buy();
void nothing();
void display();
void update();
void ricef();
void oil();
void dal();
void ricelist( );
void ricelist(struct mainproduct mp );
int totalcal();
int riceamount[4]={0};
int oilamount[4]={0};
int dalamount[4]={0};
int ricesum[4]={0};
int oilsum[4]={0};
int dalsum[4]={0};
int total=0;

        struct productrice
        {
        string name[20]={"Aman Rice","Biroi  Rice (Half Fibre)","Biroi Rice (Full Fiber)","Deshi Polao Rice "};
        int priceperkg[20]={78,85,90,130};
        int stock[20]={1000,900,800,500};
        };
        struct productoil
        {
        string name[20]={"Extra Virgin Olive Oil","Mustard Oil","Virgin Coconut Oil","Vennar Oil"};
        int priceperkg[20]={1050,300,295,130};
        int stock[20]={50,40,40,50};
        };
        struct productdal
        {
        string name[20]={"Kheshari Dal","Booter Dal","Mashkalai Dal","Mosur Dal"};
        int priceperkg[20]={120,100,160,130};
        int stock[20]={200,200,200,400};
        };
        struct mainproduct
        {
        string mname[20]={"Rice","Oil","Dal"};

        struct productrice structrice;
        struct productoil structoil;
        struct productdal structdal;
        };

int main()
{

    printf("                                            Welcome to Grocery Management System \n");
pre:
    printf(" What do want to do ? \n");
    printf(" Buy ->> 0 \n");
    printf(" Nothing ->> 1 \n");
    printf(" Display product ->> 2 \n");
    printf(" Update ->> 3 \n");
    scanf("%d",&n);
    switch(n)
    {
    case 0:
        buy();
        break;
    case 1:
        nothing();
        break;
    case 2:
        display();
        break;
    case 3:
        update();
        break;
    default:
    {
        printf(" Sorry .Again Check List \n");
        goto pre;
    }
    }

    printf("...........................................Memo..................................................\n\n");

    ricelist();
    total=totalcal();
    printf(".................................................................................................\n");

    cout<<"                                                                         Total="<<total <<" (TK)                         \n\n";

    return 0;
}
void display()
{

struct mainproduct mp;
struct mainproduct mpoil;
struct mainproduct mpdal;
printf(" Product Name                       |      Price ( Kg/liter )  |       Stock(Kg/Liter) \n");
   for(int i=0;i<4;i++)
{
    if(i==0 )
    {
      cout<<" "<<mp.structrice.name[i]<<"                                      " << mp.structrice.priceperkg[i]<<"                        " << mp.structrice.stock[i]<<endl ;

    }
    else if(i==1 )
    {
        cout<<" "<<mp.structrice.name[i]<<"                       " << mp.structrice.priceperkg[i]<<"                        " <<mp.structrice.stock[i]<<endl ;
    }
    else if(i==2 )
    {
     cout<<" "<<mp.structrice.name[i]<<"                        " << mp.structrice.priceperkg[i]<<"                        " << mp.structrice.stock[i]<<endl ;
    }
    else if(i==3 ){
     cout<<" "<<mp.structrice.name[i]<<"                              " << mp.structrice.priceperkg[i]<<"                       " <<mp.structrice.stock[i]<<endl ;
    }


 }
//oil
 for(int i=0;i<4;i++)
{
    if(i==0 )
    {
      cout<<" "<<mpoil.structoil.name[i]<<"                         " << mpoil.structoil.priceperkg[i]<<"                      " <<  mpoil.structoil.stock[i]<<endl ;
    }
    else if(i==1 )
    {
        cout<<" "<<mpoil.structoil.name[i]<<"                                    " << mpoil.structoil.priceperkg[i]<<"                       " << mpoil.structoil.stock[i]<<endl ;
    }
    else if(i==2 )
    {
     cout<<" "<<mpoil.structoil.name[i]<<"                             " <<mpoil.structoil.priceperkg[i]<<"                       " << mpoil.structoil.stock[i]<<endl ;
    }
    else if(i==3){
     cout<<" "<<mpoil.structoil.name[i]<<"                                     " << mpoil.structoil.priceperkg[i]<<"                       " <<mpoil.structoil.stock[i]<<endl ;
    }


 }

 //dal
  for(int i=0;i<4;i++)
{
    if(i==0 )
    {
      cout<<" "<<mpdal.structdal.name[i]<<"                                   " << mpdal.structdal.priceperkg[i]<<"                       " << mpdal.structdal.stock[i]<<endl ;
    }
    else if(i==1 )
    {
        cout<<" "<<mpdal.structdal.name[i]<<"                                     " << mpdal.structdal.priceperkg[i]<<"                       " << mpdal.structdal.stock[i]<<endl ;
    }
    else if(i==2 )
    {
     cout<<" "<<mpdal.structoil.name[i]<<"                             " <<mpdal.structdal.priceperkg[i]<<"                       " <<mpdal.structdal.stock[i]<<endl ;
    }
    else if(i==3 ){
     cout<<" "<<mpdal.structoil.name[i]<<"                                     " << mpdal.structdal.priceperkg[i]<<"                       " <<mpdal.structdal.stock[i]<<endl<<endl<<endl ;
    }


 }

 printf(" Do you want to buy product ? \n");
    printf(" Yes ->> 0 \n");
    printf(" No ->> 1 \n");

    scanf("%d",&type);
    if(type==0)
    {
        buy();

    }
    else if(type==1)
    {
        nothing();

    }
    else
    {
        printf(" Sorry .Again Check List \n");
        //goto buyproduct;
    }



}
void  ricefupdate()
{
struct mainproduct mp;

ricelist(mp);
ricerepeat:
    // rice:
    loop=0;
    printf("\n\n\n");
    printf(" Which type of Rice want to update ? \n");
    printf(" Aman Rice ->> 0  \n");
    printf(" Biroi  Rice (Half Fibre) ->> 1 \n");
    printf(" Biroi Rice (Full Fiber) ->> 2 \n");
    printf(" Deshi Polao Rice  ->> 3 \n");

    scanf("%d",&n);
    if(n==0)
    {   ch0:
        printf(" How much Aman Rice want to update ? \n");
        scanf("%d",&n);
        mp.structrice.stock[0]=mp.structrice.stock[0]+n;
        ricelist(mp);

        printf(" Do you want to update another Rice ?  y/n\n");
        scanf("%s",&yn);

        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
               goto ricerepeat;
                //ricef();

            }
            else
            {
                printf(" Do you want to update another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        update();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir 0 . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else if(n==1)
    {
         ch1:
        printf(" How much Biroi  Rice (Half Fibre) want to update ? \n");
        scanf("%d",&n);
        mp.structrice.stock[1]=mp.structrice.stock[1]+n;
        ricelist(mp);
        printf(" Do you want to update another Rice ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
                goto ricerepeat;
                //ricef();

            }
            else
            {
                printf(" Do you want to update another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        update();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }



    }
    else if(n==2)
    {
        ch2:
        printf(" How much Biroi  Rice (Full Fibre) want to buy ? \n");
        scanf("%d",&n);
        mp.structrice.stock[2]=mp.structrice.stock[2]+n;
        ricelist(mp);
        printf(" Do you want to update another Rice ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
                goto ricerepeat;
                //ricef();

            }
            else
            {
                printf(" Do you want to update another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        update();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else if(n==3)
    {
        ch3:
        printf(" How much Deshi Polao Rice  want to update ? \n");
        scanf("%d",&n);
        mp.structrice.stock[3]=mp.structrice.stock[3]+n;
        ricelist(mp);
        printf(" Do you want to update another Rice ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {

                 goto ricerepeat; //             ricef();

            }
            else
            {
                printf(" Do you want to update another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        update();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else
    {
        printf(" Sorry .Again Check List \n\n\n");
        ricef();
    }


}
void oilupdate()
{


}
void dalupdate()
{


}
void update()
{
buyproduct:
    loopw=0;
    printf(" Which thing want to update ? \n");
    printf(" Rice ->> 0 \n");
    printf(" Oil ->> 1 \n");
    printf(" Dal ->> 2 \n");
    printf(" Nothing ->> 3 \n");

    scanf("%d",&type);
    if(type==0)
    {
        ricefupdate();

    }
    else if(type==1)
    {
        oilupdate();

    }
    else if(type==2)
    {
        dalupdate();

    }
    else if(type==3)
    {


    }
    else
    {
        printf(" Sorry .Again Check List \n");
        //goto buyproduct;
    }


}
int totalcal()
{
    int totalsum=0;
    for(int i=0;i<4;i++)
    {
        totalsum=totalsum+ricesum[i]+oilsum[i]+dalsum[i];

    }

    return totalsum;
}
void ricelist()
{
struct mainproduct mp;
struct mainproduct mpoil;
struct mainproduct mpdal;
printf(" Product Name                       |      Amount ( Kg/liter )  |       Price(TK) \n");
   for(int i=0;i<4;i++)
{
    if(i==0 && !riceamount[0]==0)
    {
      cout<<" "<<mp.structrice.name[i]<<"                                      " << riceamount[0]<<"                        " << mp.structrice.priceperkg[i]*riceamount[0]<<endl ;
        ricesum[0]=mp.structrice.priceperkg[i]*riceamount[0];
    }
    else if(i==1 && !riceamount[1]==0)
    {
        cout<<" "<<mp.structrice.name[i]<<"                       " << riceamount[1]<<"                        " << mp.structrice.priceperkg[i]*riceamount[1]<<endl ;
    ricesum[1]=mp.structrice.priceperkg[i]*riceamount[1];
    }
    else if(i==2 && !riceamount[2]==0)
    {
     cout<<" "<<mp.structrice.name[i]<<"                        " << riceamount[2]<<"                        " << mp.structrice.priceperkg[i]*riceamount[2]<<endl ;
    ricesum[2]=mp.structrice.priceperkg[i]*riceamount[2];
    }
    else if(i==3 && !riceamount[3]==0){
     cout<<" "<<mp.structrice.name[i]<<"                              " << riceamount[3]<<"                       " << mp.structrice.priceperkg[i]*riceamount[3]<<endl ;
    ricesum[3]=mp.structrice.priceperkg[i]*riceamount[3];
    }


 }
//oil
 for(int i=0;i<4;i++)
{
    if(i==0 && !oilamount[0]==0)
    {
      cout<<" "<<mpoil.structoil.name[i]<<"                         " << oilamount[0]<<"                      " << mpoil.structoil.priceperkg[i]*oilamount[0]<<endl ;
    oilsum[0]=mpoil.structoil.priceperkg[i]*oilamount[0];
    }
    else if(i==1 && !oilamount[1]==0)
    {
        cout<<" "<<mpoil.structoil.name[i]<<"                                    " << oilamount[1]<<"                       " << mpoil.structoil.priceperkg[i]*oilamount[1]<<endl ;
        oilsum[1]=mpoil.structoil.priceperkg[i]*oilamount[1];
    }
    else if(i==2 && !oilamount[2]==0)
    {
     cout<<" "<<mpoil.structoil.name[i]<<"                             " << oilamount[2]<<"                       " << mpoil.structoil.priceperkg[i]*oilamount[2]<<endl ;
        oilsum[2]=mpoil.structoil.priceperkg[i]*oilamount[2];
    }
    else if(i==3 && !oilamount[3]==0){
     cout<<" "<<mpoil.structoil.name[i]<<"                                     " << oilamount[3]<<"                       " << mpoil.structoil.priceperkg[i]*oilamount[3]<<endl ;
    oilsum[3]=mpoil.structoil.priceperkg[i]*oilamount[3];
    }


 }

 //dal
  for(int i=0;i<4;i++)
{
    if(i==0  && !dalamount[0]==0)
    {
      cout<<" "<<mpdal.structdal.name[i]<<"                                   " << dalamount[0]<<"                       " << mpdal.structdal.priceperkg[i]*dalamount[0]<<endl ;
     dalsum[0]=mpdal.structdal.priceperkg[i]*dalamount[0];
    }
    else if(i==1 && !dalamount[1]==0)
    {
        cout<<" "<<mpdal.structdal.name[i]<<"                                     " << dalamount[1]<<"                       " << mpdal.structdal.priceperkg[i]*dalamount[1]<<endl ;
        dalsum[1]=mpdal.structdal.priceperkg[i]*dalamount[1];
    }
    else if(i==2  && !dalamount[2]==0)
    {
     cout<<" "<<mpdal.structoil.name[i]<<"                             " << dalamount[2]<<"                       " << mpdal.structdal.priceperkg[i]*dalamount[2]<<endl ;
    dalsum[2]=mpdal.structdal.priceperkg[i]*dalamount[2];
    }
    else if(i==3 && !dalamount[3]==0){
     cout<<" "<<mpdal.structoil.name[i]<<"                                     " << dalamount[3]<<"                       " << mpdal.structdal.priceperkg[i]*dalamount[3]<<endl ;
   dalsum[3]=mpdal.structdal.priceperkg[i]*dalamount[3];
    }


 }

}

void buy()
{
buyproduct:
    loopw=0;
    printf(" Which thing want to buy ? \n");
    printf(" Rice ->> 0 \n");
    printf(" Oil ->> 1 \n");
    printf(" Dal ->> 2 \n");
    printf(" Nothing ->> 3 \n");

    scanf("%d",&type);
    if(type==0)
    {
        ricef();

    }
    else if(type==1)
    {
        oil();

    }
    else if(type==2)
    {
        dal();

    }
    else if(type==3)
    {


    }
    else
    {
        printf(" Sorry .Again Check List \n");
        //goto buyproduct;
    }


}
int checkvalid(int n,int stk)
{
   if(n<stk)
        return 1;
        else
            return 0;


}
void ricelist(struct mainproduct mp)
{
printf("                            Rice List:\n\n");
printf(" Rice Name                          |      Price per Kg       |       Stock(kg) \n");
   for(int i=0;i<4;i++)
{
    if(i==0)
    {
      cout<<" "<<mp.structrice.name[i]<<"                                   " << mp.structrice.priceperkg[i]<<"                       " << mp.structrice.stock[i]<<endl ;
    }
    else if(i==1)
    {
        cout<<" "<<mp.structrice.name[i]<<"                    " << mp.structrice.priceperkg[i]<<"                       " << mp.structrice.stock[i]<<endl ;

    }
    else if(i==2)
    {
     cout<<" "<<mp.structrice.name[i]<<"                     " << mp.structrice.priceperkg[i]<<"                       " << mp.structrice.stock[i]<<endl ;

    }
    else{
     cout<<" "<<mp.structrice.name[i]<<"                           " << mp.structrice.priceperkg[i]<<"                      " << mp.structrice.stock[i]<<endl ;
    }


 }
}
void oillist(struct mainproduct mpoil)
{
printf("                            Oil  List:\n\n");
printf(" Oil  Name                          |      Price per liter       |       Stock(liter) \n");
   for(int i=0;i<4;i++)
{
    if(i==0)
    {
      cout<<" "<<mpoil.structoil.name[i]<<"                         " << mpoil.structoil.priceperkg[i]<<"                      " << mpoil.structoil.stock[i]<<endl ;
    }
    else if(i==1)
    {
        cout<<" "<<mpoil.structoil.name[i]<<"                                    " << mpoil.structoil.priceperkg[i]<<"                       " << mpoil.structoil.stock[i]<<endl ;

    }
    else if(i==2)
    {
     cout<<" "<<mpoil.structoil.name[i]<<"                             " << mpoil.structoil.priceperkg[i]<<"                       " << mpoil.structoil.stock[i]<<endl ;

    }
    else{
     cout<<" "<<mpoil.structoil.name[i]<<"                                     " << mpoil.structoil.priceperkg[i]<<"                       " << mpoil.structoil.stock[i]<<endl ;
    }


 }

}

void dallist(struct mainproduct mpdal)
{
printf("                            Dal   List:\n\n");
printf(" Dal  Name                          |      Price per liter       |       Stock(kg) \n");
   for(int i=0;i<4;i++)
{
    if(i==0)
    {
      cout<<" "<<mpdal.structdal.name[i]<<"                                   " << mpdal.structdal.priceperkg[i]<<"                       " << mpdal.structdal.stock[i]<<endl ;
    }
    else if(i==1)
    {
        cout<<" "<<mpdal.structdal.name[i]<<"                                     " << mpdal.structdal.priceperkg[i]<<"                       " << mpdal.structdal.stock[i]<<endl ;

    }
    else if(i==2)
    {
     cout<<" "<<mpdal.structoil.name[i]<<"                             " << mpdal.structoil.priceperkg[i]<<"                       " << mpdal.structdal.stock[i]<<endl ;

    }
    else{
     cout<<" "<<mpdal.structoil.name[i]<<"                                     " << mpdal.structoil.priceperkg[i]<<"                       " << mpdal.structdal.stock[i]<<endl ;
    }


 }

}

void ricef()
{
struct mainproduct mp;

ricelist(mp);
ricerepeat:
    // rice:
    loop=0;
    printf("\n\n\n");
    printf(" Which type of Rice want to buy ? \n");
    printf(" Aman Rice ->> 0  \n");
    printf(" Biroi  Rice (Half Fibre) ->> 1 \n");
    printf(" Biroi Rice (Full Fiber) ->> 2 \n");
    printf(" Deshi Polao Rice  ->> 3 \n");

    scanf("%d",&n);
    if(n==0)
    {   ch0:
        printf(" How much Aman Rice want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mp.structrice.stock[0]);
        if(chkresult==1)
        {
        riceamount[0]=riceamount[0]+n;
        printf(" Total Price is = %d\n\n",mp.structrice.priceperkg[0]*n);
        mp.structrice.stock[0]=mp.structrice.stock[0]-n;
        ricelist(mp);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mp.structrice.stock[0]<<endl<<endl<<endl;
            goto ch0;

        }

        printf(" Do you want to buy another Rice ?  y/n\n");
        scanf("%s",&yn);

        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
               goto ricerepeat;
                //ricef();

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir 0 . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else if(n==1)
    {
         ch1:
        printf(" How much Biroi  Rice (Half Fibre) want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mp.structrice.stock[1]);
        if(chkresult==1)
        {
            riceamount[1]=riceamount[1]+n;
        printf(" Total Price is = %d\n\n",mp.structrice.priceperkg[1]*n);
        mp.structrice.stock[1]=mp.structrice.stock[1]-n;
        ricelist(mp);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mp.structrice.stock[1]<<endl<<endl<<endl;
            goto ch1;

        }

        printf(" Do you want to buy another Rice ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
                goto ricerepeat;
                //ricef();

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }



    }
    else if(n==2)
    {
        ch2:
        printf(" How much Biroi  Rice (Full Fibre) want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mp.structrice.stock[2]);
        if(chkresult==1)
        {
            riceamount[2]=riceamount[2]+n;
        printf(" Total Price is = %d\n\n",mp.structrice.priceperkg[2]*n);
        mp.structrice.stock[2]=mp.structrice.stock[2]-n;
        ricelist(mp);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mp.structrice.stock[2]<<endl<<endl<<endl;
            goto ch2;

        }

        printf(" Do you want to buy another Rice ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
                goto ricerepeat;
                //ricef();

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else if(n==3)
    {
        ch3:
        printf(" How much Deshi Polao Rice  want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mp.structrice.stock[3]);
        if(chkresult==1)
        {
            riceamount[3]=riceamount[3]+n;
        printf(" Total Price is = %d\n\n",mp.structrice.priceperkg[3]*n);
        mp.structrice.stock[3]=mp.structrice.stock[3]-n;
        ricelist(mp);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mp.structrice.stock[3]<<endl<<endl<<endl;
            goto ch3;

        }


        printf(" Do you want to buy another Rice ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {

                 goto ricerepeat; //             ricef();

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else
    {
        printf(" Sorry .Again Check List \n\n\n");
        ricef();
    }

}
void oil()
{
    struct mainproduct mpoil;

    oillist(mpoil);
    oilrepeat:
    // rice:
    loop=0;
    printf("\n\n\n");
    printf(" Which type of Oil want to buy ? \n");
    printf(" Extra Virgin Olive Oil ->> 0  \n");
    printf(" Mustard Oil  ->> 1 \n");
    printf(" Virgin Coconut Oil  ->> 2 \n");
    printf(" Vennar Oil ->> 3 \n");

    scanf("%d",&n);
    if(n==0)
    {

        cho0:
        printf(" How much Virgin Olive Oil want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mpoil.structoil.stock[0]);
        if(chkresult==1)
        {
            oilamount[0]=oilamount[0]+n;
        printf(" Total Price is = %d\n\n",mpoil.structoil.priceperkg[0]*n);
        mpoil.structoil.stock[0]=mpoil.structoil.stock[0]-n;
        oillist(mpoil);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mpoil.structoil.stock[0]<<endl<<endl<<endl;
            goto cho0;

        }

        printf(" Do you want to buy another Oil ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
                //printf("come after 0");
               // oil();
               goto oilrepeat;

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir 0 . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else if(n==1)
    {
        cho1:
        printf(" How much Mustard Oil want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mpoil.structoil.stock[1]);
        if(chkresult==1)
        {
            oilamount[1]=oilamount[1]+n;
        printf(" Total Price is = %d\n\n",mpoil.structoil.priceperkg[1]*n);
        mpoil.structoil.stock[1]=mpoil.structoil.stock[1]-n;
        oillist(mpoil);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mpoil.structoil.stock[1]<<endl<<endl<<endl;
            goto cho1;

        }


        printf(" Do you want to buy another Oil ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
                goto oilrepeat;
               // oil();

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }



    }
    else if(n==2)
    {

        cho2:
        printf(" How much Virgin Coconut Oil want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mpoil.structoil.stock[2]);
        if(chkresult==1)
        {
            oilamount[2]=oilamount[2]+n;
        printf(" Total Price is = %d\n\n",mpoil.structoil.priceperkg[2]*n);
        mpoil.structoil.stock[2]=mpoil.structoil.stock[2]-n;
        oillist(mpoil);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mpoil.structoil.stock[2]<<endl<<endl<<endl;
            goto cho1;

        }


        printf(" Do you want to buy another Oil ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {

                goto oilrepeat;

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
     else if(n==3)
    {

        cho3:
        printf(" How much Vennar Oil want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mpoil.structoil.stock[3]);
        if(chkresult==1)
        {
            oilamount[3]=oilamount[3]+n;
        printf(" Total Price is = %d\n\n",mpoil.structoil.priceperkg[3]*n);
        mpoil.structoil.stock[3]=mpoil.structoil.stock[3]-n;
        oillist(mpoil);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mpoil.structoil.stock[3]<<endl<<endl<<endl;
            goto cho1;

        }


        printf(" Do you want to buy another Oil ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {

                goto oilrepeat;

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }

    else
    {
        printf(" Sorry .Again Check List \n\n\n");
        oil();
    }


}
void dal()
{

     struct mainproduct mpdal;

    dallist(mpdal);
    dalrepeat:
    // rice:
    loop=0;
    printf("\n\n\n");
    printf(" Which type of Rice want to buy ? \n");
    printf(" Kheshari Dal(120 per kg ) ->> 0  \n");
    printf(" Booter Dal  (100 per kg ) ->> 1 \n");
    printf(" Mashkalai Dal(160 per kg )  ->> 2 \n");
    printf(" Mosur Dal(130 per kg )  ->> 3 \n");

    scanf("%d",&n);
    if(n==0)
    {
        chd0:
        printf(" How much Kheshari Dal want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mpdal.structdal.stock[0]);
        if(chkresult==1)
        {
            dalamount[0]=dalamount[0]+n;
        printf(" Total Price is = %d\n\n",mpdal.structdal.priceperkg[0]*n);
        mpdal.structdal.stock[0]=mpdal.structdal.stock[0]-n;
        dallist(mpdal);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mpdal.structdal.stock[0]<<endl<<endl<<endl;
            goto chd0;

        }

        printf(" Do you want to buy another Dal ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
              goto  dalrepeat;
               // dal();

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir 0 . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else if(n==1)
    {

        chd1:
        printf(" How much Booter Dal want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mpdal.structdal.stock[1]);
        if(chkresult==1)
        {
            dalamount[1]=dalamount[1]+n;
        printf(" Total Price is = %d\n\n",mpdal.structdal.priceperkg[1]*n);
        mpdal.structdal.stock[1]=mpdal.structdal.stock[1]-n;
        dallist(mpdal);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mpdal.structdal.stock[1]<<endl<<endl<<endl;
            goto chd1;

        }


        printf(" Do you want to buy another Dal ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
                goto dalrepeat;
               // dal();

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }



    }
    else if(n==2)
    {

        chd2:
        printf(" How much Mashkalai Dal want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mpdal.structdal.stock[2]);
        if(chkresult==1)
        {
            dalamount[2]=dalamount[2]+n;
        printf(" Total Price is = %d\n\n",mpdal.structdal.priceperkg[2]*n);
        mpdal.structdal.stock[2]=mpdal.structdal.stock[2]-n;
        dallist(mpdal);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mpdal.structdal.stock[2]<<endl<<endl<<endl;
            goto chd2;

        }


        printf(" Do you want to buy another Dal ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {

               goto dalrepeat;

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else if(n==3)
    {
       chd3:
        printf(" How much Mosur Dal want to buy ? \n");
        scanf("%d",&n);
        chkresult= checkvalid(n,mpdal.structdal.stock[3]);
        if(chkresult==1)
        {
            dalamount[3]=dalamount[3]+n;
        printf(" Total Price is = %d\n\n",mpdal.structdal.priceperkg[3]*n);
        mpdal.structdal.stock[3]=mpdal.structdal.stock[3]-n;
        dallist(mpdal);
        printf(" Thank you Sir for buying our Product\n\n\n");
        }
        else
        {
            cout<<" Sorry stock are limited: "<<mpdal.structdal.stock[3]<<endl<<endl<<endl;
            goto chd3;

        }


        printf(" Do you want to buy another Dal ?  y/n\n");
        scanf("%s",&yn);


        while(loop<1)
        {
            loop++;
            if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
            {
                goto dalrepeat;
                //dal();

            }
            else
            {
                printf(" Do you want to buy another Product ?  y/n\n");
                scanf("%s",&yn);

                while(loopw<1)
                {
                    if(strcmp(yn,"y")==0 ||strcmp(yn,"Y")==0)
                    {
                        buy();

                    }
                    else
                    {
                        printf(" \n\nThank you Sir . Come again\n\n\n");
                    }
                    loopw++;
                }
                loop++;
            }


        }

    }
    else
    {
        printf(" Sorry .Again Check List \n\n\n");
        dal();
    }

}
void nothing()
{
    printf(" Thank you Sir . Come again\n\n\n");
    // tel dull cal

}



