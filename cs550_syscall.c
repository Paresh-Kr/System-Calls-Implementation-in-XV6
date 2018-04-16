#include "types.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"
#include "x86.h"
#include "syscall.h"
#include "date.h"

//#define SYS_first  first
//#define SYS_second second


#define SYS_aaICO aaICO
#define SYS_RwwzQ RwwzQ
#define SYS_vPlkH vPlkH
#define SYS_nAAkW nAAkW
#define SYS_V4XHy V4XHy
#define SYS_DIJ1J DIJ1J
#define SYS_uby8E uby8E
#define SYS_HrYmw HrYmw
#define SYS_It9GD It9GD
#define SYS_kBqyL kBqyL
#define SYS_uFvqh uFvqh
#define SYS_kCOzo kCOzo
#define SYS_BdglP BdglP
#define SYS_vsu9T vsu9T
#define SYS_GhENr GhENr
#define SYS_cNlc2 cNlc2
#define SYS_AUX47 AUX47
#define SYS_OJjUF OJjUF
#define SYS_rwbCB rwbCB
#define SYS_U63O6 U63O6
#define SYS_buYn9 buYn9
#define SYS_pvRfc pvRfc
#define SYS_IbIsf IbIsf
#define SYS_RH7FR RH7FR
#define SYS_u5Ncu u5Ncu
#define SYS_vA3kF vA3kF
#define SYS_ZyJFv ZyJFv
#define SYS_a_kuY a_kuY
#define SYS_DF2ak DF2ak
#define SYS_bifXB bifXB
#define SYS_OpuAe OpuAe
#define SYS_DNUxN DNUxN
#define SYS_ancIB ancIB
#define SYS_fiuCL fiuCL
#define SYS_f85c4 f85c4
#define SYS_pKQyj pKQyj
#define SYS_sPh9f sPh9f
#define SYS_aSdV9 aSdV9
#define SYS_hEwee hEwee
#define SYS_m7xSo m7xSo
#define SYS_lpg5S lpg5S
#define SYS_J7GF1 J7GF1
#define SYS_GYEGy GYEGy
#define SYS_UHuoA UHuoA
#define SYS_lfawm lfawm
#define SYS_SkxVQ SkxVQ
#define SYS_m7dk_ m7dk_
#define SYS_C2FTH C2FTH
#define SYS_ZFvwG ZFvwG
#define SYS_xMznMiMbd2ASBAopjUBD xMznMiMbd2ASBAopjUBD

//hash sytemcall
#define SYS_ajJ2rUS36Ds7gCvYhWvRMQ4cM ajJ2rUS36Ds7gCvYhWvRMQ4cM
#define SYS_lcQQ6 lcQQ6
#define SYS_tG0cd tG0cd
#define SYS_BQaye BQaye
#define SYS_vRL61 vRL61
#define SYS_BfPAS BfPAS
#define SYS_VWqcU VWqcU
#define SYS_rNV_x rNV_x
#define SYS_m9TVP m9TVP
#define SYS_dN3rB dN3rB
#define SYS_NEorw NEorw
#define SYS_iE45d iE45d
#define SYS_VFGu_ VFGu_
#define SYS_zqf7e zqf7e
#define SYS_Ayr5H Ayr5H
#define SYS_y7dVW y7dVW
#define SYS_RhaR2 RhaR2
#define SYS_GUT_3 GUT_3
#define SYS_mtwGL mtwGL
#define SYS_Rz1qA Rz1qA
#define SYS_BDslj BDslj
#define SYS_DYcHF DYcHF
#define SYS_XVI4N XVI4N
#define SYS_RknTi RknTi
#define SYS_eraAb eraAb
#define SYS_K7plu K7plu
#define SYS_UPjQy UPjQy
#define SYS_uFjK1 uFjK1
#define SYS_E8Jj9 E8Jj9
#define SYS_viJpE viJpE
#define SYS_y8hmu y8hmu
#define SYS_GhPNY GhPNY
#define SYS_mEymb mEymb
#define SYS_UAi7z UAi7z
#define SYS_g3fke g3fke
#define SYS_spiXC spiXC
#define SYS_sCY6P sCY6P
#define SYS_lQ5p2 lQ5p2
#define SYS_yFLZV yFLZV
#define SYS_y7NBZ y7NBZ
#define SYS_JS_81 JS_81
#define SYS_pHGgA pHGgA
#define SYS_D3BT2 D3BT2
#define SYS_LYSUb LYSUb
#define SYS_UHDeS UHDeS
#define SYS_zQQm5 zQQm5
#define SYS_T4IiC T4IiC
#define SYS_ZnCtG ZnCtG
#define SYS_TBDYx TBDYx
#define SYS_k_jNM k_jNM


