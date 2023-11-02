
@interface CIFocalPlanePreprocessorInternal : CIFilter {
    NSNumber * inputAlphaThreshold;
    NSNumber * inputAmplitude;
    NSNumber * inputExponent;
    CIVector * inputFocusRect;
    NSNumber * inputGamma;
    CIImage * inputImage;
    CIImage * inputMatteImage;
    NSNumber * inputMaxFactor;
    NSNumber * inputMinFactor;
    NSNumber * inputZeroShiftPercentile;
}

+ (id)customAttributes;

- (id)outputImage;

@end
