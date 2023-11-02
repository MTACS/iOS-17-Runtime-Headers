
@interface CIZoomBlur : CIFilter {
    NSNumber * inputAmount;
    CIVector * inputCenter;
    CIImage * inputImage;
}

@property (nonatomic, retain) NSNumber *inputAmount;
@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;
- (bool)_isIdentity;
- (id)_kernel;
- (id)_kernelNew;
- (id)inputAmount;
- (id)inputCenter;
- (id)inputImage;
- (id)outputImage;
- (void)setInputAmount:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end