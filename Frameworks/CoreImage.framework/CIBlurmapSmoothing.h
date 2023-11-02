
@interface CIBlurmapSmoothing : CIFilter {
    NSNumber * inputDraftMode;
    CIImage * inputImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (nonatomic, retain) NSNumber *inputDraftMode;
@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)_kernelH;
- (id)_kernelV;
- (id)inputDraftMode;
- (id)inputImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (id)performPass:(id)arg1 reference:(id)arg2 values:(id)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
