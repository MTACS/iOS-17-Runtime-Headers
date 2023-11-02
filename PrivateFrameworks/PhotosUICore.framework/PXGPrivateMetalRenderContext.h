
@interface PXGPrivateMetalRenderContext : PXGMetalRenderContext

- (void)copyBytes:(const void*)arg1 toTexture:(id)arg2 inRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 length:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)fastCopyBytes:(const void*)arg1 toTexture:(id)arg2 inRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 length:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (id)initWithDevice:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (bool)supportsSharedTextures;
- (bool)wantsMutableSharedTextures;

@end
