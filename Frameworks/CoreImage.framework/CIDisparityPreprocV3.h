
@interface CIDisparityPreprocV3 : CIFilter {
    CIImage * inputAlphaImage;
    CIImage * inputImage;
}

@property (retain) CIImage *inputAlphaImage;
@property (retain) CIImage *inputImage;

- (id)inputAlphaImage;
- (id)inputImage;
- (id)outputImage;
- (id)preprocKernel;
- (id)preprocKernelNoAlpha;
- (void)setInputAlphaImage:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