//int sys_first(void);
//extern int sys_second(void);

extern int sys_aaICO(void);
extern int sys_RwwzQ(void);
extern int sys_vPlkH(void);
extern int sys_nAAkW(void);
extern int sys_V4XHy(void);
extern int sys_DIJ1J(void);
extern int sys_uby8E(void);
extern int sys_HrYmw(void);
extern int sys_It9GD(void);
extern int sys_kBqyL(void);
extern int sys_uFvqh(void);
extern int sys_kCOzo(void);
extern int sys_BdglP(void);
extern int sys_vsu9T(void);
extern int sys_GhENr(void);
extern int sys_cNlc2(void);
extern int sys_AUX47(void);
extern int sys_OJjUF(void);
extern int sys_rwbCB(void);
extern int sys_U63O6(void);
extern int sys_buYn9(void);
extern int sys_pvRfc(void);
extern int sys_IbIsf(void);
extern int sys_RH7FR(void);
extern int sys_u5Ncu(void);
extern int sys_vA3kF(void);
extern int sys_ZyJFv(void);
extern int sys_a_kuY(void);
extern int sys_DF2ak(void);
extern int sys_bifXB(void);
extern int sys_OpuAe(void);
extern int sys_DNUxN(void);
extern int sys_ancIB(void);
extern int sys_fiuCL(void);
extern int sys_f85c4(void);
extern int sys_pKQyj(void);
extern int sys_sPh9f(void);
extern int sys_aSdV9(void);
extern int sys_hEwee(void);
extern int sys_m7xSo(void);
extern int sys_lpg5S(void);
extern int sys_J7GF1(void);
extern int sys_GYEGy(void);
extern int sys_UHuoA(void);
extern int sys_lfawm(void);
extern int sys_SkxVQ(void);
extern int sys_m7dk_(void);
extern int sys_C2FTH(void);
extern int sys_ZFvwG(void);
extern int sys_xMznMiMbd2ASBAopjUBD(void);

//hash
extern int sys_ajJ2rUS36Ds7gCvYhWvRMQ4cM(void);
extern int sys_lcQQ6(void);
extern int sys_tG0cd(void);
extern int sys_BQaye(void);
extern int sys_vRL61(void);
extern int sys_BfPAS(void);
extern int sys_VWqcU(void);
extern int sys_rNV_x(void);
extern int sys_m9TVP(void);
extern int sys_dN3rB(void);
extern int sys_NEorw(void);
extern int sys_iE45d(void);
extern int sys_VFGu_(void);
extern int sys_zqf7e(void);
extern int sys_Ayr5H(void);
extern int sys_y7dVW(void);
extern int sys_RhaR2(void);
extern int sys_GUT_3(void);
extern int sys_mtwGL(void);
extern int sys_Rz1qA(void);
extern int sys_BDslj(void);
extern int sys_DYcHF(void);
extern int sys_XVI4N(void);
extern int sys_RknTi(void);
extern int sys_eraAb(void);
extern int sys_K7plu(void);
extern int sys_UPjQy(void);
extern int sys_uFjK1(void);
extern int sys_E8Jj9(void);
extern int sys_viJpE(void);
extern int sys_y8hmu(void);
extern int sys_GhPNY(void);
extern int sys_mEymb(void);
extern int sys_UAi7z(void);
extern int sys_g3fke(void);
extern int sys_spiXC(void);
extern int sys_sCY6P(void);
extern int sys_lQ5p2(void);
extern int sys_yFLZV(void);
extern int sys_y7NBZ(void);
extern int sys_JS_81(void);
extern int sys_pHGgA(void);
extern int sys_D3BT2(void);
extern int sys_LYSUb(void);
extern int sys_UHDeS(void);
extern int sys_zQQm5(void);
extern int sys_T4IiC(void);
extern int sys_ZnCtG(void);
extern int sys_TBDYx(void);
extern int sys_k_jNM(void);

