
@interface PXGPolarBlurKernel : PXGKernel {
    double  _rotationAngle;
    double  _scaleFactor;
}

@property (nonatomic) double rotationAngle;
@property (nonatomic) double scaleFactor;

- (bool)_encodePolarBlur:(int)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 params:(const void*)arg4 length:(unsigned long long)arg5 commandBuffer:(id)arg6;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 targetScale:(double)arg4;
- (id)init;
- (double)rotationAngle;
- (double)scaleFactor;
- (void)setRotationAngle:(double)arg1;
- (void)setScaleFactor:(double)arg1;

@end
