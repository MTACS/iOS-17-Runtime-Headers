
@interface PIDefinitionFilter : CIFilter {
    CIImage * _inputBlurImage;
    CIImage * _inputImage;
    NSNumber * _inputIntensity;
}

@property (retain) CIImage *inputBlurImage;
@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputIntensity;

+ (id)definitionKernel;

- (void).cxx_destruct;
- (id)inputBlurImage;
- (id)inputImage;
- (id)inputIntensity;
- (id)outputImage;
- (void)setInputBlurImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;

@end
