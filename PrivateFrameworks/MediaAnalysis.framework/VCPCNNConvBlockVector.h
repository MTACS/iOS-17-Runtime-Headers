
@interface VCPCNNConvBlockVector : VCPCNNConvBlock {
    int (* CalculateDotProductOfChunk;
}

+ (bool)isFilterSizeSupported:(int)arg1;

- (int)chunkFourForward;
- (int)forward;
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(bool)arg4 padding:(bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(bool)arg8;
- (int)readFromDisk:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 quantFactor:(short)arg2;
- (int)straightForwardForChunkFour;

@end
