
@interface CIPortraitBlurPreProcess : CIFilter {
    CIImage * inputBlurmapImage;
    CIImage * inputImage;
    NSNumber * inputUseMetal;
}

@property (retain) CIImage *inputBlurmapImage;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputUseMetal;

- (id)_kernel;
- (id)_kernelMetal;
- (id)inputBlurmapImage;
- (id)inputImage;
- (id)inputUseMetal;
- (id)outputImage;
- (void)setInputBlurmapImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputUseMetal:(id)arg1;

@end
