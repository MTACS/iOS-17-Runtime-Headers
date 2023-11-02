
@interface CIGlassLozenge : CIFilter {
    CIImage * inputImage;
    CIVector * inputPoint0;
    CIVector * inputPoint1;
    NSNumber * inputRadius;
    NSNumber * inputRefraction;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_CILozengeRefraction;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
