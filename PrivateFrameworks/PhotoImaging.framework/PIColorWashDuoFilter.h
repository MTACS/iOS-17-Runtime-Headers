
@interface PIColorWashDuoFilter : CIFilter {
    CIColor * _inputHighlightColor;
    CIImage * _inputImage;
    NSString * _inputMode;
    CIColor * _inputShadowColor;
}

@property (nonatomic, retain) CIColor *inputHighlightColor;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSString *inputMode;
@property (nonatomic, retain) CIColor *inputShadowColor;

+ (id)colorWashKernels;
+ (id)customAttributes;
+ (id)hueChromaColorWashDuoFixedKernel;
+ (id)hueChromaColorWashDuoKernel;
+ (id)hueChromaColorWashDuoVariableKernel;
+ (id)iptColorWashDuoFixedKernel;
+ (id)iptColorWashDuoKernel;
+ (id)iptColorWashDuoVariableKernel;
+ (id)rgbColorWashDuoFixedKernel;
+ (id)rgbColorWashDuoKernel;
+ (id)rgbColorWashDuoVariableKernel;

- (void).cxx_destruct;
- (id)inputHighlightColor;
- (id)inputImage;
- (id)inputMode;
- (id)inputShadowColor;
- (id)outputImage;
- (void)setInputHighlightColor:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInputShadowColor:(id)arg1;

@end
