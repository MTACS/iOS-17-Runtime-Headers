
@interface CIHighlightRecovery : CIFilter {
    NSNumber * inputApertureScaling;
    NSNumber * inputDraftMode;
    CIImage * inputImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (retain) NSNumber *inputApertureScaling;
@property (nonatomic, retain) NSNumber *inputDraftMode;
@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;

- (id)inputApertureScaling;
- (id)inputDraftMode;
- (id)inputImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputApertureScaling:(id)arg1;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
