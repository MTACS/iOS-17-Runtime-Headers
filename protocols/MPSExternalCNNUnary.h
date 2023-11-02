
@protocol MPSExternalCNNUnary <MPSExternalPluginBase>

@optional

- (unsigned long long)encodeBatchToCommandBuffer:(id <MTLCommandBuffer>)arg1 computeCommandEncoder:(id <MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 sourceTextures:(NSArray *)arg5 sourceInfo:(const struct { unsigned long long x1; unsigned long long x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; } x3; struct { long long x_4_1_1; long long x_4_1_2; long long x_4_1_3; } x4; unsigned long long x5; unsigned long long x6; }*)arg6 destinationTextures:(NSArray *)arg7 destinationInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; } x_4_1_1; struct { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; } x_4_1_2; } x4; unsigned long long x5; }*)arg8 predicationBuffer:(id <MTLBuffer>)arg9 predicationOffset:(unsigned long long)arg10;

@end
