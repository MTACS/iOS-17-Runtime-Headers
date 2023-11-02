
@protocol MTLBufferSPI <MTLResourceSPI, MTLBuffer>

@required

- (struct __IOSurface { }*)_aneIOSurface;
- (void)didModifyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct __IOSurface { }*)iosurface;
- (<MTLTexture> *)newLinearTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;

@optional

- (unsigned long long)parentGPUAddress;
- (unsigned long long)parentGPUSize;
- (unsigned long long)resourceIndex;
- (void)setParentGPUAddress:(unsigned long long)arg1;
- (void)setParentGPUSize:(unsigned long long)arg1;

@end
