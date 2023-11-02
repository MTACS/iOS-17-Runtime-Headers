
@interface CIColorCube : CIFilter {
    CIImage * _cubeImage;
    NSData * inputCubeData;
    NSNumber * inputCubeDimension;
    NSNumber * inputExtrapolate;
    CIImage * inputImage;
}

@property (nonatomic, copy) NSData *inputCubeData;
@property (nonatomic, retain) NSNumber *inputCubeDimension;
@property (nonatomic, copy) NSNumber *inputExtrapolate;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (bool)_checkInputs;
- (id)_kernel;
- (id)_kernelOpaque;
- (id)_kernelOpaqueExtend;
- (id)cubeImage;
- (void)dealloc;
- (id)inputCubeData;
- (id)inputCubeDimension;
- (id)inputExtrapolate;
- (id)inputImage;
- (id)outputImage;
- (void)setInputCubeData:(id)arg1;
- (void)setInputCubeDimension:(id)arg1;
- (void)setInputExtrapolate:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
