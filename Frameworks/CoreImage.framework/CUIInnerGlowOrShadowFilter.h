
@interface CUIInnerGlowOrShadowFilter : CIFilter {
    CIColor * inputColor;
    CIImage * inputImage;
    CIVector * inputOffset;
    NSNumber * inputRadius;
    NSNumber * inputRange;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputOffset;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputRange;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputColor;
- (id)inputImage;
- (id)inputOffset;
- (id)inputRadius;
- (id)inputRange;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOffset:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputRange:(id)arg1;

@end
