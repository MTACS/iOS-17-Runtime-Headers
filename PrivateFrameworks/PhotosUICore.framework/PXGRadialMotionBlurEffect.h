
@interface PXGRadialMotionBlurEffect : PXGMotionBlurEffect {
    PXGPolarBlurKernel * _polarBlur;
}

- (void).cxx_destruct;
- (id)kernel;

@end
