
@interface CISepiaTone : CIFilter {
    CIImage * inputImage;
    NSNumber * inputIntensity;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIntensity;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputImage;
- (id)inputIntensity;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;

@end
