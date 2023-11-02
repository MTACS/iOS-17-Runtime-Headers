
@interface PXGRotationalMotionBlurEffect : PXGMotionBlurEffect {
    PXGPolarBlurKernel * _polarBlur;
}

- (void).cxx_destruct;
- (id)kernel;

@end
