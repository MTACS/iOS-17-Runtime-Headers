
@interface PTParameterPairSerialization : NSObject

+ (void)appendCMTimeParameter:(unsigned short)arg1 value:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 scale:(int)arg3 toOutput:(struct { /* ? */ }**)arg4;
+ (void)appendFloatParameter:(unsigned short)arg1 value:(float)arg2 toOutput:(struct { /* ? */ }**)arg3;
+ (void)appendUIntParameter:(unsigned short)arg1 value:(unsigned int)arg2 toOutput:(struct { /* ? */ }**)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })getCMTimeParameter:(unsigned short)arg1 scale:(int)arg2 fromPairs:(const struct { unsigned short x1; unsigned short x2; union { float x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; }*)arg3 numPairs:(unsigned int)arg4 withDefault:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
+ (float)getFloatParameter:(unsigned short)arg1 fromPairs:(const struct { unsigned short x1; unsigned short x2; union { float x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; }*)arg2 numPairs:(unsigned int)arg3;
+ (float)getFloatParameter:(unsigned short)arg1 fromPairs:(const struct { unsigned short x1; unsigned short x2; union { float x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; }*)arg2 numPairs:(unsigned int)arg3 didFindValue:(bool*)arg4;
+ (float)getFloatParameter:(unsigned short)arg1 fromPairs:(const struct { unsigned short x1; unsigned short x2; union { float x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; }*)arg2 numPairs:(unsigned int)arg3 withDefault:(float)arg4;
+ (unsigned int)getUIntParameter:(unsigned short)arg1 fromPairs:(const struct { unsigned short x1; unsigned short x2; union { float x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; }*)arg2 numPairs:(unsigned int)arg3;
+ (unsigned int)getUIntParameter:(unsigned short)arg1 fromPairs:(const struct { unsigned short x1; unsigned short x2; union { float x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; }*)arg2 numPairs:(unsigned int)arg3 didFindValue:(bool*)arg4;
+ (unsigned int)getUIntParameter:(unsigned short)arg1 fromPairs:(const struct { unsigned short x1; unsigned short x2; union { float x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; } x3; }*)arg2 numPairs:(unsigned int)arg3 withDefault:(unsigned int)arg4 didFindValue:(bool*)arg5;

@end
