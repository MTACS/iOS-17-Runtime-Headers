
@interface CIGammaAdjust : CIFilter {
    CIImage * inputImage;
    NSNumber * inputPower;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputPower;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)inputImage;
- (id)inputPower;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputPower:(id)arg1;

@end
