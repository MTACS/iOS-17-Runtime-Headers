
@interface CIDisplacementDistortion : CIFilter {
    CIImage * inputDisplacementImage;
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, retain) CIImage *inputDisplacementImage;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (id)_CIDisplaceFromImage;
- (id)inputDisplacementImage;
- (id)inputImage;
- (id)inputScale;
- (id)outputImage;
- (void)setInputDisplacementImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
