
@interface CIPercentileRed : CIFilter {
    NSNumber * inputClip;
    NSNumber * inputCount;
    NSNumber * inputHard;
    CIImage * inputImage;
    NSNumber * inputNormalize;
    NSNumber * inputPercentile;
    NSNumber * inputScale;
}

@property (nonatomic, retain) NSNumber *inputClip;
@property (nonatomic, retain) NSNumber *inputCount;
@property (nonatomic, retain) NSNumber *inputHard;
@property (nonatomic, retain) NSNumber *inputNormalize;
@property (nonatomic, retain) NSNumber *inputPercentile;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (id)inputClip;
- (id)inputCount;
- (id)inputHard;
- (id)inputNormalize;
- (id)inputPercentile;
- (id)inputScale;
- (id)outputImage;
- (void)setInputClip:(id)arg1;
- (void)setInputCount:(id)arg1;
- (void)setInputHard:(id)arg1;
- (void)setInputNormalize:(id)arg1;
- (void)setInputPercentile:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
