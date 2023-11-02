
@interface PXGMotionBlurEffect : PXGOffscreenEffect {
    double  _intensity;
}

@property (nonatomic) double intensity;

- (id)initWithEntityManager:(id)arg1;
- (double)intensity;
- (void)setIntensity:(double)arg1;

@end
