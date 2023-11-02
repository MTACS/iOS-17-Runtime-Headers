
@interface PIIPTHueChromaColorFilter : PIIPTHueChromaFilter {
    NSNumber * _inputChromaMin;
    NSNumber * _inputHueIsNormalized;
    NSNumber * _inputHueRange;
    NSNumber * _inputHueTarget;
    CIImage * _inputImage;
}

@property (nonatomic, retain) NSNumber *inputChromaMin;
@property (nonatomic, retain) NSNumber *inputHueIsNormalized;
@property (nonatomic, retain) NSNumber *inputHueRange;
@property (nonatomic, retain) NSNumber *inputHueTarget;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)filterHueKernel;

- (void).cxx_destruct;
- (id)inputChromaMin;
- (id)inputHueIsNormalized;
- (id)inputHueRange;
- (id)inputHueTarget;
- (id)inputImage;
- (id)outputImage;
- (void)setInputChromaMin:(id)arg1;
- (void)setInputHueIsNormalized:(id)arg1;
- (void)setInputHueRange:(id)arg1;
- (void)setInputHueTarget:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
