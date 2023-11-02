
@interface CIColorBalance : CIFilter {
    CIColor * inputColor;
    NSNumber * inputDamping;
    CIImage * inputImage;
    NSNumber * inputStrength;
    NSNumber * inputWarmth;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) NSNumber *inputDamping;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputStrength;
@property (nonatomic, retain) NSNumber *inputWarmth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputColor;
- (id)inputDamping;
- (id)inputImage;
- (id)inputStrength;
- (id)inputWarmth;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputDamping:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWarmth:(id)arg1;

@end