void hashinit(void);

typedef struct map{
char * 	name;
int 	val;
}map;


//map map1[2]= {{"first",1},{"second",2}};

map map1[50]= {
{"aaICO",1},
{"RwwzQ",2},
{"vPlkH",3},
{"nAAkW",4},
{"V4XHy",5},
{"DIJ1J",6},
{"uby8E",7},
{"HrYmw",8},
{"It9GD",9},
{"kBqyL",10},
{"uFvqh",11},
{"kCOzo",12},
{"BdglP",13},
{"vsu9T",14},
{"GhENr",15},
{"cNlc2",16},
{"AUX47",17},
{"OJjUF",18},
{"rwbCB",19},
{"U63O6",20},
{"buYn9",21},
{"pvRfc",22},
{"IbIsf",23},
{"RH7FR",24},
{"u5Ncu",25},
{"vA3kF",26},
{"ZyJFv",27},
{"a_kuY",28},
{"DF2ak",29},
{"bifXB",30},
{"OpuAe",31},
{"DNUxN",32},
{"ancIB",33},
{"fiuCL",34},
{"f85c4",35},
{"pKQyj",36},
{"sPh9f",37},
{"aSdV9",38},
{"hEwee",39},
{"m7xSo",40},
{"lpg5S",41},
{"J7GF1",42},
{"GYEGy",43},
{"UHuoA",44},
{"lfawm",45},
{"SkxVQ",46},
{"m7dk_",47},
{"C2FTH",48},
{"ZFvwG",49},
{"xMznMiMbd2ASBAopjUBD",50}
};




/* static int (*my[])(void) = {
[1] sys_first,
[2] sys_second,
}; */


static int (*my[])(void) ={
[1] sys_aaICO,
[2] sys_RwwzQ,
[3] sys_vPlkH,
[4] sys_nAAkW,
[5] sys_V4XHy,
[6] sys_DIJ1J,
[7] sys_uby8E,
[8] sys_HrYmw,
[9] sys_It9GD,
[10] sys_kBqyL,
[11] sys_uFvqh,
[12] sys_kCOzo,
[13] sys_BdglP,
[14] sys_vsu9T,
[15] sys_GhENr,
[16] sys_cNlc2,
[17] sys_AUX47,
[18] sys_OJjUF,
[19] sys_rwbCB,
[20] sys_U63O6,
[21] sys_buYn9,
[22] sys_pvRfc,
[23] sys_IbIsf,
[24] sys_RH7FR,
[25] sys_u5Ncu,
[26] sys_vA3kF,
[27] sys_ZyJFv,
[28] sys_a_kuY,
[29] sys_DF2ak,
[30] sys_bifXB,
[31] sys_OpuAe,
[32] sys_DNUxN,
[33] sys_ancIB,
[34] sys_fiuCL,
[35] sys_f85c4,
[36] sys_pKQyj,
[37] sys_sPh9f,
[38] sys_aSdV9,
[39] sys_hEwee,
[40] sys_m7xSo,
[41] sys_lpg5S,
[42] sys_J7GF1,
[43] sys_GYEGy,
[44] sys_UHuoA,
[45] sys_lfawm,
[46] sys_SkxVQ,
[47] sys_m7dk_,
[48] sys_C2FTH,
[49] sys_ZFvwG,
[50] sys_xMznMiMbd2ASBAopjUBD,
};

