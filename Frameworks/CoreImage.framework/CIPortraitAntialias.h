
@interface CIPortraitAntialias : CIFilter {
    NSNumber * inputAntiAliasRadius;
    CIImage * inputImage;
    NSNumber * inputLumaNoiseAmpl;
    NSNumber * inputLumaNoiseModelCoeff;
    NSNumber * inputMaxBlurInPixels;
    CIVector * inputRect;
    NSNumber * inputScale;
    CIVector * inputSensorSize;
}

@property (nonatomic, copy) NSNumber *inputAntiAliasRadius;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLumaNoiseAmpl;
@property (nonatomic, copy) NSNumber *inputLumaNoiseModelCoeff;
@property (nonatomic, copy) NSNumber *inputMaxBlurInPixels;
@property (nonatomic, copy) CIVector *inputRect;
@property (nonatomic, copy) NSNumber *inputScale;
@property (nonatomic, copy) CIVector *inputSensorSize;

- (id)_kernel:(bool)arg1 withAddedNoise:(bool)arg2;
- (id)_noiseGeneratorKernel;
- (id)inputAntiAliasRadius;
- (id)inputImage;
- (id)inputLumaNoiseAmpl;
- (id)inputLumaNoiseModelCoeff;
- (id)inputMaxBlurInPixels;
- (id)inputRect;
- (id)inputScale;
- (id)inputSensorSize;
- (id)noiseColorKernel;
- (id)outputImage;
- (id)outputImage:(id)arg1 horizontal:(bool)arg2;
- (void)setInputAntiAliasRadius:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaNoiseAmpl:(id)arg1;
- (void)setInputLumaNoiseModelCoeff:(id)arg1;
- (void)setInputMaxBlurInPixels:(id)arg1;
- (void)setInputRect:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputSensorSize:(id)arg1;

@end
