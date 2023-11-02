
@interface CIMedianFilter : CIFilter {
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel3x3;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
