
@interface CIConvexFill : CIFilter {
    CIVector * inputAreaThresholdLoHi;
    CIImage * inputCenter;
    CIImage * inputImage;
    NSNumber * inputSplat;
    NSNumber * inputThreshold;
}

@property (nonatomic, retain) CIVector *inputAreaThresholdLoHi;
@property (nonatomic, retain) CIImage *inputCenter;
@property (nonatomic, retain) NSNumber *inputSplat;
@property (nonatomic, retain) NSNumber *inputThreshold;

- (id)inputAreaThresholdLoHi;
- (id)inputCenter;
- (id)inputSplat;
- (id)inputThreshold;
- (id)outputImage;
- (void)setInputAreaThresholdLoHi:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputSplat:(id)arg1;
- (void)setInputThreshold:(id)arg1;

@end
