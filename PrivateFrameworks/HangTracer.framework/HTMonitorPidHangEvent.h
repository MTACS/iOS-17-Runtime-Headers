
@interface HTMonitorPidHangEvent : NSObject {
    struct { unsigned int x1; unsigned int x2; struct hangEvent { unsigned long long x_3_1_1; unsigned long long x_3_1_2; double x_3_1_3; _Atomic int x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; struct _opaque_pthread_t {} *x_3_1_9; unsigned long long x_3_1_10; int x_3_1_11; BOOL x_3_1_12[64]; BOOL x_3_1_13[256]; bool x_3_1_14; int (*x_3_1_15)(); } x3[8]; struct HTAssertionInfo { unsigned long long x_4_1_1; unsigned long long x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; BOOL x_4_1_5[64]; bool x_4_1_6; } x4[10]; int x5; unsigned long long x6; } * _shmem_region;
    unsigned long long  _shmem_size;
}

@property (readonly) struct { unsigned int x1; unsigned int x2; struct hangEvent { unsigned long long x_3_1_1; unsigned long long x_3_1_2; double x_3_1_3; _Atomic int x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; struct _opaque_pthread_t {} *x_3_1_9; unsigned long long x_3_1_10; int x_3_1_11; BOOL x_3_1_12[64]; BOOL x_3_1_13[256]; bool x_3_1_14; int (*x_3_1_15)(); } x3[8]; struct HTAssertionInfo { unsigned long long x_4_1_1; unsigned long long x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; BOOL x_4_1_5[64]; bool x_4_1_6; } x4[10]; int x5; unsigned long long x6; }*shmem_region;
@property (readonly) unsigned long long shmem_size;

+ (void)checkHangForPid:(int)arg1;

- (void)dealloc;
- (id)initHTMonitorPidHangEvent:(struct { unsigned int x1; unsigned int x2; struct hangEvent { unsigned long long x_3_1_1; unsigned long long x_3_1_2; double x_3_1_3; _Atomic int x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; struct _opaque_pthread_t {} *x_3_1_9; unsigned long long x_3_1_10; int x_3_1_11; BOOL x_3_1_12[64]; BOOL x_3_1_13[256]; bool x_3_1_14; int (*x_3_1_15)(); } x3[8]; struct HTAssertionInfo { unsigned long long x_4_1_1; unsigned long long x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; BOOL x_4_1_5[64]; bool x_4_1_6; } x4[10]; int x5; unsigned long long x6; }*)arg1 shmem_size:(unsigned long long)arg2;
- (struct { unsigned int x1; unsigned int x2; struct hangEvent { unsigned long long x_3_1_1; unsigned long long x_3_1_2; double x_3_1_3; _Atomic int x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; unsigned char x_3_1_8; struct _opaque_pthread_t {} *x_3_1_9; unsigned long long x_3_1_10; int x_3_1_11; BOOL x_3_1_12[64]; BOOL x_3_1_13[256]; bool x_3_1_14; int (*x_3_1_15)(); } x3[8]; struct HTAssertionInfo { unsigned long long x_4_1_1; unsigned long long x_4_1_2; unsigned long long x_4_1_3; unsigned long long x_4_1_4; BOOL x_4_1_5[64]; bool x_4_1_6; } x4[10]; int x5; unsigned long long x6; }*)shmem_region;
- (unsigned long long)shmem_size;

@end
