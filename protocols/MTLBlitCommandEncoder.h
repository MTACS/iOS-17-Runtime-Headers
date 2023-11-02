
@protocol MTLBlitCommandEncoder <MTLCommandEncoder>

@required

- (void)copyFromBuffer:(id <MTLBuffer>)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)copyFromBuffer:(id <MTLBuffer>)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)copyFromBuffer:(id <MTLBuffer>)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id <MTLBuffer>)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id <MTLBuffer>)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id <MTLBuffer>)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id <MTLTexture>)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;
- (void)copyFromTexture:(id <MTLTexture>)arg1 toTexture:(id <MTLTexture>)arg2;
- (void)copyIndirectCommandBuffer:(id <MTLIndirectCommandBuffer>)arg1 sourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 destination:(id <MTLIndirectCommandBuffer>)arg3 destinationIndex:(unsigned long long)arg4;
- (void)fillBuffer:(id <MTLBuffer>)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 value:(unsigned char)arg3;
- (void)generateMipmapsForTexture:(id <MTLTexture>)arg1;
- (void)getTextureAccessCounters:(id <MTLTexture>)arg1 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(bool)arg5 countersBuffer:(id <MTLBuffer>)arg6 countersBufferOffset:(unsigned long long)arg7;
- (void)optimizeContentsForCPUAccess:(id <MTLTexture>)arg1;
- (void)optimizeContentsForCPUAccess:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeContentsForGPUAccess:(id <MTLTexture>)arg1;
- (void)optimizeContentsForGPUAccess:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeIndirectCommandBuffer:(id <MTLIndirectCommandBuffer>)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)resetCommandsInBuffer:(id <MTLIndirectCommandBuffer>)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)resetTextureAccessCounters:(id <MTLTexture>)arg1 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (void)resolveCounters:(id <MTLCounterSampleBuffer>)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 destinationBuffer:(id <MTLBuffer>)arg3 destinationOffset:(unsigned long long)arg4;
- (void)sampleCountersInBuffer:(id <MTLCounterSampleBuffer>)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(bool)arg3;
- (void)synchronizeResource:(id <MTLResource>)arg1;
- (void)synchronizeTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)updateFence:(id <MTLFence>)arg1;
- (void)waitForFence:(id <MTLFence>)arg1;

@end
