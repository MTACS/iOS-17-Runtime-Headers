
@interface CIPortraitBlurCombiner : CIFilter {
    CIImage * inputBlurImage;
    CIImage * inputImage;
    CIImage * inputMatteImage;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputBlurImage;
@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) NSDictionary *inputTuningParameters;

- (id)_blendKernel:(bool)arg1;
- (id)_ourBlendKernelMetal;
- (id)inputBlurImage;
- (id)inputImage;
- (id)inputMatteImage;
- (id)inputTuningParameters;
- (id)nonMetalKernel;
- (id)nonMetalKernelYCC;
- (id)outputImage;
- (void)setInputBlurImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
