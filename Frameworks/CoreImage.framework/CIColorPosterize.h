
@interface CIColorPosterize : CIFilter {
    CIImage * inputImage;
    NSNumber * inputLevels;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputLevels;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputImage;
- (id)inputLevels;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputLevels:(id)arg1;

@end
