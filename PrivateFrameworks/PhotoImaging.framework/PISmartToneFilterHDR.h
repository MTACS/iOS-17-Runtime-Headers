
@interface PISmartToneFilterHDR : CIFilter {
    NSNumber * inputBlack;
    NSNumber * inputBrightness;
    NSNumber * inputContrast;
    NSNumber * inputExposure;
    NSNumber * inputHighlights;
    CIImage * inputImage;
    NSNumber * inputRawHighlights;
    NSNumber * inputShadows;
}

@property (nonatomic, retain) NSNumber *inputBlack;
@property (nonatomic, retain) NSNumber *inputBrightness;
@property (nonatomic, retain) NSNumber *inputContrast;
@property (nonatomic, retain) NSNumber *inputExposure;
@property (nonatomic, retain) NSNumber *inputHighlights;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRawHighlights;
@property (nonatomic, retain) NSNumber *inputShadows;

+ (id)customAttributes;

- (void).cxx_destruct;
- (bool)_isIdentity;
- (id)_kernelBneg;
- (id)_kernelBpos;
- (id)_kernelC;
- (id)_kernelC_hdr;
- (id)_kernelH;
- (id)_kernelRH;
- (id)inputBlack;
- (id)inputBrightness;
- (id)inputContrast;
- (id)inputExposure;
- (id)inputHighlights;
- (id)inputImage;
- (id)inputRawHighlights;
- (id)inputShadows;
- (id)outputImage;
- (void)setInputBlack:(id)arg1;
- (void)setInputBrightness:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputExposure:(id)arg1;
- (void)setInputHighlights:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRawHighlights:(id)arg1;
- (void)setInputShadows:(id)arg1;

@end
