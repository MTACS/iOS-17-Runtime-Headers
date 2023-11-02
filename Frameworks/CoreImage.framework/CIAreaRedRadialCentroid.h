
@interface CIAreaRedRadialCentroid : CIAreaRedCentroid {
    CIImage * inputCenter;
    NSNumber * inputMinWeight;
    NSNumber * inputRadialMode;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIImage *inputCenter;
@property (nonatomic, retain) NSNumber *inputMinWeight;
@property (nonatomic, retain) NSNumber *inputRadialMode;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_kernelCenter;
- (id)_kernelDisk;
- (id)_kernelGaussian;
- (id)inputCenter;
- (id)inputMinWeight;
- (id)inputRadialMode;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputMinWeight:(id)arg1;
- (void)setInputRadialMode:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
