
@interface CICircularScreen : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputSharpness;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputSharpness;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputImage;
- (id)inputSharpness;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSharpness:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
