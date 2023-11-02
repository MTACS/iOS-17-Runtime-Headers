
@interface SBHMinusPageStepper : SBFSteppedAnimationTimingFunctionCalculator

@property (nonatomic, readonly) double backgroundBlurAlpha;
@property (nonatomic, readonly) double pageControlAlpha;

- (double)backgroundBlurAlpha;
- (id)init;
- (double)pageControlAlpha;

@end
