
@interface CILightTunnel : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputRotation;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputRotation;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)inputRotation;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputRotation:(id)arg1;

@end
