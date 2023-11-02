
@interface MTLTelemetryTexture : MTLToolsTexture {
    MTLTextureDescriptor * _telemetryDescriptor;
    MTLTelemetryDevice * _telemetryDevice;
    unsigned long long  mipmapClipType;
}

- (void)accumTextureDistribution:(id)arg1 category:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 baseAddr:(unsigned long long)arg4 rowBytes:(unsigned long long)arg5 isLinear:(bool)arg6;
- (void)initMipmapClipType;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 descriptor:(id)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 swizzle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg8;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 swizzle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg5;

@end
