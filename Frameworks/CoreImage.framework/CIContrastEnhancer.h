
@interface CIContrastEnhancer : CIFilter {
    CIImage * inputImage;
    NSNumber * inputIntensity;
    NSNumber * inputLocal;
    NSNumber * inputPerceptual;
    NSNumber * inputScale;
}

@property (nonatomic, retain) NSNumber *inputIntensity;
@property (nonatomic, retain) NSNumber *inputLocal;
@property (nonatomic, retain) NSNumber *inputPerceptual;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (id)inputIntensity;
- (id)inputLocal;
- (id)inputPerceptual;
- (id)inputScale;
- (id)outputImage;
- (void)setInputIntensity:(id)arg1;
- (void)setInputLocal:(id)arg1;
- (void)setInputPerceptual:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
