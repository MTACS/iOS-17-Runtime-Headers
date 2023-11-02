
@interface PISpillSuppression : CIFilter {
    NSNumber * _inputAlphaEdge;
    NSNumber * _inputAlphaThresholdLog10;
    NSNumber * _inputConstrainToAlpha;
    NSString * _inputDebugChannels;
    NSNumber * _inputDebugSpillOnly;
    NSNumber * _inputEdgeRadius;
    NSNumber * _inputEpsilonLog10;
    NSNumber * _inputErosionRadius;
    CIVector * _inputExtent;
    CIImage * _inputImage;
    NSNumber * _inputIterations;
    CIImage * _inputMatteImage;
    NSNumber * _inputRadius;
    CIImage * _inputTargetBackgroundImage;
}

@property (nonatomic, retain) NSNumber *inputAlphaEdge;
@property (nonatomic, retain) NSNumber *inputAlphaThresholdLog10;
@property (nonatomic, retain) NSNumber *inputConstrainToAlpha;
@property (nonatomic, retain) NSString *inputDebugChannels;
@property (nonatomic, retain) NSNumber *inputDebugSpillOnly;
@property (nonatomic, retain) NSNumber *inputEdgeRadius;
@property (nonatomic, retain) NSNumber *inputEpsilonLog10;
@property (nonatomic, retain) NSNumber *inputErosionRadius;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIterations;
@property (nonatomic, retain) CIImage *inputMatteImage;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) CIImage *inputTargetBackgroundImage;

+ (id)applySpillMatteKernel;
+ (id)customAttributes;
+ (id)prepareSpillMatteKernel;
+ (id)spillSuppressionKernels;

- (void).cxx_destruct;
- (id)inputAlphaEdge;
- (id)inputAlphaThresholdLog10;
- (id)inputConstrainToAlpha;
- (id)inputDebugChannels;
- (id)inputDebugSpillOnly;
- (id)inputEdgeRadius;
- (id)inputEpsilonLog10;
- (id)inputErosionRadius;
- (id)inputExtent;
- (id)inputImage;
- (id)inputIterations;
- (id)inputMatteImage;
- (id)inputRadius;
- (id)inputTargetBackgroundImage;
- (id)outputImage;
- (void)setInputAlphaEdge:(id)arg1;
- (void)setInputAlphaThresholdLog10:(id)arg1;
- (void)setInputConstrainToAlpha:(id)arg1;
- (void)setInputDebugChannels:(id)arg1;
- (void)setInputDebugSpillOnly:(id)arg1;
- (void)setInputEdgeRadius:(id)arg1;
- (void)setInputEpsilonLog10:(id)arg1;
- (void)setInputErosionRadius:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIterations:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputTargetBackgroundImage:(id)arg1;

@end
