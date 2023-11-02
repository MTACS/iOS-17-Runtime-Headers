
@interface CILensModelCalculator : CIFilter {
    CIVector * inputFocusRect;
    CIImage * inputImage;
    NSNumber * inputIntrinsicMatrixFocalLength;
    CIImage * inputMinMaxImage;
    CIVector * inputOriginalSize;
    NSNumber * inputSimulatedAperture;
    NSDictionary * inputTuningParameters;
}

@property (nonatomic, copy) CIVector *inputFocusRect;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputIntrinsicMatrixFocalLength;
@property (retain) CIImage *inputMinMaxImage;
@property (nonatomic, copy) CIVector *inputOriginalSize;
@property (nonatomic, copy) NSNumber *inputSimulatedAperture;
@property (nonatomic, retain) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)cpuParams;
- (id)inputFocusRect;
- (id)inputImage;
- (id)inputIntrinsicMatrixFocalLength;
- (id)inputMinMaxImage;
- (id)inputOriginalSize;
- (id)inputSimulatedAperture;
- (id)inputTuningParameters;
- (id)kernel;
- (id)mtlKernel;
- (id)outputImage;
- (void)setInputFocusRect:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIntrinsicMatrixFocalLength:(id)arg1;
- (void)setInputMinMaxImage:(id)arg1;
- (void)setInputOriginalSize:(id)arg1;
- (void)setInputSimulatedAperture:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
