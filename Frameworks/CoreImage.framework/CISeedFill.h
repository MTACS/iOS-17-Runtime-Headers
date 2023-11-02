
@interface CISeedFill : CIFilter {
    CIImage * inputCenter;
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputSplat;
    NSNumber * inputThreshold;
}

@property (nonatomic, retain) CIImage *inputCenter;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) NSNumber *inputSplat;
@property (nonatomic, retain) NSNumber *inputThreshold;

- (id)inputCenter;
- (id)inputExtent;
- (id)inputSplat;
- (id)inputThreshold;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputSplat:(id)arg1;
- (void)setInputThreshold:(id)arg1;

@end
