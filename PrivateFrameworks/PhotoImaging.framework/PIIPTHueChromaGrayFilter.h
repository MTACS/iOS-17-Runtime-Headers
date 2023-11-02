
@interface PIIPTHueChromaGrayFilter : PIIPTHueChromaFilter {
    NSNumber * _inputChromaMax;
    CIImage * _inputImage;
    NSNumber * _inputLumaRange;
    NSNumber * _inputLumaTarget;
}

@property (nonatomic, retain) NSNumber *inputChromaMax;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputLumaRange;
@property (nonatomic, retain) NSNumber *inputLumaTarget;

+ (id)filterLumaKernel;

- (void).cxx_destruct;
- (id)inputChromaMax;
- (id)inputImage;
- (id)inputLumaRange;
- (id)inputLumaTarget;
- (id)outputImage;
- (void)setInputChromaMax:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaRange:(id)arg1;
- (void)setInputLumaTarget:(id)arg1;

@end
