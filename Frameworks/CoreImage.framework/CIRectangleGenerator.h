
@interface CIRectangleGenerator : CIFilter {
    CIColor * inputColor;
    NSNumber * inputEdgeBlur;
    CIVector * inputRectangle;
}

+ (id)customAttributes;

- (id)_CIRectangle;
- (id)outputImage;

@end
