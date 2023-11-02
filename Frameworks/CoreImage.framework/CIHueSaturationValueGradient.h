
@interface CIHueSaturationValueGradient : CIFilter {
    id  inputColorSpace;
    NSNumber * inputDither;
    NSNumber * inputRadius;
    NSNumber * inputSoftness;
    NSNumber * inputValue;
}

@property (nonatomic, retain) id inputColorSpace;
@property (nonatomic, retain) NSNumber *inputDither;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputSoftness;
@property (nonatomic, retain) NSNumber *inputValue;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelD;
- (id)inputColorSpace;
- (id)inputDither;
- (id)inputRadius;
- (id)inputSoftness;
- (id)inputValue;
- (id)outputImage;
- (void)setInputColorSpace:(id)arg1;
- (void)setInputDither:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputSoftness:(id)arg1;
- (void)setInputValue:(id)arg1;

@end
