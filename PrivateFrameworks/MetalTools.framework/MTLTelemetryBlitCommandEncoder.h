
@interface MTLTelemetryBlitCommandEncoder : MTLToolsBlitCommandEncoder {
    unsigned int  _beBlits;
    MTLTelemetryCommandBuffer * _telemetryCommandBuffer;
    MTLTelemetryDevice * _telemetryDevice;
}

- (void)accumulateBlitDistribution:(unsigned long long)arg1 samples:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 bufferSize:(unsigned long long)arg5 type:(unsigned long long)arg6 option:(unsigned long long)arg7 src:(unsigned long long)arg8;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;
- (void)endEncoding;
- (void)fillBuffer:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 pattern4:(unsigned int)arg3;
- (void)fillBuffer:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 value:(unsigned char)arg3;
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 bytes:(const void*)arg5 length:(unsigned long long)arg6;
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 color:(struct { double x1; double x2; double x3; double x4; })arg5;
- (void)fillTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 color:(struct { double x1; double x2; double x3; double x4; })arg5 pixelFormat:(unsigned long long)arg6;
- (id)initWithBlitCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;

@end
