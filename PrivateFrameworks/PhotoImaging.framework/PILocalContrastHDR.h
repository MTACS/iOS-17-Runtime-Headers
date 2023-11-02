
@interface PILocalContrastHDR : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
    NSNumber * inputStrength;
}

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)_kernelLocalContrast;
- (id)outputImage;

@end
