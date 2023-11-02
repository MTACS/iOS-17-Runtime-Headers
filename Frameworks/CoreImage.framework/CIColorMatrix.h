
@interface CIColorMatrix : CIFilter {
    CIVector * inputAVector;
    CIVector * inputBVector;
    CIVector * inputBiasVector;
    CIVector * inputGVector;
    CIImage * inputImage;
    CIVector * inputRVector;
}

@property (nonatomic, retain) CIVector *inputAVector;
@property (nonatomic, retain) CIVector *inputBVector;
@property (nonatomic, retain) CIVector *inputBiasVector;
@property (nonatomic, retain) CIVector *inputGVector;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputRVector;

+ (id)customAttributes;

- (id)inputAVector;
- (id)inputBVector;
- (id)inputBiasVector;
- (id)inputGVector;
- (id)inputImage;
- (id)inputRVector;
- (id)outputImage;
- (void)setInputAVector:(id)arg1;
- (void)setInputBVector:(id)arg1;
- (void)setInputBiasVector:(id)arg1;
- (void)setInputGVector:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRVector:(id)arg1;

@end
