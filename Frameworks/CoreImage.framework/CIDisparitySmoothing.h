
@interface CIDisparitySmoothing : CIFilter {
    CIImage * inputImage;
    NSNumber * inputNumIterations;
}

@property (retain) CIImage *inputImage;
@property (copy) NSNumber *inputNumIterations;

+ (id)customAttributes;

- (id)_customBoxBlur5Kernel;
- (id)inputImage;
- (id)inputNumIterations;
- (id)outputImage;
- (id)outputImageMetal;
- (void)setInputImage:(id)arg1;
- (void)setInputNumIterations:(id)arg1;

@end
