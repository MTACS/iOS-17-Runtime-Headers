
@interface NUToneTransferFilter : CIFilter {
    CIImage * _inputImage;
    CIImage * _inputSourceImage;
    NSNumber * _inputStrength;
    CIImage * _inputTargetImage;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSourceImage;
@property (retain) NSNumber *inputStrength;
@property (retain) CIImage *inputTargetImage;

+ (id)toneTransferKernel;

- (void).cxx_destruct;
- (id)inputImage;
- (id)inputSourceImage;
- (id)inputStrength;
- (id)inputTargetImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputSourceImage:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputTargetImage:(id)arg1;

@end
