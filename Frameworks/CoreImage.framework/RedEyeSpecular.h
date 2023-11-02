
@interface RedEyeSpecular : CIFilter {
    NSNumber * inputDebugFlag;
    CIImage * inputImage;
    CIImage * inputSource;
    NSNumber * inputSpecIntensity;
    CIImage * inputSpecularMask;
    NSNumber * inputSpecularThreshold;
}

@property (nonatomic, retain) NSNumber *inputDebugFlag;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputSource;
@property (nonatomic, retain) NSNumber *inputSpecIntensity;
@property (nonatomic, retain) CIImage *inputSpecularMask;
@property (nonatomic, retain) NSNumber *inputSpecularThreshold;

- (id)inputDebugFlag;
- (id)inputImage;
- (id)inputSource;
- (id)inputSpecIntensity;
- (id)inputSpecularMask;
- (id)inputSpecularThreshold;
- (id)outputImage;
- (void)setInputDebugFlag:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSource:(id)arg1;
- (void)setInputSpecIntensity:(id)arg1;
- (void)setInputSpecularMask:(id)arg1;
- (void)setInputSpecularThreshold:(id)arg1;

@end
