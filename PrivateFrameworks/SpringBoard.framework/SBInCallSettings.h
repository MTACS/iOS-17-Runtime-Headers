
@interface SBInCallSettings : PTSettings {
    SBFFluidBehaviorSettings * _transientOverlayFadeInSettings;
    SBFFluidBehaviorSettings * _transientOverlayFadeOutSettings;
}

@property (nonatomic, retain) SBFFluidBehaviorSettings *transientOverlayFadeInSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *transientOverlayFadeOutSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (void)setTransientOverlayFadeInSettings:(id)arg1;
- (void)setTransientOverlayFadeOutSettings:(id)arg1;
- (id)transientOverlayFadeInSettings;
- (id)transientOverlayFadeOutSettings;

@end
