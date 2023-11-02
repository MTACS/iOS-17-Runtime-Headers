
@interface CIColorMap : CIFilter {
    CIImage * inputGradientImage;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *inputGradientImage;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputGradientImage;
- (id)inputImage;
- (id)outputImage;
- (void)setInputGradientImage:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
