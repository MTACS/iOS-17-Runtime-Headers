
@interface SBHUDSettings : PTSettings {
    float  _defaultHUDPresentationAnimationDuration;
}

@property (nonatomic) float defaultHUDPresentationAnimationDuration;

+ (id)settingsControllerModule;

- (float)defaultHUDPresentationAnimationDuration;
- (void)setDefaultHUDPresentationAnimationDuration:(float)arg1;
- (void)setDefaultValues;

@end
