
@interface RedPupilLocalizer : CIFilter {
    CIVector * inputAxisLong;
    CIVector * inputAxisShort;
    NSNumber * inputClip;
    NSNumber * inputDebug;
    NSNumber * inputDecay;
    CIVector * inputExtent;
    NSNumber * inputGamma;
    CIImage * inputImage;
    NSNumber * inputIterations;
    NSNumber * inputLocalizationRadius;
    CIVector * inputPupilCenter;
    NSNumber * inputScale;
    NSNumber * inputSearchAxisLong;
    NSNumber * inputSearchAxisShort;
}

@property (nonatomic, retain) CIVector *inputAxisLong;
@property (nonatomic, retain) CIVector *inputAxisShort;
@property (nonatomic, retain) NSNumber *inputClip;
@property (nonatomic, retain) NSNumber *inputDebug;
@property (nonatomic, retain) NSNumber *inputDecay;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) NSNumber *inputGamma;
@property (nonatomic, retain) NSNumber *inputIterations;
@property (nonatomic, retain) NSNumber *inputLocalizationRadius;
@property (nonatomic, retain) CIVector *inputPupilCenter;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) NSNumber *inputSearchAxisLong;
@property (nonatomic, retain) NSNumber *inputSearchAxisShort;

- (id)inputAxisLong;
- (id)inputAxisShort;
- (id)inputClip;
- (id)inputDebug;
- (id)inputDecay;
- (id)inputExtent;
- (id)inputGamma;
- (id)inputIterations;
- (id)inputLocalizationRadius;
- (id)inputPupilCenter;
- (id)inputScale;
- (id)inputSearchAxisLong;
- (id)inputSearchAxisShort;
- (id)outputImage;
- (void)setInputAxisLong:(id)arg1;
- (void)setInputAxisShort:(id)arg1;
- (void)setInputClip:(id)arg1;
- (void)setInputDebug:(id)arg1;
- (void)setInputDecay:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputGamma:(id)arg1;
- (void)setInputIterations:(id)arg1;
- (void)setInputLocalizationRadius:(id)arg1;
- (void)setInputPupilCenter:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputSearchAxisLong:(id)arg1;
- (void)setInputSearchAxisShort:(id)arg1;

@end