static int (*myh[])(void) = {
[1] sys_ajJ2rUS36Ds7gCvYhWvRMQ4cM,
[2] sys_lcQQ6,
[3] sys_tG0cd,
[4] sys_BQaye,
[5] sys_vRL61,
[6] sys_BfPAS,
[7] sys_VWqcU,
[8] sys_rNV_x,
[9] sys_m9TVP,
[10] sys_dN3rB,
[11] sys_NEorw,
[12] sys_iE45d,
[13] sys_VFGu_,
[14] sys_zqf7e,
[15] sys_Ayr5H,
[16] sys_y7dVW,
[17] sys_RhaR2,
[18] sys_GUT_3,
[19] sys_mtwGL,
[20] sys_Rz1qA,
[21] sys_BDslj,
[22] sys_DYcHF,
[23] sys_XVI4N,
[24] sys_RknTi,
[25] sys_eraAb,
[26] sys_K7plu,
[27] sys_UPjQy,
[28] sys_uFjK1,
[29] sys_E8Jj9,
[30] sys_viJpE,
[31] sys_y8hmu,
[32] sys_GhPNY,
[33] sys_mEymb,
[34] sys_UAi7z,
[35] sys_g3fke,
[36] sys_spiXC,
[37] sys_sCY6P,
[38] sys_lQ5p2,
[39] sys_yFLZV,
[40] sys_y7NBZ,
[41] sys_JS_81,
[42] sys_pHGgA,
[43] sys_D3BT2,
[44] sys_LYSUb,
[45] sys_UHDeS,
[46] sys_zQQm5,
[47] sys_T4IiC,
[48] sys_ZnCtG,
[49] sys_TBDYx,
[50] sys_k_jNM,
};


typedef struct ht{
int key;
map * arr;
} ht;

ht h[10];


static map map50[50];

map level1 [5], level2 [5], level3 [5], level4 [5], level5 [5], level6 [5], level7 [5], level8 [5], level9 [5], level10 [5];


void hashinit(){
int i=0;
for(i=0; i<10; i++){
h[i].key=i;
}

h[0].arr = level1;
h[1].arr = level2;
h[2].arr = level3;
h[3].arr = level4;
h[4].arr = level5;
h[5].arr = level6;
h[6].arr = level7;
h[7].arr = level8;
h[8].arr = level9;
h[9].arr = level10;

map50[0].name  ="ajJ2rUS36Ds7gCvYhWvRMQ4cM";
map50[0].val = 1;
map50[1].name  = "lcQQ6";
map50[1].val = 2;
map50[2].name  = "tG0cd";
map50[2].val = 3;
map50[3].name  = "BQaye";
map50[3].val = 4;
map50[4].name  = "vRL61";
map50[4].val = 5;
map50[5].name  = "BfPAS";
map50[5].val = 6;
map50[6].name  = "VWqcU";
map50[6].val = 7;
map50[7].name  = "rNV_x";
map50[7].val = 8;
map50[8].name  = "m9TVP";
map50[8].val = 9;
map50[9].name  = "dN3rB";
map50[9].val = 10;
map50[10].name  = "NEorw";
map50[10].val = 11;
map50[11].name  = "iE45d";
map50[11].val = 12;
map50[12].name  = "VFGu_";
map50[12].val = 13;
map50[13].name  = "zqf7e";
map50[13].val = 14;
map50[14].name  = "Ayr5H";
map50[14].val = 15;
map50[15].name  = "y7dVW";
map50[15].val = 16;
map50[16].name  = "RhaR2";
map50[16].val = 17;
map50[17].name  = "GUT_3";
map50[17].val = 18;
map50[18].name  = "mtwGL";
map50[18].val = 19;
map50[19].name  = "Rz1qA";
map50[19].val = 20;
map50[20].name  = "BDslj";
map50[20].val = 21;
map50[21].name  = "DYcHF";
map50[21].val = 22;
map50[22].name  = "XVI4N";
map50[22].val = 23;
map50[23].name  = "RknTi";
map50[23].val = 24;
map50[24].name  = "eraAb";
map50[24].val = 25;
map50[25].name  = "K7plu";
map50[25].val = 26;
map50[26].name  = "UPjQy";
map50[26].val = 27;
map50[27].name  = "uFjK1";
map50[27].val = 28;
map50[28].name  = "E8Jj9";
map50[28].val = 29;
map50[29].name  = "viJpE";
map50[29].val = 30;
map50[30].name  = "y8hmu";
map50[30].val = 31;
map50[31].name  = "GhPNY";
map50[31].val = 32;
map50[32].name  = "mEymb";
map50[32].val = 33;
map50[33].name  = "UAi7z";
map50[33].val = 34;
map50[34].name  = "g3fke";
map50[34].val = 35;
map50[35].name  = "spiXC";
map50[35].val = 36;
map50[36].name  = "sCY6P";
map50[36].val = 37;
map50[37].name  = "lQ5p2";
map50[37].val = 38;
map50[38].name  = "yFLZV";
map50[38].val = 39;
map50[39].name  = "y7NBZ";
map50[39].val = 40;
map50[40].name  = "JS_81";
map50[40].val = 41;
map50[41].name  = "pHGgA";
map50[41].val = 42;
map50[42].name  = "D3BT2";
map50[42].val = 43;
map50[43].name  = "LYSUb";
map50[43].val = 44;
map50[44].name  = "UHDeS";
map50[44].val = 45;
map50[45].name  = "zQQm5";
map50[45].val = 46;
map50[46].name  = "T4IiC";
map50[46].val = 47;
map50[47].name  = "ZnCtG";
map50[47].val = 48;
map50[48].name  = "TBDYx";
map50[48].val = 49;
map50[49].name  = "k_jNM";
map50[49].val = 50;

int unit, ten;
for(i=0; i<50 ; i++)
{
//cprintf("\n Init---nName----------%s---Value------%d\n",map50[i].name,map50[i].val);
unit = (map50[i].val % 10);
ten = (map50[i].val / 10);
ten=ten-1;
//cprintf(" hash[unit] ---%d------------------hash[ten]-----------%d  ----Mapped value-------%d\n",unit,ten,map50[i].val);
h[unit].arr[ten+1] = map50[i];
//cprintf("\n Later--Name----------%s---Value------%d\n",h[unit].arr[ten+1].name,h[unit].arr[ten+1].val);

}
}


