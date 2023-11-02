
@interface CIDesaturateShadows : CIFilter {
    CIImage * inputImage;
    NSNumber * inputIntensity;
    NSNumber * inputSoftness;
    NSNumber * inputThreshold;
}

@property (nonatomic, retain) NSNumber *inputIntensity;
@property (nonatomic, retain) NSNumber *inputSoftness;
@property (nonatomic, retain) NSNumber *inputThreshold;

+ (id)customAttributes;

- (id)inputIntensity;
- (id)inputSoftness;
- (id)inputThreshold;
- (id)outputImage;
- (void)setInputIntensity:(id)arg1;
- (void)setInputSoftness:(id)arg1;
- (void)setInputThreshold:(id)arg1;

@end
