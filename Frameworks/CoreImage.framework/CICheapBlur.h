
@interface CICheapBlur : CIFilter {
    CIImage * inputImage;
    NSNumber * inputPasses;
    NSNumber * inputSampling;
}

+ (id)customAttributes;

- (id)_CICheapBlur;
- (id)_CILerp;
- (id)outputImage;

@end
