
@interface CIColorCrossPolynomial : CIFilter {
    CIVector * inputBlueCoefficients;
    CIVector * inputGreenCoefficients;
    CIImage * inputImage;
    CIVector * inputRedCoefficients;
}

@property (nonatomic, retain) CIVector *inputBlueCoefficients;
@property (nonatomic, retain) CIVector *inputGreenCoefficients;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputRedCoefficients;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputBlueCoefficients;
- (id)inputGreenCoefficients;
- (id)inputImage;
- (id)inputRedCoefficients;
- (id)outputImage;
- (void)setInputBlueCoefficients:(id)arg1;
- (void)setInputGreenCoefficients:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRedCoefficients:(id)arg1;

@end
