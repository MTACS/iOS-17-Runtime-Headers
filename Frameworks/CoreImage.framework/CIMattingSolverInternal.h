
@interface CIMattingSolverInternal : CIFilter {
    NSNumber * inputBGThresholdValue;
    NSNumber * inputEPS;
    NSNumber * inputErosionKernelSize;
    NSNumber * inputFGThresholdValue;
    CIImage * inputImage;
    CIImage * inputMainImage;
    NSNumber * inputNumIterations;
    CIImage * inputPredicateImage;
    NSNumber * inputRadius;
    NSNumber * inputSubsampling;
    NSNumber * inputUseDepthFilter;
}

+ (id)customAttributes;

- (id)outputImage;

@end
