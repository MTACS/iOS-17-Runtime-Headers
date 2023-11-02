
@interface PIColorBalanceFilter : CIFilter {
    NSNumber * _inputHasFace;
    CIImage * _inputImage;
    NSNumber * _inputIsRaw;
    NSNumber * _inputStrength;
    NSNumber * _inputWarmTemp;
    NSNumber * _inputWarmTint;
}

@property (nonatomic, retain) NSNumber *inputHasFace;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIsRaw;
@property (nonatomic, retain) NSNumber *inputStrength;
@property (nonatomic, retain) NSNumber *inputWarmTemp;
@property (nonatomic, retain) NSNumber *inputWarmTint;

+ (id)PPtogHDRKernel;
+ (id)colorBalanceKernel;
+ (id)colorBalanceKernels;
+ (id)customAttributes;
+ (id)gHDRtoPPKernel;

- (void).cxx_destruct;
- (id)applyInputConversion:(id)arg1;
- (id)applyOutputConversion:(id)arg1;
- (id)inputHasFace;
- (id)inputImage;
- (id)inputIsRaw;
- (id)inputStrength;
- (id)inputWarmTemp;
- (id)inputWarmTint;
- (id)outputImage;
- (void)setInputHasFace:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIsRaw:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWarmTemp:(id)arg1;
- (void)setInputWarmTint:(id)arg1;

@end
