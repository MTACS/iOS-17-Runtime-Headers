
@interface CICircleGenerator : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor;
    NSNumber * inputEdgeBlur;
    NSNumber * inputRadius;
}

+ (id)customAttributes;

- (id)_CICircle;
- (id)outputImage;

@end
