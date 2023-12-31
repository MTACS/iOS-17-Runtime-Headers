
@protocol CIImageProcessorOutput

@required

- (void*)baseAddress;
- (unsigned long long)bytesPerRow;
- (unsigned long long)digest;
- (int)format;
- (<MTLCommandBuffer> *)metalCommandBuffer;
- (<MTLTexture> *)metalTexture;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })region;
- (struct __IOSurface { }*)surface;

@end
