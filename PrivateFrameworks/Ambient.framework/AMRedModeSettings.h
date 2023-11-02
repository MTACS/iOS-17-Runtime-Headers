
@interface AMRedModeSettings : PTSettings {
    double  _offLuxThreshold;
    double  _onLuxThreshold;
}

@property (nonatomic) double offLuxThreshold;
@property (nonatomic) double onLuxThreshold;

+ (id)settingsControllerModule;

- (double)offLuxThreshold;
- (double)onLuxThreshold;
- (void)setDefaultValues;
- (void)setOffLuxThreshold:(double)arg1;
- (void)setOnLuxThreshold:(double)arg1;

@end
