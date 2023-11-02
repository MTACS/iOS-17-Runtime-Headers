
@interface SBProximitySettings : SBUISettings {
    bool  _allowTouchesInJindoWhenObjectInProximity;
    bool  _colorScreenEdgeWhenObjectInProximity;
    double  _initialBacklightDebounceDuration;
    double  _nonTelephonyTouchAllowanceGracePeriodDuration;
    double  _subsequentBacklightDebounceDuration;
}

@property (nonatomic) bool allowTouchesInJindoWhenObjectInProximity;
@property (nonatomic) bool colorScreenEdgeWhenObjectInProximity;
@property (nonatomic) double initialBacklightDebounceDuration;
@property (nonatomic) double nonTelephonyTouchAllowanceGracePeriodDuration;
@property (nonatomic) double subsequentBacklightDebounceDuration;

+ (id)settingsControllerModule;

- (bool)allowTouchesInJindoWhenObjectInProximity;
- (bool)colorScreenEdgeWhenObjectInProximity;
- (double)initialBacklightDebounceDuration;
- (double)nonTelephonyTouchAllowanceGracePeriodDuration;
- (void)setAllowTouchesInJindoWhenObjectInProximity:(bool)arg1;
- (void)setColorScreenEdgeWhenObjectInProximity:(bool)arg1;
- (void)setDefaultValues;
- (void)setInitialBacklightDebounceDuration:(double)arg1;
- (void)setNonTelephonyTouchAllowanceGracePeriodDuration:(double)arg1;
- (void)setSubsequentBacklightDebounceDuration:(double)arg1;
- (double)subsequentBacklightDebounceDuration;

@end
