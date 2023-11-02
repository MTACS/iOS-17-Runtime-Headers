
@interface CUIShapeEffectBlur1 : CIFilter {
    CIImage * inputFill;
    CIColor * inputGlowColorInner;
    CIColor * inputGlowColorOuter;
    CIImage * inputImage;
    CIVector * inputOffset;
    NSNumber * inputRadius;
    NSNumber * inputShadowBlurInner;
    NSNumber * inputShadowBlurOuter;
    CIColor * inputShadowColorInner;
    CIColor * inputShadowColorOuter;
}

@property (nonatomic, retain) CIImage *inputFill;
@property (nonatomic, retain) CIColor *inputGlowColorInner;
@property (nonatomic, retain) CIColor *inputGlowColorOuter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputOffset;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputShadowBlurInner;
@property (nonatomic, retain) NSNumber *inputShadowBlurOuter;
@property (nonatomic, retain) CIColor *inputShadowColorInner;
@property (nonatomic, retain) CIColor *inputShadowColorOuter;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputFill;
- (id)inputGlowColorInner;
- (id)inputGlowColorOuter;
- (id)inputImage;
- (id)inputOffset;
- (id)inputRadius;
- (id)inputShadowBlurInner;
- (id)inputShadowBlurOuter;
- (id)inputShadowColorInner;
- (id)inputShadowColorOuter;
- (id)outputImage;
- (void)setInputFill:(id)arg1;
- (void)setInputGlowColorInner:(id)arg1;
- (void)setInputGlowColorOuter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOffset:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputShadowBlurInner:(id)arg1;
- (void)setInputShadowBlurOuter:(id)arg1;
- (void)setInputShadowColorInner:(id)arg1;
- (void)setInputShadowColorOuter:(id)arg1;

@end
