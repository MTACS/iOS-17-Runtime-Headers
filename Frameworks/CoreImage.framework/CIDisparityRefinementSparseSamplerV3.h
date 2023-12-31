
@interface CIDisparityRefinementSparseSamplerV3 : CIFilter {
    CIImage * inputImage;
    CIImage * inputPreprocImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputPreprocImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;

- (id)inputImage;
- (id)inputPreprocImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (id)sampleKernel;
- (void)setInputImage:(id)arg1;
- (void)setInputPreprocImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
