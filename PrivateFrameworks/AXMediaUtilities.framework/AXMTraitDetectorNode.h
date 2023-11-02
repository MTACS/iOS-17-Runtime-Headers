
@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding> {
    double  _colorDistanceTheshold;
    long long  _sampleFrequency;
    bool  _shouldEvaluateColorInformation;
}

@property (nonatomic) double colorDistanceTheshold;
@property (nonatomic) long long sampleFrequency;
@property (nonatomic) bool shouldEvaluateColorInformation;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (id)_blurValueForVisionObservation:(id)arg1;
- (id)_brightnessValueForVisionObservation:(id)arg1;
- (void)_evaluateColorInformation:(id)arg1;
- (double)colorDistanceTheshold;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (void)nodeInitialize;
- (bool)requiresVisionFramework;
- (long long)sampleFrequency;
- (void)setColorDistanceTheshold:(double)arg1;
- (void)setSampleFrequency:(long long)arg1;
- (void)setShouldEvaluateColorInformation:(bool)arg1;
- (bool)shouldEvaluateColorInformation;
- (bool)validateVisionKitSoftLinkSymbols;

@end
