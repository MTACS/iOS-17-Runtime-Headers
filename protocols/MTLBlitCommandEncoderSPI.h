
@protocol MTLBlitCommandEncoderSPI <MTLCommandEncoderSPI, MTLBlitCommandEncoder>

@required

- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 sourceSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg9 options:(unsigned long long)arg10;
- (void)fillBuffer:(id <MTLBuffer>)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 pattern4:(unsigned int)arg3;
- (void)fillTexture:(id <MTLTexture>)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 bytes:(const void*)arg5 length:(unsigned long long)arg6;
- (void)fillTexture:(id <MTLTexture>)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 color:(struct { double x1; double x2; double x3; double x4; })arg5;
- (void)fillTexture:(id <MTLTexture>)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 color:(struct { double x1; double x2; double x3; double x4; })arg5 pixelFormat:(unsigned long long)arg6;
- (void)invalidateCompressedTexture:(id <MTLTexture>)arg1;
- (void)invalidateCompressedTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;

@end
