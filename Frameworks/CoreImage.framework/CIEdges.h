
@interface CIEdges : CIFilter {
    CIImage * inputImage;
    NSNumber * inputIntensity;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)_CIEdges;
- (id)inputImage;
- (id)inputIntensity;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;

@end
