						51��Ƭ��ָ���
     ���Ƿ�					ָ��˵��				 �ֽ��� ������

				�����ݴ�����ָ�

MOV		A��Rn			�Ĵ������͵��ۼ���			1	1
MOV		A��direct		ֱ�ӵ�ַ���͵��ۼ���			2	1
MOV		A��@Ri			�ۼ������͵��ⲿRAM(8 ��ַ)	1	1
MOV		A��#data			���������͵��ۼ���			2	1
MOV		Rn��A			�ۼ������͵��Ĵ���			1	1
MOV		Rn��direct		ֱ�ӵ�ַ���͵��Ĵ���			2	2
MOV		Rn��#data		�ۼ������͵�ֱ�ӵ�ַ			2	1
MOV		direct��Rn		�Ĵ������͵�ֱ�ӵ�ַ			2	1
MOV		direct��direct	ֱ�ӵ�ַ���͵�ֱ�ӵ�ַ		3	2
MOV		direct��A		�ۼ������͵�ֱ�ӵ�ַ			2	1
MOV		direct��@Ri		���RAM ���͵�ֱ�ӵ�ַ		2	2
MOV		direct��#data	���������͵�ֱ�ӵ�ַ			3	2
MOV		@Ri��A			ֱ�ӵ�ַ���͵�ֱ�ӵ�ַ		1	2
MOV		@Ri��direct		ֱ�ӵ�ַ���͵����RAM			2	1
MOV		@Ri��#data		���������͵����RAM			2	2
MOV		DPTR��#data16	16λ�������ص�����ָ��		3	1
MOVC	A��@A+DPTR		�����ֽڴ��͵��ۼ���			1	2
MOVC	A��@A+PC			�����ֽڴ��͵��ۼ���			1	2
MOVX	A��@Ri			�ⲿRAM(8 ��ַ)���͵��ۼ���	1	2
MOVX	A��@DPTR			�ⲿRAM(16 ��ַ)���͵��ۼ���	1	2
MOVX	@Ri��A			�ۼ������͵��ⲿRAM(8 ��ַ)	1	2
MOVX	@DPTR��A			�ۼ������͵��ⲿRAM(16 ��ַ)	1	2
PUSH	direct			ֱ�ӵ�ַѹ���ջ				2	2
POP		direct			ֱ�ӵ�ַ������ջ				2	2
XCH		A,Rn			�Ĵ������ۼ�������			1	1
XCH		A, direct		ֱ�ӵ�ַ���ۼ�������			2	1
XCH		A, @Ri			���RAM ���ۼ�������			1	1
XCHD	A, @Ri			���RAM ���ۼ���������4 λ�ֽ�	1	1

(����������ָ��)

INC		A				�ۼ�����1					1	1
INC		Rn				�Ĵ�����1					1	1
INC		direct			ֱ�ӵ�ַ��1					2	1
INC		@Ri				���RAM��1					1	1
INC		DPTR			����ָ���1					1	2
DEC		A				�ۼ�����1					1	1
DEC		Rn				�Ĵ�����1					1	1
DEC		direct			ֱ�ӵ�ַ��1					2	2
DEC		@Ri				���RAM ��1					1	1
MUL		AB				�ۼ�����B �Ĵ������			1	4
DIV		AB				�ۼ�������B �Ĵ���			1	4
DA		A				�ۼ���ʮ���Ƶ���				1	1
ADD		A,Rn			�Ĵ������ۼ������			1	1
ADD		A,direct		ֱ�ӵ�ַ���ۼ������			2	1
ADD		A,@Ri			���RAM ���ۼ������			1	1
ADD		A,#data			���������ۼ������			2	1
ADDC	A,Rn			�Ĵ������ۼ������(����λ)		1	1
ADDC	A,direct		ֱ�ӵ�ַ���ۼ������(����λ)	2	1
ADDC	A,@Ri			���RAM���ۼ������(����λ)	1	1
ADDC	A,#data			���������ۼ������(����λ)		2	1
SUBB	A,Rn			�ۼ�����ȥ�Ĵ���(����λ)		1	1
SUBB	A,direct		�ۼ�����ȥֱ�ӵ�ַ(����λ)		2	1
SUBB	A,@Ri			�ۼ�����ȥ���RAM(����λ)		1	1
SUBB	A,#data			�ۼ�����ȥ������(����λ)		2	1

(�߼�������ָ��)

ANL		A,Rn			�Ĵ������롱���ۼ���			1	1
ANL		A,direct		ֱ�ӵ�ַ���롱���ۼ���			2	1
ANL		A,@Ri			���RAM���롱���ۼ���			1	1
ANL		A,#data			���������롱���ۼ���			2	1
ANL		direct,A		�ۼ������롱��ֱ�ӵ�ַ			2	1
ANL		direct, #data	���������롱��ֱ�ӵ�ַ			3	2
ORL		A,Rn			�Ĵ������򡱵��ۼ���			1	2
ORL		A,direct		ֱ�ӵ�ַ���򡱵��ۼ���			2	1
ORL		A,@Ri			���RAM���򡱵��ۼ���			1	1
ORL		A,#data			���������򡱵��ۼ���			2	1
ORL		direct,A		�ۼ������򡱵�ֱ�ӵ�ַ			2	1
ORL		direct, #data	���������򡱵�ֱ�ӵ�ַ			3	1
XRL		A,Rn			�Ĵ�������򡱵��ۼ���			1	2
XRL		A,direct		ֱ�ӵ�ַ����򡱵��ۼ���		2	1
XRL		A,@Ri			���RAM����򡱵��ۼ���			1	1
XRL		A,#data			����������򡱵��ۼ���			2	1	
XRL		direct,A		�ۼ�������򡱵�ֱ�ӵ�ַ		2	1
XRL		direct, #data	����������򡱵�ֱ�ӵ�ַ		3	1
CLR		A				�ۼ�������					1	2
CPL		A				�ۼ�����					1	1
RL		A				�ۼ���ѭ������				1	1
RLC		A				����λ�ۼ���ѭ������			1	1
RR		A				�ۼ���ѭ������				1	1
RRC		A				����λ�ۼ���ѭ������			1	1
SWAP	A				�ۼ����ߡ���4 λ����			1	1