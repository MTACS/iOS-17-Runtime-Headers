
@interface CIFocalPlaneNative : CIFilter {
    NSNumber * inputAlphaThreshold;
    NSNumber * inputAmplitude;
    NSNumber * inputExponent;
    NSNumber * inputGamma;
    CIImage * inputImage;
    CIImage * inputLensModelCalculatorImage;
    CIImage * inputMatteImage;
    NSNumber * inputMaxFactor;
    NSNumber * inputMinFactor;
}

+ (id)customAttributes;

- (id)_focalPlanePreProcessorKernel;
- (id)_focalPlanePreProcessorKernelPow2;
- (id)outputImage;

@end
