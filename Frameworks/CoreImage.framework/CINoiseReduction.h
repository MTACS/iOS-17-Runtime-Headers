
@interface CINoiseReduction : CIFilter {
    CIImage * inputImage;
    NSNumber * inputNoiseLevel;
    NSNumber * inputSharpness;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputNoiseLevel;
@property (nonatomic, retain) NSNumber *inputSharpness;

+ (id)customAttributes;

- (id)_CINoiseReduction;
- (id)inputImage;
- (id)inputNoiseLevel;
- (id)inputSharpness;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputNoiseLevel:(id)arg1;
- (void)setInputSharpness:(id)arg1;

@end
