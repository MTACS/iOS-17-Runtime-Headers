
@interface CISampleNearest : CIFilter {
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
