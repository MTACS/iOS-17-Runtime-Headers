
@interface PIAutoEnhanceFilter : CIFilter {
    NSString * _inputAlgorithm;
    CIImage * _inputImage;
    CIImage * _inputTargetImage;
}

@property (nonatomic, retain) NSString *inputAlgorithm;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputTargetImage;

+ (id)autoEnhanceCache;
+ (id)customAttributes;

- (void).cxx_destruct;
- (id)apertureAutoEnhanceFiltersForImage:(id)arg1;
- (id)autoEnhanceFiltersForImage:(id)arg1 algorithm:(id)arg2;
- (id)colorNormalizationFiltersForImage:(id)arg1;
- (id)inputAlgorithm;
- (id)inputImage;
- (id)inputTargetImage;
- (id)outputImage;
- (id)photosAutoEnhanceFiltersForImage:(id)arg1;
- (void)setInputAlgorithm:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputTargetImage:(id)arg1;

@end
