
@interface CIBlendModeFilter : CIFilter {
    CIImage * inputBackgroundImage;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *inputBackgroundImage;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputBackgroundImage;
- (id)inputImage;
- (id)outputImage;
- (void)setInputBackgroundImage:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
