
@interface PXGExposureBlurKernel : PXGKernel {
    double  _exposure;
    double  _radius;
}

@property (nonatomic) double exposure;
@property (nonatomic) double radius;

+ (id)_exposurePipelineStateForDevice:(id)arg1;

- (void)_encodeExposure:(float)arg1 texture:(id)arg2 toCommandBuffer:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 targetScale:(double)arg4;
- (double)exposure;
- (void)preloadWithDevice:(id)arg1;
- (double)radius;
- (void)setExposure:(double)arg1;
- (void)setRadius:(double)arg1;

@end
