
@interface IOGPUMetalBlitCommandEncoder : IOGPUMetalCommandEncoder

- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;
- (void)fillBuffer:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 pattern4:(unsigned int)arg3;
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 bytes:(const void*)arg5 length:(unsigned long long)arg6;
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 color:(struct { double x1; double x2; double x3; double x4; })arg5;
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 color:(struct { double x1; double x2; double x3; double x4; })arg5 pixelFormat:(unsigned long long)arg6;
- (unsigned long long)getType;
- (void)optimizeContentsForCPUAccess:(id)arg1;
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeContentsForGPUAccess:(id)arg1;
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)resetCommandsInBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)resolveCounters:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4;
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(bool)arg3;
- (void)synchronizeResource:(id)arg1;
- (void)synchronizeTexture:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)updateFence:(id)arg1;
- (void)waitForFence:(id)arg1;

@end
