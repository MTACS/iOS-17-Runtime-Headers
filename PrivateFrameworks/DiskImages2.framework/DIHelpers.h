
@interface DIHelpers : NSObject

+ (id)copyDevicePathWithStatfs:(struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; }*)arg1;
+ (bool)executeWithPath:(id)arg1 arguments:(id)arg2 error:(id*)arg3;
+ (unsigned long long)numBlocksWithSizeStr:(id)arg1 blockSize:(unsigned long long)arg2;
+ (id)stringWithImageFormat:(long long)arg1;

@end
