
@interface SBRingerHardwareButtonSettings : PTSettings {
    double  _longPressTime;
    double  _longPressTimeWhenSuppressed;
    long long  _viewObstructionEligibility;
}

@property (nonatomic) double longPressTime;
@property (nonatomic) double longPressTimeWhenSuppressed;
@property (nonatomic, copy) SBRingerButtonParameters *ringerButtonParameters;
@property (nonatomic) long long viewObstructionEligibility;

+ (id)settingsControllerModule;

- (double)longPressTime;
- (double)longPressTimeWhenSuppressed;
- (id)ringerButtonParameters;
- (void)setDefaultValues;
- (void)setLongPressTime:(double)arg1;
- (void)setLongPressTimeWhenSuppressed:(double)arg1;
- (void)setRingerButtonParameters:(id)arg1;
- (void)setViewObstructionEligibility:(long long)arg1;
- (long long)viewObstructionEligibility;

@end
