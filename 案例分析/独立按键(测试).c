/**************************************************************************************
ʵ���������س������K1~K8�������Զ�D1~D8С�ƶ�������
����˵���� 1.��Ƭ��-->LED&��ͨ��ģ��
		   J22-->J19
		   2.��Ƭ��-->��������ģ��
		   J20-->JP1	
ע�������������(�����������)																			  
***************************************************************************************/
#include "reg51.h"			 //���ļ��ж����˵�Ƭ����һЩ���⹦�ܼĴ���

#define uint unsigned int	 //�궨�������޷�����������
#define uchar unsigned char
//���ڱ�������ԭ�����������ں���ǰ��
uint i = 1;
sbit led1 = P0^0;	//����P0.0����led1
sbit led2 = P0^1;	//����P0.1����led2
sbit led3 = P0^2;	//����P0.2����led3
sbit led4 = P0^3;	//����P0.3����led4
sbit led5 = P0^4;	//����P0.4����led5
sbit led6 = P0^5;	//����P0.5����led6
sbit led7 = P0^6;	//����P0.6����led7
sbit led8 = P0^7;	//����P0.7����led8
sbit k1 = P1^0;		//����P1.0����k1
sbit k2 = P1^1;		//����P1.1����k2
sbit k3 = P1^2;		//����P1.2����k3
sbit k4 = P1^3;		//����P1.3����k4
sbit k5 = P1^4;		//����P1.4����k5
sbit k6 = P1^5;		//����P1.5����k6
sbit k7 = P1^6;		//����P1.6����k7
sbit k8 = P1^7;	    //����P1.7����k8
//��ʱ����
void delay(uint i){
	while(i--);	
}

void keypros(){
	while(1){
	switch(i){
		  case 1:
		  	if(k1 == 0){		  //��ⰴ��K1�Ƿ���	
			delay(1000);   //�������� �����Ӳ�һ���Լ10ms
			if(k1 == 0){	 //�ٴ��жϰ����Ƿ���
				led1 = ~led1;	  //led״̬ȡ��
			}
			while(!k1);	 //��ⰴ���Ƿ��ɿ�
		}
		  case 2:
		  	if(k2 == 0){		  
			delay(1000);  
			if(k2 == 0){	
				led2 = ~led2;	 
			}
			while(!k2);	 
		}
		  case 3:
		  	if(k3 == 0){		  
			delay(1000);   
			if(k3 == 0){	 
				led3 = ~led3;	  
			}
			while(!k3);	 
		}
		  case 4:
		  	if(k4 == 0){		 
			delay(1000);   
			if(k4 == 0){	 
				led4 = ~led4;	 
			}
			while(!k4);	
		}
		  case 5:
		  	if(k5 == 0){		  	
			delay(1000);   
			if(k5 == 0){	 
				led5 = ~led5;	 
			}
			while(!k5);	 
		}
		  case 6:
		 	 if(k6 == 0){		  
			delay(1000);   
			if(k6 == 0){	 
				led6 = ~led6;	  
			}
			while(!k6);	 
		}
		  case 7:
		  	if(k7 == 0){		
			delay(1000);   
			if(k7 == 0){	 
				led7 = ~led7;	  
			}
			while(!k7);	 
		}
		  case 8:
		  	if(k8 == 0){		 	
			delay(1000);   
			if(k8 == 0){	
				led8 = ~led8;	 
			}
			while(!k8);	 
		}		
	}
}
}

void main(){	
	led1 = 1;	//��ʼʹled1Ϊ�ߵ�ƽ���Ʋ���
	led2 = 1;	//��ʼʹled2Ϊ�ߵ�ƽ���Ʋ���
	led3 = 1;	//��ʼʹled3Ϊ�ߵ�ƽ���Ʋ���
	led4 = 1;	//��ʼʹled4Ϊ�ߵ�ƽ���Ʋ���
	led5 = 1;	//��ʼʹled5Ϊ�ߵ�ƽ���Ʋ���
	led6 = 1;	//��ʼʹled6Ϊ�ߵ�ƽ���Ʋ���
	led7 = 1;	//��ʼʹled7Ϊ�ߵ�ƽ���Ʋ���
	led8 = 1;	//��ʼʹled8Ϊ�ߵ�ƽ���Ʋ���
	while(1){		
		keypros();  //����������	
	}		
}
