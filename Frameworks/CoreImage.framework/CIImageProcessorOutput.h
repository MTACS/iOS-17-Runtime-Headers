
@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput> {
    <MTLCommandBuffer> * _cmdBuffer;
}

@property (nonatomic, readonly) void*baseAddress;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) unsigned long long digest;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) <MTLCommandBuffer> *metalCommandBuffer;
@property (nonatomic, readonly) <MTLTexture> *metalTexture;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (nonatomic, readonly) struct __IOSurface { }*surface;

- (void*)baseAddress;
- (unsigned int)contextID;
- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface { }*)arg1 texture:(struct Texture { union { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct { void *x_3_2_1; void *x_3_2_2; } x_1_1_3; } x1; })arg2 digest:(unsigned long long)arg3 allowSRGB:(bool)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 context:(void*)arg6;
- (id)metalCommandBuffer;
- (bool)metalCommandBufferRequested;
- (id)metalContext;
- (id)metalTexture;
- (struct CGColorSpace { }*)workingColorSpace;

@end
