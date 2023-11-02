
@interface SBFWakeAnimationSettings : PTSettings {
    double  _awakeColorBrightness;
    double  _awakeDateAlpha;
    SBFAnimationSettings * _awakeWallpaperFilterSettings;
    double  _backlightFadeDuration;
    SBFAnimationSettings * _contentWakeSettings;
    double  _sleepColorBrightness;
    SBFAnimationSettings * _sleepWallpaperFilterSettings;
    double  _speedMultiplierForLiftToWake;
    double  _speedMultiplierForWake;
}

@property (nonatomic) double awakeColorBrightness;
@property (nonatomic) double awakeDateAlpha;
@property (nonatomic, retain) SBFAnimationSettings *awakeWallpaperFilterSettings;
@property (nonatomic) double backlightFadeDuration;
@property (nonatomic, retain) SBFAnimationSettings *contentWakeSettings;
@property (nonatomic) double sleepColorBrightness;
@property (nonatomic, retain) SBFAnimationSettings *sleepWallpaperFilterSettings;
@property (nonatomic) double speedMultiplierForLiftToWake;
@property (nonatomic) double speedMultiplierForWake;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)awakeColorBrightness;
- (double)awakeDateAlpha;
- (id)awakeWallpaperFilterSettings;
- (double)backlightFadeDuration;
- (id)contentWakeSettings;
- (void)setAwakeColorBrightness:(double)arg1;
- (void)setAwakeDateAlpha:(double)arg1;
- (void)setAwakeWallpaperFilterSettings:(id)arg1;
- (void)setBacklightFadeDuration:(double)arg1;
- (void)setContentWakeSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setSleepColorBrightness:(double)arg1;
- (void)setSleepWallpaperFilterSettings:(id)arg1;
- (void)setSpeedMultiplierForLiftToWake:(double)arg1;
- (void)setSpeedMultiplierForWake:(double)arg1;
- (double)sleepColorBrightness;
- (id)sleepWallpaperFilterSettings;
- (double)speedMultiplierForLiftToWake;
- (double)speedMultiplierForWake;

@end
