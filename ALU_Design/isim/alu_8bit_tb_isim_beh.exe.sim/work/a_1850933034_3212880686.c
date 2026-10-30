/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Function sgn ended without a return statement";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;
static const char *ng4 = "/home/ise/ALU_Design/alu_8bit_tb.vhd";

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);


int work_a_1850933034_3212880686_sub_387535118544912056_3057020925(char *t1, int t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;
    int t7;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 >= 128);
    if (t6 != 0)
        goto LAB2;

LAB4:    t0 = t2;

LAB1:    return t0;
LAB2:    t7 = (t2 - 256);
    t0 = t7;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

void work_a_1850933034_3212880686_sub_469608477212786267_134673997(char *t0, char *t1, int t2, int t3, int t4)
{
    char t6[16];
    char t10[16];
    char t31[16];
    char t32[16];
    char t54[16];
    char t55[16];
    char t56[16];
    char t60[16];
    char t65[16];
    char t67[16];
    char t70[16];
    char t74[16];
    char t79[16];
    char t81[16];
    char t84[16];
    char t90[16];
    char t95[16];
    char t97[16];
    char t100[16];
    char t106[16];
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int64 t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    int t26;
    unsigned char t27;
    int t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    unsigned char t37;
    unsigned char t38;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    unsigned char t42;
    unsigned char t43;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    int t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    int t51;
    int t52;
    char *t53;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t64;
    char *t66;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t78;
    char *t80;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t91;
    char *t92;
    char *t94;
    char *t96;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    int t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t2;
    t8 = (t6 + 8U);
    *((int *)t8) = t3;
    t9 = (t6 + 12U);
    *((int *)t9) = t4;
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, t3, 8);
    t12 = (t0 + 4528);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 6840U);
    t18 = (t17 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    memcpy(t16, t11, t19);
    xsi_driver_first_trans_fast(t12);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, t4, 8);
    t12 = (t0 + 4592);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 6840U);
    t18 = (t17 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    memcpy(t16, t11, t19);
    xsi_driver_first_trans_fast(t12);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, t2, 3);
    t12 = (t0 + 4656);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 6856U);
    t18 = (t17 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    memcpy(t16, t11, t19);
    xsi_driver_first_trans_fast(t12);
    t20 = (10 * 1000LL);
    xsi_process_wait(t1, t20);

LAB5:    t11 = (t1 + 88U);
    t12 = *((char **)t11);
    t13 = (t12 + 1888U);
    *((unsigned int *)t13) = 1U;
    t14 = (t1 + 88U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    getcontext(t16);
    t17 = (t1 + 88U);
    t18 = *((char **)t17);
    t21 = (t18 + 1888U);
    t19 = *((unsigned int *)t21);
    if (t19 == 1)
        goto LAB6;

LAB7:    t22 = (t1 + 88U);
    t23 = *((char **)t22);
    t24 = (t23 + 1888U);
    *((unsigned int *)t24) = 3U;

LAB3:
LAB4:
LAB2:    t11 = (t0 + 2568U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((unsigned char *)t11) = (unsigned char)2;
    t11 = (t0 + 2688U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((unsigned char *)t11) = (unsigned char)2;
    if (t2 == 0)
        goto LAB9;

LAB17:    if (t2 == 1)
        goto LAB10;

LAB18:    if (t2 == 2)
        goto LAB11;

LAB19:    if (t2 == 3)
        goto LAB12;

LAB20:    if (t2 == 4)
        goto LAB13;

LAB21:    if (t2 == 5)
        goto LAB14;

LAB22:    if (t2 == 6)
        goto LAB15;

LAB23:
LAB16:    t25 = (t3 - 1);
    t26 = (t25 + 256);
    t28 = xsi_vhdl_mod(t26, 256);
    t11 = (t0 + 2448U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t28;
    t27 = (t3 >= 1);
    if (t27 != 0)
        goto LAB49;

LAB51:
LAB50:    t25 = work_a_1850933034_3212880686_sub_387535118544912056_3057020925(t0, t3);
    t26 = (t25 - 1);
    t28 = (-(128));
    t27 = (t26 < t28);
    if (t27 != 0)
        goto LAB52;

LAB54:
LAB53:
LAB8:    t11 = (t0 + 1352U);
    t12 = *((char **)t11);
    t11 = (t0 + 6840U);
    t25 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t12, t11);
    t13 = (t0 + 2448U);
    t14 = *((char **)t13);
    t26 = *((int *)t14);
    t34 = (t25 != t26);
    if (t34 == 1)
        goto LAB67;

LAB68:    t13 = (t0 + 1832U);
    t15 = *((char **)t13);
    t35 = *((unsigned char *)t15);
    t13 = (t0 + 2568U);
    t16 = *((char **)t13);
    t36 = *((unsigned char *)t16);
    t37 = (t35 != t36);
    t33 = t37;

LAB69:    if (t33 == 1)
        goto LAB64;

LAB65:    t13 = (t0 + 2152U);
    t17 = *((char **)t13);
    t38 = *((unsigned char *)t17);
    t13 = (t0 + 2688U);
    t18 = *((char **)t13);
    t39 = *((unsigned char *)t18);
    t40 = (t38 != t39);
    t30 = t40;

LAB66:    if (t30 == 1)
        goto LAB61;

LAB62:    t13 = (t0 + 1672U);
    t21 = *((char **)t13);
    t41 = *((unsigned char *)t21);
    t42 = (t41 == (unsigned char)3);
    t13 = (t0 + 2448U);
    t22 = *((char **)t13);
    t28 = *((int *)t22);
    t43 = (t28 == 0);
    t44 = (t42 != t43);
    t29 = t44;

LAB63:    if (t29 == 1)
        goto LAB58;

LAB59:    t13 = (t0 + 1992U);
    t23 = *((char **)t13);
    t45 = *((unsigned char *)t23);
    t46 = (t45 == (unsigned char)3);
    t13 = (t0 + 2448U);
    t24 = *((char **)t13);
    t47 = *((int *)t24);
    t48 = (t47 >= 128);
    t49 = (t46 != t48);
    t27 = t49;

LAB60:    if (t27 != 0)
        goto LAB55;

LAB57:
LAB56:
LAB1:    return;
LAB6:    xsi_saveStackAndSuspend(t1);
    goto LAB7;

LAB9:    t25 = (t3 + t4);
    t26 = xsi_vhdl_mod(t25, 256);
    t11 = (t0 + 2448U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t26;
    t25 = (t3 + t4);
    t27 = (t25 > 255);
    if (t27 != 0)
        goto LAB25;

LAB27:
LAB26:    t25 = work_a_1850933034_3212880686_sub_387535118544912056_3057020925(t0, t3);
    t26 = work_a_1850933034_3212880686_sub_387535118544912056_3057020925(t0, t4);
    t28 = (t25 + t26);
    t11 = (t0 + 2808U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t28;
    t11 = (t0 + 2808U);
    t12 = *((char **)t11);
    t25 = *((int *)t12);
    t29 = (t25 > 127);
    if (t29 == 1)
        goto LAB31;

LAB32:    t11 = (t0 + 2808U);
    t13 = *((char **)t11);
    t26 = *((int *)t13);
    t28 = (-(128));
    t30 = (t26 < t28);
    t27 = t30;

LAB33:    if (t27 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB8;

LAB10:    t25 = (t3 - t4);
    t26 = (t25 + 256);
    t28 = xsi_vhdl_mod(t26, 256);
    t11 = (t0 + 2448U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t28;
    t27 = (t3 >= t4);
    if (t27 != 0)
        goto LAB34;

LAB36:
LAB35:    t25 = work_a_1850933034_3212880686_sub_387535118544912056_3057020925(t0, t3);
    t26 = work_a_1850933034_3212880686_sub_387535118544912056_3057020925(t0, t4);
    t28 = (t25 - t26);
    t11 = (t0 + 2808U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t28;
    t11 = (t0 + 2808U);
    t12 = *((char **)t11);
    t25 = *((int *)t12);
    t29 = (t25 > 127);
    if (t29 == 1)
        goto LAB40;

LAB41:    t11 = (t0 + 2808U);
    t13 = *((char **)t11);
    t26 = *((int *)t13);
    t28 = (-(128));
    t30 = (t26 < t28);
    t27 = t30;

LAB42:    if (t27 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB8;

LAB11:    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t31, t3, 8);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, t4, 8);
    t13 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t10, t11, t31, t12, t32);
    t25 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t13, t10);
    t14 = (t0 + 2448U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t25;
    goto LAB8;

LAB12:    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t31, t3, 8);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, t4, 8);
    t13 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t10, t11, t31, t12, t32);
    t25 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t13, t10);
    t14 = (t0 + 2448U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t25;
    goto LAB8;

LAB13:    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t31, t3, 8);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, t4, 8);
    t13 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t10, t11, t31, t12, t32);
    t25 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t13, t10);
    t14 = (t0 + 2448U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t25;
    goto LAB8;

LAB14:    t25 = (255 - t3);
    t11 = (t0 + 2448U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t25;
    goto LAB8;

LAB15:    t25 = (t3 + 1);
    t26 = xsi_vhdl_mod(t25, 256);
    t11 = (t0 + 2448U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t26;
    t27 = (t3 == 255);
    if (t27 != 0)
        goto LAB43;

LAB45:
LAB44:    t25 = work_a_1850933034_3212880686_sub_387535118544912056_3057020925(t0, t3);
    t26 = (t25 + 1);
    t27 = (t26 > 127);
    if (t27 != 0)
        goto LAB46;

LAB48:
LAB47:    goto LAB8;

LAB24:;
LAB25:    t11 = (t0 + 2568U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((unsigned char *)t11) = (unsigned char)3;
    goto LAB26;

LAB28:    t11 = (t0 + 2688U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    *((unsigned char *)t11) = (unsigned char)3;
    goto LAB29;

LAB31:    t27 = (unsigned char)1;
    goto LAB33;

LAB34:    t11 = (t0 + 2568U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((unsigned char *)t11) = (unsigned char)3;
    goto LAB35;

LAB37:    t11 = (t0 + 2688U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    *((unsigned char *)t11) = (unsigned char)3;
    goto LAB38;

LAB40:    t27 = (unsigned char)1;
    goto LAB42;

LAB43:    t11 = (t0 + 2568U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((unsigned char *)t11) = (unsigned char)3;
    goto LAB44;

LAB46:    t11 = (t0 + 2688U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((unsigned char *)t11) = (unsigned char)3;
    goto LAB47;

LAB49:    t11 = (t0 + 2568U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((unsigned char *)t11) = (unsigned char)3;
    goto LAB50;

LAB52:    t11 = (t0 + 2688U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((unsigned char *)t11) = (unsigned char)3;
    goto LAB53;

LAB55:    t13 = (t0 + 2928U);
    t50 = *((char **)t13);
    t51 = *((int *)t50);
    t52 = (t51 + 1);
    t13 = (t0 + 2928U);
    t53 = *((char **)t13);
    t13 = (t53 + 0);
    *((int *)t13) = t52;
    t11 = (t0 + 6936);
    t13 = ((STD_STANDARD) + 384);
    t14 = xsi_int_to_mem(t2);
    t15 = xsi_string_variable_get_image(t10, t13, t14);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t32 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = 1;
    t21 = (t18 + 4U);
    *((int *)t21) = 9;
    t21 = (t18 + 8U);
    *((int *)t21) = 1;
    t25 = (9 - 1);
    t19 = (t25 * 1);
    t19 = (t19 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t19;
    t16 = xsi_base_array_concat(t16, t31, t17, (char)97, t11, t32, (char)97, t15, t10, (char)101);
    t21 = (t0 + 6945);
    t24 = ((STD_STANDARD) + 984);
    t50 = (t55 + 0U);
    t53 = (t50 + 0U);
    *((int *)t53) = 1;
    t53 = (t50 + 4U);
    *((int *)t53) = 3;
    t53 = (t50 + 8U);
    *((int *)t53) = 1;
    t26 = (3 - 1);
    t19 = (t26 * 1);
    t19 = (t19 + 1);
    t53 = (t50 + 12U);
    *((unsigned int *)t53) = t19;
    t23 = xsi_base_array_concat(t23, t54, t24, (char)97, t16, t31, (char)97, t21, t55, (char)101);
    t53 = ((STD_STANDARD) + 384);
    t57 = xsi_int_to_mem(t3);
    t58 = xsi_string_variable_get_image(t56, t53, t57);
    t61 = ((STD_STANDARD) + 984);
    t59 = xsi_base_array_concat(t59, t60, t61, (char)97, t23, t54, (char)97, t58, t56, (char)101);
    t62 = (t0 + 6948);
    t66 = ((STD_STANDARD) + 984);
    t68 = (t67 + 0U);
    t69 = (t68 + 0U);
    *((int *)t69) = 1;
    t69 = (t68 + 4U);
    *((int *)t69) = 3;
    t69 = (t68 + 8U);
    *((int *)t69) = 1;
    t28 = (3 - 1);
    t19 = (t28 * 1);
    t19 = (t19 + 1);
    t69 = (t68 + 12U);
    *((unsigned int *)t69) = t19;
    t64 = xsi_base_array_concat(t64, t65, t66, (char)97, t59, t60, (char)97, t62, t67, (char)101);
    t69 = ((STD_STANDARD) + 384);
    t71 = xsi_int_to_mem(t4);
    t72 = xsi_string_variable_get_image(t70, t69, t71);
    t75 = ((STD_STANDARD) + 984);
    t73 = xsi_base_array_concat(t73, t74, t75, (char)97, t64, t65, (char)97, t72, t70, (char)101);
    t76 = (t0 + 6951);
    t80 = ((STD_STANDARD) + 984);
    t82 = (t81 + 0U);
    t83 = (t82 + 0U);
    *((int *)t83) = 1;
    t83 = (t82 + 4U);
    *((int *)t83) = 5;
    t83 = (t82 + 8U);
    *((int *)t83) = 1;
    t47 = (5 - 1);
    t19 = (t47 * 1);
    t19 = (t19 + 1);
    t83 = (t82 + 12U);
    *((unsigned int *)t83) = t19;
    t78 = xsi_base_array_concat(t78, t79, t80, (char)97, t73, t74, (char)97, t76, t81, (char)101);
    t83 = ((STD_STANDARD) + 384);
    t85 = (t0 + 1352U);
    t86 = *((char **)t85);
    t85 = (t0 + 6840U);
    t51 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t86, t85);
    t87 = xsi_int_to_mem(t51);
    t88 = xsi_string_variable_get_image(t84, t83, t87);
    t91 = ((STD_STANDARD) + 984);
    t89 = xsi_base_array_concat(t89, t90, t91, (char)97, t78, t79, (char)97, t88, t84, (char)101);
    t92 = (t0 + 6956);
    t96 = ((STD_STANDARD) + 984);
    t98 = (t97 + 0U);
    t99 = (t98 + 0U);
    *((int *)t99) = 1;
    t99 = (t98 + 4U);
    *((int *)t99) = 5;
    t99 = (t98 + 8U);
    *((int *)t99) = 1;
    t52 = (5 - 1);
    t19 = (t52 * 1);
    t19 = (t19 + 1);
    t99 = (t98 + 12U);
    *((unsigned int *)t99) = t19;
    t94 = xsi_base_array_concat(t94, t95, t96, (char)97, t89, t90, (char)97, t92, t97, (char)101);
    t99 = ((STD_STANDARD) + 384);
    t101 = (t0 + 2448U);
    t102 = *((char **)t101);
    t103 = *((int *)t102);
    t101 = xsi_int_to_mem(t103);
    t104 = xsi_string_variable_get_image(t100, t99, t101);
    t107 = ((STD_STANDARD) + 984);
    t105 = xsi_base_array_concat(t105, t106, t107, (char)97, t94, t95, (char)97, t104, t100, (char)101);
    t108 = (t10 + 12U);
    t19 = *((unsigned int *)t108);
    t109 = (9U + t19);
    t110 = (t109 + 3U);
    t111 = (t56 + 12U);
    t112 = *((unsigned int *)t111);
    t113 = (t110 + t112);
    t114 = (t113 + 3U);
    t115 = (t70 + 12U);
    t116 = *((unsigned int *)t115);
    t117 = (t114 + t116);
    t118 = (t117 + 5U);
    t119 = (t84 + 12U);
    t120 = *((unsigned int *)t119);
    t121 = (t118 + t120);
    t122 = (t121 + 5U);
    t123 = (t100 + 12U);
    t124 = *((unsigned int *)t123);
    t125 = (t122 + t124);
    xsi_report(t105, t125, (unsigned char)2);
    goto LAB56;

LAB58:    t27 = (unsigned char)1;
    goto LAB60;

LAB61:    t29 = (unsigned char)1;
    goto LAB63;

LAB64:    t30 = (unsigned char)1;
    goto LAB66;

LAB67:    t33 = (unsigned char)1;
    goto LAB69;

}

static void work_a_1850933034_3212880686_p_0(char *t0)
{
    char t14[16];
    char t16[16];
    char t18[16];
    char t24[16];
    char t26[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    unsigned char t9;
    char *t10;
    int t11;
    char *t12;
    int t13;
    char *t15;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    char *t23;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng4);
    t2 = (t0 + 6961);
    *((int *)t2) = 0;
    t3 = (t0 + 6965);
    *((int *)t3) = 7;
    t4 = 0;
    t5 = 7;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(101, ng4);
    t2 = (t0 + 6969);
    *((int *)t2) = 0;
    t3 = (t0 + 6973);
    *((int *)t3) = 7;
    t4 = 0;
    t5 = 7;

LAB9:    if (t4 <= t5)
        goto LAB10;

LAB12:    xsi_set_current_line(113, ng4);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t9 = (t4 == 0);
    if (t9 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(116, ng4);
    t2 = (t0 + 7021);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 2928U);
    t10 = *((char **)t7);
    t4 = *((int *)t10);
    t7 = xsi_int_to_mem(t4);
    t12 = xsi_string_variable_get_image(t14, t6, t7);
    t17 = ((STD_STANDARD) + 984);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 8;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t5 = (8 - 1);
    t21 = (t5 * 1);
    t21 = (t21 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t21;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t2, t18, (char)97, t12, t14, (char)101);
    t20 = (t0 + 7029);
    t25 = ((STD_STANDARD) + 984);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 11;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t8 = (11 - 1);
    t21 = (t8 * 1);
    t21 = (t21 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t21;
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t15, t16, (char)97, t20, t26, (char)101);
    t28 = (t14 + 12U);
    t21 = *((unsigned int *)t28);
    t29 = (8U + t21);
    t30 = (t29 + 11U);
    xsi_report(t23, t30, (unsigned char)3);

LAB23:    xsi_set_current_line(118, ng4);

LAB27:    *((char **)t1) = &&LAB28;

LAB1:    return;
LAB5:    xsi_set_current_line(91, ng4);
    t6 = (t0 + 3952);
    t7 = (t0 + 6961);
    work_a_1850933034_3212880686_sub_469608477212786267_134673997(t0, t6, *((int *)t7), 0, 0);
    xsi_set_current_line(92, ng4);
    t2 = (t0 + 3952);
    t3 = (t0 + 6961);
    work_a_1850933034_3212880686_sub_469608477212786267_134673997(t0, t2, *((int *)t3), 255, 255);
    xsi_set_current_line(93, ng4);
    t2 = (t0 + 3952);
    t3 = (t0 + 6961);
    work_a_1850933034_3212880686_sub_469608477212786267_134673997(t0, t2, *((int *)t3), 127, 1);
    xsi_set_current_line(94, ng4);
    t2 = (t0 + 3952);
    t3 = (t0 + 6961);
    work_a_1850933034_3212880686_sub_469608477212786267_134673997(t0, t2, *((int *)t3), 128, 1);
    xsi_set_current_line(95, ng4);
    t2 = (t0 + 3952);
    t3 = (t0 + 6961);
    work_a_1850933034_3212880686_sub_469608477212786267_134673997(t0, t2, *((int *)t3), 255, 1);
    xsi_set_current_line(96, ng4);
    t2 = (t0 + 3952);
    t3 = (t0 + 6961);
    work_a_1850933034_3212880686_sub_469608477212786267_134673997(t0, t2, *((int *)t3), 5, 10);
    xsi_set_current_line(97, ng4);
    t2 = (t0 + 3952);
    t3 = (t0 + 6961);
    work_a_1850933034_3212880686_sub_469608477212786267_134673997(t0, t2, *((int *)t3), 85, 170);

LAB6:    t2 = (t0 + 6961);
    t4 = *((int *)t2);
    t3 = (t0 + 6965);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB8:    t8 = (t4 + 1);
    t4 = t8;
    t6 = (t0 + 6961);
    *((int *)t6) = t4;
    goto LAB4;

LAB10:    xsi_set_current_line(102, ng4);
    t6 = (t0 + 3048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 0;
    xsi_set_current_line(103, ng4);

LAB13:    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t9 = (t8 <= 255);
    if (t9 != 0)
        goto LAB14;

LAB16:
LAB11:    t2 = (t0 + 6969);
    t4 = *((int *)t2);
    t3 = (t0 + 6973);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB12;

LAB21:    t8 = (t4 + 1);
    t4 = t8;
    t6 = (t0 + 6969);
    *((int *)t6) = t4;
    goto LAB9;

LAB14:    xsi_set_current_line(104, ng4);
    t2 = (t0 + 3168U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(105, ng4);

LAB17:    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t9 = (t8 <= 255);
    if (t9 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(109, ng4);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t11 = (t8 + 15);
    t2 = (t0 + 3048U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t11;
    goto LAB13;

LAB15:;
LAB18:    xsi_set_current_line(106, ng4);
    t2 = (t0 + 3952);
    t6 = (t0 + 6969);
    t7 = (t0 + 3048U);
    t10 = *((char **)t7);
    t11 = *((int *)t10);
    t7 = (t0 + 3168U);
    t12 = *((char **)t7);
    t13 = *((int *)t12);
    work_a_1850933034_3212880686_sub_469608477212786267_134673997(t0, t2, *((int *)t6), t11, t13);
    xsi_set_current_line(107, ng4);
    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t11 = (t8 + 15);
    t2 = (t0 + 3168U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t11;
    goto LAB17;

LAB19:;
LAB22:    xsi_set_current_line(114, ng4);
    t2 = (t0 + 6977);
    xsi_report(t2, 44U, (unsigned char)0);
    goto LAB23;

LAB25:    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}


extern void work_a_1850933034_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1850933034_3212880686_p_0};
	static char *se[] = {(void *)work_a_1850933034_3212880686_sub_387535118544912056_3057020925,(void *)work_a_1850933034_3212880686_sub_469608477212786267_134673997};
	xsi_register_didat("work_a_1850933034_3212880686", "isim/alu_8bit_tb_isim_beh.exe.sim/work/a_1850933034_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
