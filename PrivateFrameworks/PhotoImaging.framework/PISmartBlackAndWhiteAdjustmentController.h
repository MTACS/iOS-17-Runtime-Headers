
@interface PISmartBlackAndWhiteAdjustmentController : PIAdjustmentController

@property (nonatomic) double grain;
@property (nonatomic) double hue;
@property (nonatomic) double neutral;
@property (nonatomic) double strength;
@property (nonatomic) double tone;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)attributeGrainKey;
+ (id)attributeHueKey;
+ (id)attributeNeutralGammaKey;
+ (id)attributeStrengthKey;
+ (id)attributeToneKey;
+ (id)grainKey;
+ (id)hueKey;
+ (id)inputGrainKey;
+ (id)inputHueKey;
+ (id)inputNeutralGammaKey;
+ (id)inputSeedKey;
+ (id)inputStrengthKey;
+ (id)inputToneKey;
+ (id)neutralKey;
+ (id)strengthKey;
+ (id)toneKey;

- (double)grain;
- (double)hue;
- (double)neutral;
- (void)setGrain:(double)arg1;
- (void)setHue:(double)arg1;
- (void)setNeutral:(double)arg1;
- (void)setStrength:(double)arg1;
- (void)setTone:(double)arg1;
- (double)strength;
- (double)tone;

// Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit

- (id)analyticsKeysBlocklist;
- (id)analyticsPayload;

@end
