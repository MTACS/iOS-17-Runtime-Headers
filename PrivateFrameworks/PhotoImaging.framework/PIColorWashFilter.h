
@interface PIColorWashFilter : CIFilter {
    CIColor * _inputColor;
    CIImage * _inputImage;
    NSString * _inputMode;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSString *inputMode;

+ (id)colorWashFixedKernel;
+ (id)colorWashFixedSmoothKernel;
+ (id)colorWashKernels;
+ (id)colorWashVariableKernel;
+ (id)colorWashVariableSmoothKernel;
+ (id)customAttributes;
+ (id)hueChromaColorWashKernel;
+ (id)hueChromaFixedColorWashKernel;
+ (id)hueChromaVariableColorWashKernel;

- (void).cxx_destruct;
- (id)inputColor;
- (id)inputImage;
- (id)inputMode;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMode:(id)arg1;

@end
