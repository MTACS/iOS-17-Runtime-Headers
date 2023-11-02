
@interface CIPersonSegmentation : CIFilter {
    CIImage * inputImage;
    NSNumber * inputQualityLevel;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputQualityLevel;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputQualityLevel;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputQualityLevel:(id)arg1;

@end
