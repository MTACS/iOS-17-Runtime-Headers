
@interface SBPIPStashVisualSettings : PTSettings {
    double  _completeBlurTransition;
    SBPIPStashMaterialSettings * _darkModeMaterialSettings;
    SBPIPStashMaterialSettings * _lightModeMaterialSettings;
    double  _startBlurTransition;
    long long  _userInterfaceStyle;
}

@property (nonatomic) double completeBlurTransition;
@property (nonatomic, retain) SBPIPStashMaterialSettings *darkModeMaterialSettings;
@property (nonatomic, retain) SBPIPStashMaterialSettings *lightModeMaterialSettings;
@property (nonatomic) double startBlurTransition;
@property (nonatomic) long long userInterfaceStyle;

+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)completeBlurTransition;
- (id)darkModeMaterialSettings;
- (id)lightModeMaterialSettings;
- (id)materialSettingsForUserInterfaceStyle:(long long)arg1;
- (void)setCompleteBlurTransition:(double)arg1;
- (void)setDarkModeMaterialSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setLightModeMaterialSettings:(id)arg1;
- (void)setStartBlurTransition:(double)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (double)startBlurTransition;
- (long long)userInterfaceStyle;

@end
