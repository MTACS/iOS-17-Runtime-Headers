
@interface CIBlurmapRefinementLinearMapping : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScalingFactor;
    CIImage * inputSecondaryImage;
}

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScalingFactor;
@property (retain) CIImage *inputSecondaryImage;

- (id)inputImage;
- (id)inputScalingFactor;
- (id)inputSecondaryImage;
- (id)kernel;
- (id)kernelNoSecondaryImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputScalingFactor:(id)arg1;
- (void)setInputSecondaryImage:(id)arg1;

@end
