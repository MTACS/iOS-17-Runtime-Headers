
@interface CILocalContrast : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
    NSNumber * inputStrength;
}

+ (id)customAttributes;

- (id)_kernelLocalContrast;
- (id)outputImage;

@end
