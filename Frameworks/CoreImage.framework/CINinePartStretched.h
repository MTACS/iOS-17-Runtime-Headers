
@interface CINinePartStretched : CIFilter {
    CIVector * inputBreakpoint0;
    CIVector * inputBreakpoint1;
    CIVector * inputGrowAmount;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIVector *inputBreakpoint0;
@property (nonatomic, retain) CIVector *inputBreakpoint1;
@property (nonatomic, retain) CIVector *inputGrowAmount;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputBreakpoint0;
- (id)inputBreakpoint1;
- (id)inputGrowAmount;
- (id)inputImage;
- (id)outputImage;
- (void)setInputBreakpoint0:(id)arg1;
- (void)setInputBreakpoint1:(id)arg1;
- (void)setInputGrowAmount:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
