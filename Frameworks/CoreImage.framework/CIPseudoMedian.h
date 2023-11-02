
@interface CIPseudoMedian : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputWeights;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputWeights;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputRadius;
- (id)inputWeights;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputWeights:(id)arg1;

@end
