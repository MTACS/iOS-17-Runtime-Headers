
@interface CIFusionDelta : CIFilter {
    CIVector * inputAddBlur;
    NSNumber * inputApertureScaling;
    CIImage * inputImage;
    NSNumber * inputMaxBlur;
    CIVector * inputRemoveBlur;
}

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)kernel;
- (id)outputImage;

@end
