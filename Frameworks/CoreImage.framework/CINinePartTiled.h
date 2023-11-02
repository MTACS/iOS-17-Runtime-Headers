
@interface CINinePartTiled : CIFilter {
    CIVector * inputBreakpoint0;
    CIVector * inputBreakpoint1;
    NSNumber * inputFlipYTiles;
    CIVector * inputGrowAmount;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIVector *inputBreakpoint0;
@property (nonatomic, retain) CIVector *inputBreakpoint1;
@property (nonatomic, retain) NSNumber *inputFlipYTiles;
@property (nonatomic, retain) CIVector *inputGrowAmount;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernelAlt;
- (id)inputBreakpoint0;
- (id)inputBreakpoint1;
- (id)inputFlipYTiles;
- (id)inputGrowAmount;
- (id)inputImage;
- (id)outputImage;
- (void)setInputBreakpoint0:(id)arg1;
- (void)setInputBreakpoint1:(id)arg1;
- (void)setInputFlipYTiles:(id)arg1;
- (void)setInputGrowAmount:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
