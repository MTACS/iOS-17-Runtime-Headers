
@interface CIBumpDistortion : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputScale;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)inputScale;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
