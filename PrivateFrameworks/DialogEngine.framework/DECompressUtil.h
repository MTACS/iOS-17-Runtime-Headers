
@interface DECompressUtil : NSObject

+ (bool)advanceZStream:(struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; }*)arg1 function:(int (*)arg2 input:(id)arg3 output:(id)arg4 flush:(int)arg5 streamEnded:(bool*)arg6;
+ (void)initZStream:(struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; }*)arg1;

@end
