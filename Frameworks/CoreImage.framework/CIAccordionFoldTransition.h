
@interface CIAccordionFoldTransition : CIFilter {
    NSNumber * inputBottomHeight;
    NSNumber * inputFoldShadowAmount;
    CIImage * inputImage;
    NSNumber * inputNumberOfFolds;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

@property (nonatomic, retain) NSNumber *inputBottomHeight;
@property (nonatomic, retain) NSNumber *inputFoldShadowAmount;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputNumberOfFolds;
@property (nonatomic, retain) CIImage *inputTargetImage;
@property (nonatomic, retain) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelMix;
- (id)_kernelWarpS;
- (id)_kernelWarpT;
- (id)inputBottomHeight;
- (id)inputFoldShadowAmount;
- (id)inputImage;
- (id)inputNumberOfFolds;
- (id)inputTargetImage;
- (id)inputTime;
- (id)outputImage;
- (void)setInputBottomHeight:(id)arg1;
- (void)setInputFoldShadowAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputNumberOfFolds:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;

@end
