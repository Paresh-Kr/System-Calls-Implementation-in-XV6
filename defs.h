struct buf;
struct context;
struct file;
struct inode;
struct pipe;
struct proc;
struct rtcdate;
struct spinlock;
struct sleeplock;
struct stat;
struct superblock;

// bio.c
void            binit(void);
struct buf*     bread(uint, uint);
void            brelse(struct buf*);
void            bwrite(struct buf*);

// console.c
void            consoleinit(void);
void            cprintf(char*, ...);
void            consoleintr(int(*)(void));
void            panic(char*) __attribute__((noreturn));

// exec.c
int             exec(char*, char**);

// file.c
struct file*    filealloc(void);
void            fileclose(struct file*);
struct file*    filedup(struct file*);
void            fileinit(void);
int             fileread(struct file*, char*, int n);
int             filestat(struct file*, struct stat*);
int             filewrite(struct file*, char*, int n);

// fs.c
void            readsb(int dev, struct superblock *sb);
int             dirlink(struct inode*, char*, uint);
struct inode*   dirlookup(struct inode*, char*, uint*);
struct inode*   ialloc(uint, short);
struct inode*   idup(struct inode*);
void            iinit(int dev);
void            ilock(struct inode*);
void            iput(struct inode*);
void            iunlock(struct inode*);
void            iunlockput(struct inode*);
void            iupdate(struct inode*);
int             namecmp(const char*, const char*);
struct inode*   namei(char*);
struct inode*   nameiparent(char*, char*);
int             readi(struct inode*, char*, uint, uint);
void            stati(struct inode*, struct stat*);
int             writei(struct inode*, char*, uint, uint);

// ide.c
void            ideinit(void);
void            ideintr(void);
void            iderw(struct buf*);

// ioapic.c
void            ioapicenable(int irq, int cpu);
extern uchar    ioapicid;
void            ioapicinit(void);

// kalloc.c
char*           kalloc(void);
void            kfree(char*);
void            kinit1(void*, void*);
void            kinit2(void*, void*);

// kbd.c
void            kbdintr(void);

// lapic.c
void            cmostime(struct rtcdate *r);
int             cpunum(void);
extern volatile uint*    lapic;
void            lapiceoi(void);
void            lapicinit(void);
void            lapicstartap(uchar, uint);
void            microdelay(int);

// log.c
void            initlog(int dev);
void            log_write(struct buf*);
void            begin_op();
void            end_op();

// mp.c
extern int      ismp;
void            mpinit(void);

// picirq.c
void            picenable(int);
void            picinit(void);

// pipe.c
int             pipealloc(struct file**, struct file**);
void            pipeclose(struct pipe*, int);
int             piperead(struct pipe*, char*, int);
int             pipewrite(struct pipe*, char*, int);

//PAGEBREAK: 16
// proc.c
void            exit(void);
int             fork(void);
int             growproc(int);
int             kill(int);
void            pinit(void);
void            procdump(void);
void            scheduler(void) __attribute__((noreturn));
void            sched(void);
void            sleep(void*, struct spinlock*);
void            userinit(void);
int             wait(void);
void            wakeup(void*);
void            yield(void);

// swtch.S
void            swtch(struct context**, struct context*);

// spinlock.c
void            acquire(struct spinlock*);
void            getcallerpcs(void*, uint*);
int             holding(struct spinlock*);
void            initlock(struct spinlock*, char*);
void            release(struct spinlock*);
void            pushcli(void);
void            popcli(void);

// sleeplock.c
void            acquiresleep(struct sleeplock*);
void            releasesleep(struct sleeplock*);
int             holdingsleep(struct sleeplock*);
void            initsleeplock(struct sleeplock*, char*);

// string.c
int             memcmp(const void*, const void*, uint);
void*           memmove(void*, const void*, uint);
void*           memset(void*, int, uint);
char*           safestrcpy(char*, const char*, int);
int             strlen(const char*);
int             strncmp(const char*, const char*, uint);
char*           strncpy(char*, const char*, int);

