
@interface CICheapBilateral : CIFilter {
    CIImage * inputImage;
    NSNumber * inputSigmaRange;
    NSNumber * inputSigmaSpace;
    CIImage * inputSource;
}

@property (nonatomic, retain) NSNumber *inputSigmaRange;
@property (nonatomic, retain) NSNumber *inputSigmaSpace;
@property (nonatomic, retain) CIImage *inputSource;

+ (id)customAttributes;

- (id)inputSigmaRange;
- (id)inputSigmaSpace;
- (id)inputSource;
- (id)outputImage;
- (void)setInputSigmaRange:(id)arg1;
- (void)setInputSigmaSpace:(id)arg1;
- (void)setInputSource:(id)arg1;

@end
