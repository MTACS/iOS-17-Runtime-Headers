
@interface CIBlurmapRefinementDistanceDelta : CIFilter {
    NSNumber * inputDistance;
    CIImage * inputImage;
    NSNumber * inputScalingFactor;
    CIImage * inputSecondaryImage;
    NSNumber * inputThreshold;
}

@property (retain) NSNumber *inputDistance;
@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScalingFactor;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) NSNumber *inputThreshold;

- (id)inputDistance;
- (id)inputImage;
- (id)inputScalingFactor;
- (id)inputSecondaryImage;
- (id)inputThreshold;
- (id)outputImage;
- (void)setInputDistance:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScalingFactor:(id)arg1;
- (void)setInputSecondaryImage:(id)arg1;
- (void)setInputThreshold:(id)arg1;

@end
