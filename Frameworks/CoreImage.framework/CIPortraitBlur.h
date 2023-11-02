
@interface CIPortraitBlur : CIFilter {
    NSNumber * inputAperture;
    CIImage * inputBlurmapImage;
    NSNumber * inputDraftMode;
    CIImage * inputImage;
    NSNumber * inputLumaNoiseScale;
    CIImage * inputMatteImage;
    NSNumber * inputScale;
    NSString * inputShape;
    NSDictionary * inputTuningParameters;
}

@property (nonatomic, copy) NSNumber *inputAperture;
@property (retain) CIImage *inputBlurmapImage;
@property (nonatomic, retain) NSNumber *inputDraftMode;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLumaNoiseScale;
@property (retain) CIImage *inputMatteImage;
@property (nonatomic, copy) NSNumber *inputScale;
@property (nonatomic, retain) NSString *inputShape;
@property (nonatomic, retain) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelMetal;
- (id)_kernelWithShapesMetal;
- (id)_kernelsWithShapes;
- (id)_ourBlendKernel;
- (id)_ourBlendKernelMetal;
- (id)inputAperture;
- (id)inputBlurmapImage;
- (id)inputDraftMode;
- (id)inputImage;
- (id)inputLumaNoiseScale;
- (id)inputMatteImage;
- (id)inputScale;
- (id)inputShape;
- (id)inputTuningParameters;
- (id)outputImage;
- (id)outputImage:(bool)arg1;
- (id)outputImageV2;
- (id)outputImageV3;
- (void)setInputAperture:(id)arg1;
- (void)setInputBlurmapImage:(id)arg1;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaNoiseScale:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputShape:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
