
@protocol MTLTextureSPI <MTLTexture, MTLResourceSPI>

@required

- (unsigned long long)colorSpaceConversionMatrix;
- (long long)compressionFeedback;
- (unsigned long long)compressionFootprint;
- (unsigned long long)gpuHandle;
- (struct __IOSurface { }*)iosurface;
- (unsigned long long)iosurfacePlane;
- (bool)isCompressed;
- (bool)isDrawable;
- (unsigned long long)numFaces;
- (unsigned long long)rotation;
- (unsigned int)swizzleKey;

@optional

- (bool)canGenerateMipmapLevels;
- (void)generateMipmapLevel:(unsigned long long)arg1 slice:(unsigned long long)arg2;
- (unsigned long long)gpuAddress;
- (<MTLTexture> *)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (<MTLTexture> *)newTextureViewWithPixelFormat:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (<MTLTexture> *)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 resourceIndex:(unsigned long long)arg5;
- (<MTLTexture> *)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 swizzle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg5 resourceIndex:(unsigned long long)arg6;
- (unsigned long long)resourceIndex;
- (unsigned long long)sparseSurfaceDefaultValue;
- (unsigned long long)uniqueIdentifier;

@end
