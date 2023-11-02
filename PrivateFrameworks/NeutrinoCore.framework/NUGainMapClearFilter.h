
@interface NUGainMapClearFilter : CIFilter {
    CIImage * _inputGainMap;
    NSNumber * _inputInvertMatte;
    CIImage * _inputMatte;
}

@property (nonatomic, retain) CIImage *inputGainMap;
@property (nonatomic, retain) NSNumber *inputInvertMatte;
@property (nonatomic, retain) CIImage *inputMatte;

- (void).cxx_destruct;
- (id)inputGainMap;
- (id)inputInvertMatte;
- (id)inputMatte;
- (id)outputImage;
- (void)setInputGainMap:(id)arg1;
- (void)setInputInvertMatte:(id)arg1;
- (void)setInputMatte:(id)arg1;

@end
