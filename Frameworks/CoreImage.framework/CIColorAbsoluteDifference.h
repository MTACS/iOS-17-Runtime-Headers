
@interface CIColorAbsoluteDifference : CIFilter {
    CIImage * inputImage;
    CIImage * inputImage2;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputImage2;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputImage2;
- (id)outputImage;
- (void)setInputImage2:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
