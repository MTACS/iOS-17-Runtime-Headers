
@interface CIBlurmapRefinementThreshold : CIFilter {
    CIImage * inputImage;
    NSNumber * inputThreshold;
}

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputThreshold;

- (id)inputImage;
- (id)inputThreshold;
- (id)kernel;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputThreshold:(id)arg1;

@end
