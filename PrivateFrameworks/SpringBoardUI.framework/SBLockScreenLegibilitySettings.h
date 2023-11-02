
@interface SBLockScreenLegibilitySettings : _UILegibilitySettings {
    UIColor * _backgroundColorHint;
    bool  _vibrancyDisabled;
}

@property (nonatomic, retain) UIColor *backgroundColorHint;
@property (nonatomic) bool vibrancyDisabled;

+ (id)defaultSettings;

- (void).cxx_destruct;
- (id)backgroundColorHint;
- (void)setBackgroundColorHint:(id)arg1;
- (void)setVibrancyDisabled:(bool)arg1;
- (bool)vibrancyDisabled;

@end
