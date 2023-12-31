
@interface CIConvolution9Horizontal : CIFilter {
    NSNumber * inputBias;
    CIImage * inputImage;
    CIVector * inputWeights;
}

@property (nonatomic, retain) NSNumber *inputBias;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputWeights;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)inputBias;
- (id)inputImage;
- (id)inputWeights;
- (id)outputImage;
- (void)setInputBias:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputWeights:(id)arg1;

@end
