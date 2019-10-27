#ifndef THREADS
#define THREADS 4
#endif

//T0 only
#define CK_SIPSCRATCH 2048
#define CK_BLAKE2BSTATE 4096
#define CK_BLAKE2BSTATE_INIT 4224
#define CK_BLAKE2BMSG 4288
#define CK_NUMGRAPHS 4416
#define CK_BARRIER 6144
#define CK_ABORT 6208
#define CK_THREADDATA 6272
#define CK_RECOVERWRITE 8192
#define CK_LINKS 4194304
#define CK_ADJLIST 12582912
#define CK_CYCLESTACK 262144

//Multithread
#define CK_COUNTER1 32768
#define CK_COUNTER1B 65536
#define CK_COUNTER1C 98304
#define CK_COUNTER1D 131072
#define CK_COUNTER1E 163840
#define CK_COUNTER0 229376
#define CK_RENMAX0 65536
#define CK_RENMAX1 65544
#define CK_RENMAX2 65552
#define CK_BITMAP 262144

//Round 15 REN1: (4096/T) * 64KiB | 4T: 64MiB
//SIZE0, SIZE1, SIZE2, SIZE3= 3 (mod 5)
//SIZE15, SIZE16= 0 (mod 4)
//SIZE40, SIZE41= 0 (mod 8)
//BUCKET1B, BUCKET1C, BUCKET1D: padding=32768 (mod 5)= 3 (mod 5)
//Round 95 REN2: (128/T) * 32KiB | 4T: 1MiB
#if THREADS == 8
#define LOGTHREADS 3
#define R1PHASES 5
#define CK_THREADSEP 1476395008UL
#define CK_BUCKET0 99057664
#define CK_BUCKETSIZE0 168128
#define CK_BUCKET1A 327680
#define CK_BUCKETSIZE1A 11968
#define CK_BUCKET1B 98402304
#define CK_BUCKETSIZE1B 17728
#define CK_BUCKET1C 243662848
#define CK_BUCKETSIZE1C 26048
#define CK_BUCKET1D 457080832
#define CK_BUCKETSIZE1D 27968
#define CK_BUCKET1E 686227456
#define CK_BUCKETSIZE1E 27968
#define CK_BUCKET2 915406848
#define CK_BUCKETSIZE2 51008
#define CK_BUCKET3 327680
#define CK_BUCKETSIZE3 32448
#define CK_BUCKET8 266141696
#define CK_BUCKETSIZE8 9664
#define CK_BUCKET9 327680
#define CK_BUCKETSIZE9 8128
#define CK_BUCKET14 69533696
#define CK_BUCKETSIZE14 3520
#define CK_BUCKET15 50331648
#define CK_BUCKETSIZE15 74944
#define CK_BUCKET16 69533696
#define CK_BUCKETSIZE16 65472
#define CK_BUCKET95 50855936
#define CK_BUCKETSIZE95 896
#define CK_BUCKET96 69533696
#define CK_BUCKETSIZE96 4544
#define CK_BUCKET97 50855936
#define CK_BUCKETSIZE97 4544
#define CK_REN1 16777216
#define CK_REN2 50331648

#elif THREADS == 4
#define LOGTHREADS 2
#define R1PHASES 4
#define CK_THREADSEP 2952003584UL
#define CK_BUCKET0 216662016
#define CK_BUCKETSIZE0 333888
#define CK_BUCKET1A 327680
#define CK_BUCKETSIZE1A 26048
#define CK_BUCKET1B 213909504
#define CK_BUCKETSIZE1B 38848
#define CK_BUCKET1C 532348928
#define CK_BUCKETSIZE1C 59968
#define CK_BUCKET1D 1023803392
#define CK_BUCKETSIZE1D 91968
#define CK_BUCKET2 1777270784
#define CK_BUCKETSIZE2 100288
#define CK_BUCKET3 327680
#define CK_BUCKETSIZE3 63808
#define CK_BUCKET8 523042816
#define CK_BUCKETSIZE8 19136
#define CK_BUCKET9 327680
#define CK_BUCKETSIZE9 16320
#define CK_BUCKET14 134021120
#define CK_BUCKETSIZE14 7104
#define CK_BUCKET15 83886080
#define CK_BUCKETSIZE15 150080
#define CK_BUCKET16 134021120
#define CK_BUCKETSIZE16 131008
#define CK_BUCKET95 84934656
#define CK_BUCKETSIZE95 1600
#define CK_BUCKET96 134021120
#define CK_BUCKETSIZE96 9152
#define CK_BUCKET97 84934656
#define CK_BUCKETSIZE97 9152
#define CK_REN1 16777216
#define CK_REN2 83886080

#endif