
@interface PICompositingFilter : CIFilter {
    CIImage * _inputBackgroundImage;
    NSString * _inputBlendMode;
    CIImage * _inputImage;
    NSNumber * _inputIntensity;
}

@property (nonatomic, retain) CIImage *inputBackgroundImage;
@property (nonatomic, retain) NSString *inputBlendMode;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIntensity;

+ (id)availableBlendModes;
+ (id)blendKernelForBlendMode:(id)arg1;
+ (id)customAttributes;

- (void).cxx_destruct;
- (id)inputBackgroundImage;
- (id)inputBlendMode;
- (id)inputImage;
- (id)inputIntensity;
- (id)outputImage;
- (void)setInputBackgroundImage:(id)arg1;
- (void)setInputBlendMode:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;

@end
