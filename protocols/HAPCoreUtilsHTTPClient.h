
@protocol HAPCoreUtilsHTTPClient

@required

- (int)getPeerAddress:(void*)arg1 maxLength:(unsigned long long)arg2 outLength:(unsigned long long*)arg3;
- (void)invalidate;
- (int)sendMessage:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned long long x_3_1_2; char *x_3_1_3; unsigned long long x_3_1_4; char *x_3_1_5; unsigned long long x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned long long x_3_1_9; struct { char *x_10_2_1; unsigned long long x_10_2_2; char *x_10_2_3; unsigned long long x_10_2_4; char *x_10_2_5; unsigned long long x_10_2_6; char *x_10_2_7; unsigned long long x_10_2_8; char *x_10_2_9; unsigned long long x_10_2_10; char *x_10_2_11; unsigned long long x_10_2_12; char *x_10_2_13; unsigned long long x_10_2_14; char *x_10_2_15; char *x_10_2_16; char *x_10_2_17; unsigned long long x_10_2_18; char *x_10_2_19; unsigned long long x_10_2_20; } x_3_1_10; char *x_3_1_11; unsigned long long x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned long long x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; int x5; unsigned char x6; }*)arg1;
- (void)setDebugDelegate:(const struct { void *x1; int (*x2)(); int (*x3)(); }*)arg1;
- (void)setDelegate:(const struct { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg1;
- (int)setDestination:(const char *)arg1 port:(int)arg2;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setFlags:(unsigned int)arg1 mask:(unsigned int)arg2;
- (int)setProperty:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)setTimeoutInSeconds:(int)arg1;
- (void)setTransportDelegate:(const struct { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg1;

@end
