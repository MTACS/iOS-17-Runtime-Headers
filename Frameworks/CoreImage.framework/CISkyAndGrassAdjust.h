
@interface CISkyAndGrassAdjust : CIFilter {
    NSNumber * inputGrassAmount;
    CIImage * inputImage;
    NSNumber * inputSkyAmount;
}

@property (nonatomic, retain) NSNumber *inputGrassAmount;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputSkyAmount;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputGrassAmount;
- (id)inputImage;
- (id)inputSkyAmount;
- (id)outputImage;
- (void)setInputGrassAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSkyAmount:(id)arg1;

@end
