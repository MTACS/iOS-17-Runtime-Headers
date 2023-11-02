
@interface SBPIPSettings : PTSettings {
    SBPIPFadeInOutSettings * _fadeInOutSettings;
    SBPIPFluidTransitionsSettings * _fluidTransitionsSettings;
    SBPIPInteractionSettings * _interactionSettings;
    SBPIPShadowSettings * _shadowSettings;
    SBPIPSizingSettings * _sizingSettings;
    SBPIPStashVisualSettings * _stashVisualSettings;
}

@property (nonatomic, retain) SBPIPFadeInOutSettings *fadeInOutSettings;
@property (nonatomic, retain) SBPIPFluidTransitionsSettings *fluidTransitionsSettings;
@property (nonatomic, retain) SBPIPInteractionSettings *interactionSettings;
@property (nonatomic, retain) SBPIPShadowSettings *shadowSettings;
@property (nonatomic, retain) SBPIPSizingSettings *sizingSettings;
@property (nonatomic, retain) SBPIPStashVisualSettings *stashVisualSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)fadeInOutSettings;
- (id)fluidTransitionsSettings;
- (id)interactionSettings;
- (void)setFadeInOutSettings:(id)arg1;
- (void)setFluidTransitionsSettings:(id)arg1;
- (void)setInteractionSettings:(id)arg1;
- (void)setShadowSettings:(id)arg1;
- (void)setSizingSettings:(id)arg1;
- (void)setStashVisualSettings:(id)arg1;
- (id)shadowSettings;
- (id)sizingSettings;
- (id)stashVisualSettings;

@end
