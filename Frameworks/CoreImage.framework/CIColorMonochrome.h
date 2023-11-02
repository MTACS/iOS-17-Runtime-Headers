
@interface CIColorMonochrome : CIFilter {
    CIColor * inputColor;
    CIImage * inputImage;
    NSNumber * inputIntensity;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputColor;
- (id)inputImage;
- (id)inputIntensity;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;

@end
