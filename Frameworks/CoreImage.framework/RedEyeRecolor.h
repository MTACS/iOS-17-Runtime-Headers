
@interface RedEyeRecolor : CIFilter {
    NSNumber * inputBrightness;
    NSNumber * inputChroma;
    CIVector * inputExtent;
    CIImage * inputImage;
    CIImage * inputMask;
    NSNumber * inputNoiseAmount;
    NSNumber * inputRecovery;
    CIImage * inputSource;
    NSNumber * inputWhiteCutoff;
}

@property (nonatomic, retain) NSNumber *inputBrightness;
@property (nonatomic, retain) NSNumber *inputChroma;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) CIImage *inputMask;
@property (nonatomic, retain) NSNumber *inputNoiseAmount;
@property (nonatomic, retain) NSNumber *inputRecovery;
@property (nonatomic, retain) CIImage *inputSource;
@property (nonatomic, retain) NSNumber *inputWhiteCutoff;

- (id)inputBrightness;
- (id)inputChroma;
- (id)inputExtent;
- (id)inputMask;
- (id)inputNoiseAmount;
- (id)inputRecovery;
- (id)inputSource;
- (id)inputWhiteCutoff;
- (id)kernelRecovery;
- (id)kernelRepair;
- (id)outputImage;
- (void)setInputBrightness:(id)arg1;
- (void)setInputChroma:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputMask:(id)arg1;
- (void)setInputNoiseAmount:(id)arg1;
- (void)setInputRecovery:(id)arg1;
- (void)setInputSource:(id)arg1;
- (void)setInputWhiteCutoff:(id)arg1;

@end
