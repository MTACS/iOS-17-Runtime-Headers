
@interface PISmartColorFilterHDR : CIFilter {
    NSNumber * inputCast;
    NSNumber * inputContrast;
    CIImage * inputImage;
    NSNumber * inputVibrancy;
}

@property (nonatomic, retain) NSNumber *inputCast;
@property (nonatomic, retain) NSNumber *inputContrast;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputVibrancy;

+ (id)customAttributes;

- (void).cxx_destruct;
- (bool)_isIdentity;
- (id)_kernelCNeg;
- (id)_kernelCPos;
- (id)_kernelCast;
- (id)_kernelV_gt1;
- (id)_kernelV_lt1;
- (id)inputCast;
- (id)inputContrast;
- (id)inputImage;
- (id)inputVibrancy;
- (id)outputImage;
- (void)setInputCast:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputVibrancy:(id)arg1;

@end
