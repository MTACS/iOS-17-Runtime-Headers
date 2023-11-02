
@interface CISmartBlackAndWhite : CIFilter {
    NSNumber * inputGrain;
    NSNumber * inputHue;
    CIImage * inputImage;
    NSNumber * inputNeutralGamma;
    NSNumber * inputScaleFactor;
    NSNumber * inputSeed;
    NSNumber * inputStrength;
    NSNumber * inputTone;
}

@property (nonatomic, copy) NSNumber *inputGrain;
@property (nonatomic, copy) NSNumber *inputHue;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputNeutralGamma;
@property (nonatomic, copy) NSNumber *inputScaleFactor;
@property (nonatomic, copy) NSNumber *inputSeed;
@property (nonatomic, copy) NSNumber *inputStrength;
@property (nonatomic, copy) NSNumber *inputTone;

+ (id)customAttributes;

- (id)_kernel;
- (float*)createHueArray;
- (void)getNonNormalizedSettings:(struct { bool x1; float x2; float x3; float x4; float x5; float x6[3]; }*)arg1;
- (id)hueArrayImage:(float*)arg1;
- (id)inputGrain;
- (id)inputHue;
- (id)inputImage;
- (id)inputNeutralGamma;
- (id)inputScaleFactor;
- (id)inputSeed;
- (id)inputStrength;
- (id)inputTone;
- (id)outputImage;
- (void)setInputGrain:(id)arg1;
- (void)setInputHue:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputNeutralGamma:(id)arg1;
- (void)setInputScaleFactor:(id)arg1;
- (void)setInputSeed:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputTone:(id)arg1;

@end
