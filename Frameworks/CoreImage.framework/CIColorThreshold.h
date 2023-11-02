
@interface CIColorThreshold : CIFilter {
    CIImage * inputImage;
    NSNumber * inputThreshold;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputThreshold;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputThreshold;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputThreshold:(id)arg1;

@end
