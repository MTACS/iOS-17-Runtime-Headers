
@interface CIBumpDistortionLinear : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputScale;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)inputScale;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
