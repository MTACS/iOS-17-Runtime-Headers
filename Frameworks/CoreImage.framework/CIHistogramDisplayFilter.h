
@interface CIHistogramDisplayFilter : CIFilter {
    NSNumber * inputHeight;
    NSNumber * inputHighLimit;
    CIImage * inputImage;
    NSNumber * inputLowLimit;
}

@property (nonatomic, retain) NSNumber *inputHeight;
@property (nonatomic, retain) NSNumber *inputHighLimit;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputLowLimit;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputHeight;
- (id)inputHighLimit;
- (id)inputImage;
- (id)inputLowLimit;
- (id)outputImage;
- (void)setInputHeight:(id)arg1;
- (void)setInputHighLimit:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLowLimit:(id)arg1;

@end
