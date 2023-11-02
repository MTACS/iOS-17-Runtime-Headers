
@protocol MPSExternalCNNBinary <MPSExternalPluginBase>

@optional

- (unsigned long long)encodeBatchToCommandBuffer:(id <MTLCommandBuffer>)arg1 computeCommandEncoder:(id <MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 primaryTextures:(NSArray *)arg5 primaryInfo:(const struct { unsigned long long x1; unsigned long long x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; } x3; struct { long long x_4_1_1; long long x_4_1_2; long long x_4_1_3; } x4; unsigned long long x5; unsigned long long x6; }*)arg6 secondaryTextures:(NSArray *)arg7 secondaryInfo:(const struct { unsigned long long x1; unsigned long long x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; } x3; struct { long long x_4_1_1; long long x_4_1_2; long long x_4_1_3; } x4; unsigned long long x5; unsigned long long x6; }*)arg8 destinationTextures:(NSArray *)arg9 destinationInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; } x_4_1_1; struct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; } x_4_1_2; } x4; unsigned long long x5; }*)arg10 predicationBuffer:(id <MTLBuffer>)arg11 predicationOffset:(unsigned long long)arg12;

@end
