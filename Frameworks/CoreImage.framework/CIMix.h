
@interface CIMix : CIFilter {
    NSNumber * inputAmount;
    CIImage * inputBackgroundImage;
    CIImage * inputImage;
}

@property (nonatomic, retain) NSNumber *inputAmount;
@property (nonatomic, retain) CIImage *inputBackgroundImage;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputAmount;
- (id)inputBackgroundImage;
- (id)inputImage;
- (id)outputImage;
- (void)setInputAmount:(id)arg1;
- (void)setInputBackgroundImage:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
