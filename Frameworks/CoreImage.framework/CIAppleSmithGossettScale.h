
@interface CIAppleSmithGossettScale : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
}

+ (id)customAttributes;

- (id)outputImage;

@end
