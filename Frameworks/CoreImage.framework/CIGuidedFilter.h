
@interface CIGuidedFilter : CIFilter {
    NSNumber * inputEpsilon;
    CIImage * inputGuideImage;
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (copy) NSNumber *inputEpsilon;
@property (retain) CIImage *inputGuideImage;
@property (retain) CIImage *inputImage;
@property (copy) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_boxFilter:(id)arg1 fullFloat:(bool)arg2;
- (id)_combineRGB_and_A;
- (id)_computeABKernel;
- (id)_downsampledColorImage:(id)arg1;
- (id)_finalResult;
- (id)_fullFloatBoxFilter;
- (id)_multiplyImagesKernel;
- (id)_swizzleImageXXX1:(id)arg1;
- (id)_swizzleImageYYZ1:(id)arg1;
- (id)_swizzleImageYZZ1:(id)arg1;
- (id)_upsampleImage:(id)arg1 targetImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)computeAB:(id)arg1;
- (id)inputEpsilon;
- (id)inputGuideImage;
- (id)inputImage;
- (id)inputRadius;
- (id)multiplyImages:(id)arg1 imageB:(id)arg2;
- (id)outputImage;
- (void)setInputEpsilon:(id)arg1;
- (void)setInputGuideImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (id)subtract:(id)arg1 minus:(id)arg2;

@end
