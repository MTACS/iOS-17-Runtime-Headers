
@protocol SCNMTLDeformerUpdateComputeContext <NSObject>

@required

- (struct SCNMTLComputeCommandEncoder { id x1[31]; unsigned long long x2[31]; id x3[128]; id x4[16]; id x5; id x6; id x7; struct SCNMTLBufferPool {} *x8; unsigned int x9; unsigned long long x10[2]; unsigned long long x11[1]; }*)currentComputeEncoder;
- (long long)currentFrameIndex;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })currentTransforms;
- (void)setStageInputOutputBuffersToEncoder:(struct SCNMTLComputeCommandEncoder { id x1[31]; unsigned long long x2[31]; id x3[128]; id x4[16]; id x5; id x6; id x7; struct SCNMTLBufferPool {} *x8; unsigned int x9; unsigned long long x10[2]; unsigned long long x11[1]; }*)arg1;

@end
