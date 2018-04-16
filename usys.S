#include "syscall.h"
#include "traps.h"

#define SYSCALL(name) \
  .globl name; \
  name: \
    movl $SYS_ ## name, %eax; \
    int $T_SYSCALL; \
    ret


SYSCALL(fork)
SYSCALL(exit)
SYSCALL(wait)
SYSCALL(pipe)
SYSCALL(read)
SYSCALL(write)
SYSCALL(close)
SYSCALL(kill)
SYSCALL(exec)
SYSCALL(open)
SYSCALL(mknod)
SYSCALL(unlink)
SYSCALL(fstat)
SYSCALL(link)
SYSCALL(mkdir)
SYSCALL(chdir)
SYSCALL(dup)
SYSCALL(getpid)
SYSCALL(sbrk)
SYSCALL(sleep)
SYSCALL(uptime)
SYSCALL(date)


#define SYSCALL_L(name)                 \
    .globl name;                        \
    mystr##name:                        \
    .string #name;                      \
    name: movl $mystr ## name, %eax;    \
    int $T_SYSL;                        \
    ret
    
SYSCALL_L(aaICO)
SYSCALL_L(RwwzQ)
SYSCALL_L(vPlkH)
SYSCALL_L(nAAkW)
SYSCALL_L(V4XHy)
SYSCALL_L(DIJ1J)
SYSCALL_L(uby8E)
SYSCALL_L(HrYmw)
SYSCALL_L(It9GD)
SYSCALL_L(kBqyL)
SYSCALL_L(uFvqh)
SYSCALL_L(kCOzo)
SYSCALL_L(BdglP)
SYSCALL_L(vsu9T)
SYSCALL_L(GhENr)
SYSCALL_L(cNlc2)
SYSCALL_L(AUX47)
SYSCALL_L(OJjUF)
SYSCALL_L(rwbCB)
SYSCALL_L(U63O6)
SYSCALL_L(buYn9)
SYSCALL_L(pvRfc)
SYSCALL_L(IbIsf)
SYSCALL_L(RH7FR)
SYSCALL_L(u5Ncu)
SYSCALL_L(vA3kF)
SYSCALL_L(ZyJFv)
SYSCALL_L(a_kuY)
SYSCALL_L(DF2ak)
SYSCALL_L(bifXB)
SYSCALL_L(OpuAe)
SYSCALL_L(DNUxN)
SYSCALL_L(ancIB)
SYSCALL_L(fiuCL)
SYSCALL_L(f85c4)
SYSCALL_L(pKQyj)
SYSCALL_L(sPh9f)
SYSCALL_L(aSdV9)
SYSCALL_L(hEwee)
SYSCALL_L(m7xSo)
SYSCALL_L(lpg5S)
SYSCALL_L(J7GF1)
SYSCALL_L(GYEGy)
SYSCALL_L(UHuoA)
SYSCALL_L(lfawm)
SYSCALL_L(SkxVQ)
SYSCALL_L(m7dk_)
SYSCALL_L(C2FTH)
SYSCALL_L(ZFvwG)
SYSCALL_L(xMznMiMbd2ASBAopjUBD)




#define SYSCALL_H(name)                 \
    .globl name;                        \
    mystr##name:                        \
    .string #name;                      \
    name: movl $mystr ## name, %eax;    \
    int $T_SYSH;                        \
    ret

SYSCALL_H(ajJ2rUS36Ds7gCvYhWvRMQ4cM);
SYSCALL_H(lcQQ6);
SYSCALL_H(tG0cd);
SYSCALL_H(BQaye);
SYSCALL_H(vRL61);
SYSCALL_H(BfPAS);
SYSCALL_H(VWqcU);
SYSCALL_H(rNV_x);
SYSCALL_H(m9TVP);
SYSCALL_H(dN3rB);
SYSCALL_H(NEorw);
SYSCALL_H(iE45d);
SYSCALL_H(VFGu_);
SYSCALL_H(zqf7e);
SYSCALL_H(Ayr5H);
SYSCALL_H(y7dVW);
SYSCALL_H(RhaR2);
SYSCALL_H(GUT_3);
SYSCALL_H(mtwGL);
SYSCALL_H(Rz1qA);
SYSCALL_H(BDslj);
SYSCALL_H(DYcHF);
SYSCALL_H(XVI4N);
SYSCALL_H(RknTi);
SYSCALL_H(eraAb);
SYSCALL_H(K7plu);
SYSCALL_H(UPjQy);
SYSCALL_H(uFjK1);
SYSCALL_H(E8Jj9);
SYSCALL_H(viJpE);
SYSCALL_H(y8hmu);
SYSCALL_H(GhPNY);
SYSCALL_H(mEymb);
SYSCALL_H(UAi7z);
SYSCALL_H(g3fke);
SYSCALL_H(spiXC);
SYSCALL_H(sCY6P);
SYSCALL_H(lQ5p2);
SYSCALL_H(yFLZV);
SYSCALL_H(y7NBZ);
SYSCALL_H(JS_81);
SYSCALL_H(pHGgA);
SYSCALL_H(D3BT2);
SYSCALL_H(LYSUb);
SYSCALL_H(UHDeS);
SYSCALL_H(zQQm5);
SYSCALL_H(T4IiC);
SYSCALL_H(ZnCtG);
SYSCALL_H(TBDYx);
SYSCALL_H(k_jNM);



