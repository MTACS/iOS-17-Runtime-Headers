
@interface CICannyEdgeDetector : CIFilter {
    NSNumber * inputGaussianSigma;
    NSNumber * inputHysteresisPasses;
    CIImage * inputImage;
    NSNumber * inputPerceptual;
    NSNumber * inputThresholdHigh;
    NSNumber * inputThresholdLow;
}

@property (nonatomic, retain) NSNumber *inputGaussianSigma;
@property (nonatomic, retain) NSNumber *inputHysteresisPasses;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputPerceptual;
@property (nonatomic, retain) NSNumber *inputThresholdHigh;
@property (nonatomic, retain) NSNumber *inputThresholdLow;

+ (id)customAttributes;

- (id)inputGaussianSigma;
- (id)inputHysteresisPasses;
- (id)inputImage;
- (id)inputPerceptual;
- (id)inputThresholdHigh;
- (id)inputThresholdLow;
- (id)outputImage;
- (void)setInputGaussianSigma:(id)arg1;
- (void)setInputHysteresisPasses:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputPerceptual:(id)arg1;
- (void)setInputThresholdHigh:(id)arg1;
- (void)setInputThresholdLow:(id)arg1;

@end