int search_hash(char * num)
{
hashinit();
int i;
for(i=0;i<50;i++){
if(strncmp(map50[i].name,num,30)==0)
{
  int  unit = (map50[i].val % 10);
  int  ten = (map50[i].val / 10);
//cprintf("\nTen----------%d---Unit------%d\n",ten,unit);
//cprintf("\n outside--- time ------Name----------%s---Value------%d\n",h[unit].arr[ten].name,h[unit].arr[ten].val);
int i, global, boolvar=1;
for(i=0; i < 5 && boolvar; i++)
{
global=i;
//cprintf("\n Inside time ------Name----------%s---Value------%d\n",h[unit].arr[global].name,h[unit].arr[global].val);
if(h[unit].arr[i].val == (ten * 10 + unit))
{
boolvar=0;
//cprintf("\n--Inside break---Ten----------%d---Unit------%d\n",ten,unit);
break;
}
}
global=ten;
//cprintf("\n Retrun time ------Name----------%s---Value------%d\n",h[unit].arr[global].name,h[unit].arr[global].val);

return (h[unit].arr[global].val);
}
}
return 0;
}



int search_linear(char * num)
{
int i=0, global, n, cmp, bit=0;
n = strlen(num);
for(i=0; i < 50 ; i++){
cmp = strncmp(num, map1[i].name, n);
global = i;
if (cmp == 0){
bit=1;
break;}
}
if(bit==1)
return (map1[global].val);
else
return -1;
}

void syscall1(void)
{
    int num1;
num1 =  proc->tf->eax;
char * num = (char *)  proc->tf->eax;
int key = search_linear(num);
if(num1 > 0 && key < NELEM(my) && my[key])
{
proc->tf->eax = my[key]();
 } else {
    cprintf("Invalid Linear system call in:	%s, with pid:	%d, name:	%s.\n",proc->name,proc->pid, num);
    proc->tf->eax = -1;
  }
}

void syscall2(void)
{
char * num = (char *)  proc->tf->eax;
    int key = search_hash(num);
//cprintf("Num---%d---key----%d---NELEM---%d---myh[key]----%d",num1,key,NELEM(myh), myh[key]);
if(num > 0 && key < NELEM(myh) && myh[key])
{
    proc->tf->eax = myh[key]();
  } else {
    cprintf("Invalid Hash system call in:	%s, with pid:	%d, name:	%s.\n",proc->name,proc->pid, num);
    proc->tf->eax = -1;
  }
}



//int sys_first(void){return 1000;}
//int sys_second(void){return 2000;}
//linear

