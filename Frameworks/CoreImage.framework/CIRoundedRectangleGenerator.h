
@interface CIRoundedRectangleGenerator : CIFilter {
    CIColor * inputColor;
    CIVector * inputExtent;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)inputColor;
- (id)inputExtent;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
