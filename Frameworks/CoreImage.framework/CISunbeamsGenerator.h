
@interface CISunbeamsGenerator : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor;
    NSNumber * inputMaxStriationRadius;
    NSNumber * inputStriationContrast;
    NSNumber * inputStriationStrength;
    NSNumber * inputSunRadius;
    NSNumber * inputTime;
}

+ (id)customAttributes;

- (id)_CISunbeams;
- (id)outputImage;

@end
