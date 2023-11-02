
@interface CIFusionTwoImagesDelta : CIFilter {
    CIVector * inputAdditive;
    NSNumber * inputApertureScaling;
    CIImage * inputImage;
    NSNumber * inputMaxBlur;
    NSNumber * inputProtectStrength;
    CIImage * inputSecondaryImage;
    CIVector * inputSubtractive;
}

@property (retain) CIVector *inputAdditive;
@property (retain) NSNumber *inputApertureScaling;
@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputMaxBlur;
@property (retain) NSNumber *inputProtectStrength;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) CIVector *inputSubtractive;

- (id)inputAdditive;
- (id)inputApertureScaling;
- (id)inputImage;
- (id)inputMaxBlur;
- (id)inputProtectStrength;
- (id)inputSecondaryImage;
- (id)inputSubtractive;
- (id)kernel;
- (id)outputImage;
- (void)setInputAdditive:(id)arg1;
- (void)setInputApertureScaling:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMaxBlur:(id)arg1;
- (void)setInputProtectStrength:(id)arg1;
- (void)setInputSecondaryImage:(id)arg1;
- (void)setInputSubtractive:(id)arg1;

@end
