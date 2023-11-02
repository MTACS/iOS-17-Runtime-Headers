
@interface CUIOuterGlowOrShadowFilter : CIFilter {
    CIColor * inputColor;
    CIImage * inputImage;
    CIVector * inputOffset;
    NSNumber * inputRadius;
    NSNumber * inputRange;
    NSNumber * inputSize;
    NSNumber * inputSpread;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputOffset;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputRange;
@property (nonatomic, retain) NSNumber *inputSize;
@property (nonatomic, retain) NSNumber *inputSpread;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputColor;
- (id)inputImage;
- (id)inputOffset;
- (id)inputRadius;
- (id)inputRange;
- (id)inputSize;
- (id)inputSpread;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOffset:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputRange:(id)arg1;
- (void)setInputSize:(id)arg1;
- (void)setInputSpread:(id)arg1;

@end
