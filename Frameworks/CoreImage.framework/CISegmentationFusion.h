
@interface CISegmentationFusion : CIFilter {
    CIVector * inputAddBlur;
    NSNumber * inputApertureScaling;
    CIImage * inputImage;
    CIImage * inputMatteImage;
    CIVector * inputRemoveBlur;
    NSDictionary * inputTuningParameters;
}

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)kernel;
- (id)outputImage;

@end
