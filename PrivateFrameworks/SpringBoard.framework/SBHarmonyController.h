
@interface SBHarmonyController : NSObject {
    CBClient * _client;
    SBHarmonySettings * _harmonySettings;
    bool  _supportsBlueLightReduction;
    bool  _supportsWhitePointAdaptation;
    long long  _suppressedBlueLightReductionEnabled;
    long long  _suppressedWhitePointAdaptationEnabled;
    NSMutableArray * _suppressionAssertions;
}

@property (nonatomic, readonly) SBHarmonySettings *harmonySettings;
@property (nonatomic, readonly) bool supportsBlueLightReduction;
@property (nonatomic, readonly) bool supportsWhitePointAdaptation;
@property (getter=isWhitePointAdaptationEnabled, nonatomic) bool whitePointAdaptationEnabled;
@property (nonatomic) long long whitePointAdaptivityStyle;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_adaptationClient;
- (id)harmonySettings;
- (id)init;
- (bool)isWhitePointAdaptationEnabled;
- (void)setWhitePointAdaptationEnabled:(bool)arg1;
- (void)setWhitePointAdaptationStrength:(float)arg1 forWhitePointAdaptivityStyle:(long long)arg2;
- (void)setWhitePointAdaptivityStyle:(long long)arg1;
- (void)setWhitePointAdaptivityStyle:(long long)arg1 animationSettings:(id)arg2;
- (void)setWhitePointAdaptivityStyleWithStyles:(id)arg1 animationSettings:(id)arg2;
- (bool)supportsBlueLightReduction;
- (bool)supportsWhitePointAdaptation;
- (void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)arg1 toWhitePointAdaptivityStyleWithStyles:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5;
- (float)whitePointAdaptationStrengthForWhitePointAdaptivityStyle:(long long)arg1;
- (long long)whitePointAdaptivityStyle;

@end
