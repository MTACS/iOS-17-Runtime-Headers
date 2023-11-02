
@interface PXGHorizontalMotionBlurEffect : PXGMotionBlurEffect {
    PXGMotionBlurKernel * _motionBlur;
}

- (void).cxx_destruct;
- (id)kernel;

@end
