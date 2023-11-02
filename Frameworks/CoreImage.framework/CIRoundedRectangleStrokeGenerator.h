
@interface CIRoundedRectangleStrokeGenerator : CIFilter {
    CIColor * inputColor;
    CIVector * inputExtent;
    NSNumber * inputRadius;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)inputColor;
- (id)inputExtent;
- (id)inputRadius;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
