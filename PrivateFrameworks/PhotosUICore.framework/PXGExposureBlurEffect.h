
@interface PXGExposureBlurEffect : PXGOffscreenEffect {
    double  _exposure;
    PXGExposureBlurKernel * _kernel;
    double  _radius;
}

@property (nonatomic) double exposure;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (double)exposure;
- (id)initWithEntityManager:(id)arg1;
- (id)kernel;
- (double)radius;
- (void)setExposure:(double)arg1;
- (void)setRadius:(double)arg1;

@end
