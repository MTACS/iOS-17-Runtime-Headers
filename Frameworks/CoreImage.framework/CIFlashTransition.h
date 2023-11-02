
@interface CIFlashTransition : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor;
    CIVector * inputExtent;
    NSNumber * inputFadeThreshold;
    CIImage * inputImage;
    NSNumber * inputMaxStriationRadius;
    NSNumber * inputStriationContrast;
    NSNumber * inputStriationStrength;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) NSNumber *inputFadeThreshold;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputMaxStriationRadius;
@property (nonatomic, retain) NSNumber *inputStriationContrast;
@property (nonatomic, retain) NSNumber *inputStriationStrength;
@property (nonatomic, retain) CIImage *inputTargetImage;
@property (nonatomic, retain) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_colorKernel;
- (id)_geomKernel;
- (id)inputCenter;
- (id)inputColor;
- (id)inputExtent;
- (id)inputFadeThreshold;
- (id)inputImage;
- (id)inputMaxStriationRadius;
- (id)inputStriationContrast;
- (id)inputStriationStrength;
- (id)inputTargetImage;
- (id)inputTime;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputFadeThreshold:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMaxStriationRadius:(id)arg1;
- (void)setInputStriationContrast:(id)arg1;
- (void)setInputStriationStrength:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;

@end