int sys_aaICO(){return 413;}
int sys_RwwzQ(){return 523;}
int sys_vPlkH(){return 485;}
int sys_nAAkW(){return 434;}
int sys_V4XHy(){return 419;}
int sys_DIJ1J(){return 338;}
int sys_uby8E(){return 461;}
int sys_HrYmw(){return 503;}
int sys_It9GD(){return 385;}
int sys_kBqyL(){return 483;}
int sys_uFvqh(){return 522;}
int sys_kCOzo(){return 486;}
int sys_BdglP(){return 457;}
int sys_vsu9T(){return 491;}
int sys_GhENr(){return 436;}
int sys_cNlc2(){return 434;}
int sys_AUX47(){return 345;}
int sys_OJjUF(){return 414;}
int sys_rwbCB(){return 464;}
int sys_U63O6(){return 323;}
int sys_buYn9(){return 471;}
int sys_pvRfc(){return 513;}
int sys_IbIsf(){return 461;}
int sys_RH7FR(){return 361;}
int sys_u5Ncu(){return 464;}
int sys_vA3kF(){return 411;}
int sys_ZyJFv(){return 473;}
int sys_a_kuY(){return 505;}
int sys_DF2ak(){return 392;}
int sys_bifXB(){return 459;}
int sys_OpuAe(){return 474;}
int sys_DNUxN(){return 429;}
int sys_ancIB(){return 445;}
int sys_fiuCL(){return 467;}
int sys_f85c4(){return 362;}
int sys_pKQyj(){return 495;}
int sys_sPh9f(){return 458;}
int sys_aSdV9(){return 423;}
int sys_hEwee(){return 494;}
int sys_m7xSo(){return 478;}
int sys_lpg5S(){return 459;}
int sys_J7GF1(){return 319;}
int sys_GYEGy(){return 421;}
int sys_UHuoA(){return 450;}
int sys_lfawm(){return 535;}
int sys_SkxVQ(){return 477;}
int sys_m7dk_(){return 466;}
int sys_C2FTH(){return 343;}
int sys_ZFvwG(){return 468;}
int sys_xMznMiMbd2ASBAopjUBD(){return 1763;}

//hash
int sys_ajJ2rUS36Ds7gCvYhWvRMQ4cM(){return 2106;}
int sys_lcQQ6(){return 423;}
int sys_tG0cd(){return 434;}
int sys_BQaye(){return 466;}
int sys_vRL61(){return 379;}
int sys_BfPAS(){return 396;}
int sys_VWqcU(){return 470;}
int sys_rNV_x(){return 493;}
int sys_m9TVP(){return 416;}
int sys_dN3rB(){return 409;}
int sys_NEorw(){return 491;}
int sys_iE45d(){return 379;}
int sys_VFGu_(){return 439;}
int sys_zqf7e(){return 493;}
int sys_Ayr5H(){return 425;}
int sys_y7dVW(){return 449;}
int sys_RhaR2(){return 413;}
int sys_GUT_3(){return 386;}
int sys_mtwGL(){return 491;}
int sys_Rz1qA(){return 431;}
int sys_BDslj(){return 463;}
int sys_DYcHF(){return 398;}
int sys_XVI4N(){return 377;}
int sys_RknTi(){return 488;}
int sys_eraAb(){return 475;}
int sys_K7plu(){return 467;}
int sys_UPjQy(){return 473;}
int sys_uFjK1(){return 417;}
int sys_E8Jj9(){return 362;}
int sys_viJpE(){return 478;}
int sys_y8hmu(){return 507;}
int sys_GhPNY(){return 422;}
int sys_mEymb(){return 506;}
int sys_UAi7z(){return 432;}
int sys_g3fke(){return 464;}
int sys_spiXC(){return 487;}
int sys_sCY6P(){return 405;}
int sys_lQ5p2(){return 404;}
int sys_yFLZV(){return 443;}
int sys_y7NBZ(){return 410;}
int sys_JS_81(){return 357;}
int sys_pHGgA(){return 439;}
int sys_D3BT2(){return 319;}
int sys_LYSUb(){return 431;}
int sys_UHDeS(){return 409;}
int sys_zQQm5(){return 446;}
int sys_T4IiC(){return 381;}
int sys_ZnCtG(){return 454;}
int sys_TBDYx(){return 427;}
int sys_k_jNM(){return 463;}



