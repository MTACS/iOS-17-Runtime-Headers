
@interface CSVibrancySettings : PTSettings {
    bool  _boostEnabled;
    double  _minimumLuminanceDifference;
    double  _naturalEffectTypeStrength;
}

@property (nonatomic) bool boostEnabled;
@property (nonatomic) double minimumLuminanceDifference;
@property (nonatomic) double naturalEffectTypeStrength;

+ (id)settingsControllerModule;

- (bool)boostEnabled;
- (double)minimumLuminanceDifference;
- (double)naturalEffectTypeStrength;
- (void)setBoostEnabled:(bool)arg1;
- (void)setDefaultValues;
- (void)setMinimumLuminanceDifference:(double)arg1;
- (void)setNaturalEffectTypeStrength:(double)arg1;

@end
