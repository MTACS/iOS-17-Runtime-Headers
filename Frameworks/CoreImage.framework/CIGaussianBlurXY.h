
@interface CIGaussianBlurXY : CIFilter {
    CIImage * inputImage;
    NSNumber * inputSigmaX;
    NSNumber * inputSigmaY;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputSigmaX;
@property (nonatomic, retain) NSNumber *inputSigmaY;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)inputImage;
- (id)inputSigmaX;
- (id)inputSigmaY;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputSigmaX:(id)arg1;
- (void)setInputSigmaY:(id)arg1;

@end