// syscall.c
int             argint(int, int*);
int             argptr(int, char**, int);
int             argstr(int, char**);
int             fetchint(uint, int*);
int             fetchstr(uint, char**);
void            syscall(void);
int             date(struct rtcdate *);

void 		syscall1(void);
void		syscall2(void);

// timer.c
void            timerinit(void);

// trap.c
void            idtinit(void);
extern uint     ticks;
void            tvinit(void);
extern struct spinlock tickslock;

// uart.c
void            uartinit(void);
void            uartintr(void);
void            uartputc(int);

// vm.c
void            seginit(void);
void            kvmalloc(void);
pde_t*          setupkvm(void);
char*           uva2ka(pde_t*, char*);
int             allocuvm(pde_t*, uint, uint);
int             deallocuvm(pde_t*, uint, uint);
void            freevm(pde_t*);
void            inituvm(pde_t*, char*, uint);
int             loaduvm(pde_t*, char*, struct inode*, uint, uint);
pde_t*          copyuvm(pde_t*, uint);
void            switchuvm(struct proc*);
void            switchkvm(void);
int             copyout(pde_t*, uint, void*, uint);
void            clearpteu(pde_t *pgdir, char *uva);

// number of elements in fixed-size array
#define NELEM(x) (sizeof(x)/sizeof((x)[0]))

//int first(void);
//int second(void);



int aaICO(void);
int RwwzQ(void);
int vPlkH(void);
int nAAkW(void);
int V4XHy(void);
int DIJ1J(void);
int uby8E(void);
int HrYmw(void);
int It9GD(void);
int kBqyL(void);
int uFvqh(void);
int kCOzo(void);
int BdglP(void);
int vsu9T(void);
int GhENr(void);
int cNlc2(void);
int AUX47(void);
int OJjUF(void);
int rwbCB(void);
int U63O6(void);
int buYn9(void);
int pvRfc(void);
int IbIsf(void);
int RH7FR(void);
int u5Ncu(void);
int vA3kF(void);
int ZyJFv(void);
int a_kuY(void);
int DF2ak(void);
int bifXB(void);
int OpuAe(void);
int DNUxN(void);
int ancIB(void);
int fiuCL(void);
int f85c4(void);
int pKQyj(void);
int sPh9f(void);
int aSdV9(void);
int hEwee(void);
int m7xSo(void);
int lpg5S(void);
int J7GF1(void);
int GYEGy(void);
int UHuoA(void);
int lfawm(void);
int SkxVQ(void);
int m7dk_(void);
int C2FTH(void);
int ZFvwG(void);
int xMznMiMbd2ASBAopjUBD(void);


int ajJ2rUS36Ds7gCvYhWvRMQ4cM(void);
int lcQQ6(void);
int tG0cd(void);
int BQaye(void);
int vRL61(void);
int BfPAS(void);
int VWqcU(void);
int rNV_x(void);
int m9TVP(void);
int dN3rB(void);
int NEorw(void);
int iE45d(void);
int VFGu_(void);
int zqf7e(void);
int Ayr5H(void);
int y7dVW(void);
int RhaR2(void);
int GUT_3(void);
int mtwGL(void);
int Rz1qA(void);
int BDslj(void);
int DYcHF(void);
int XVI4N(void);
int RknTi(void);
int eraAb(void);
int K7plu(void);
int UPjQy(void);
int uFjK1(void);
int E8Jj9(void);
int viJpE(void);
int y8hmu(void);
int GhPNY(void);
int mEymb(void);
int UAi7z(void);
int g3fke(void);
int spiXC(void);
int sCY6P(void);
int lQ5p2(void);
int yFLZV(void);
int y7NBZ(void);
int JS_81(void);
int pHGgA(void);
int D3BT2(void);
int LYSUb(void);
int UHDeS(void);
int zQQm5(void);
int T4IiC(void);
int ZnCtG(void);
int TBDYx(void);
int k_jNM(void);

void hashinit(void);
