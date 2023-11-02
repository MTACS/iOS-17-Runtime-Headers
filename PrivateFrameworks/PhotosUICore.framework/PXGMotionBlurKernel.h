
@interface PXGMotionBlurKernel : PXGKernel {
    MPSImageBox * _boxKernel;
    long long  _direction;
    double  _size;
}

@property (nonatomic) long long direction;
@property (nonatomic) double size;

- (void).cxx_destruct;
- (long long)direction;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 targetScale:(double)arg4;
- (void)preloadWithDevice:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setSize:(double)arg1;
- (double)size;

@end
