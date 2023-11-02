
@interface NUMeteorGainMapFilter : CIFilter {
    NSNumber * _inputGain;
    CIImage * _inputImage;
}

@property (retain) NSNumber *inputGain;
@property (retain) CIImage *inputImage;

+ (id)gainMapKernel;

- (void).cxx_destruct;
- (id)inputGain;
- (id)inputImage;
- (id)outputImage;
- (void)setInputGain:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
