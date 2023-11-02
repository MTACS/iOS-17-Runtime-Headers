
@interface CITorusLensDistortion : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputRefraction;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_CITorusRefraction;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
