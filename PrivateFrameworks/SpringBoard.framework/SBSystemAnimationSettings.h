
@interface SBSystemAnimationSettings : PTSettings {
    float  _assistantAnimationDuration;
    float  _assistantBottomEdgeDismissThreshold;
    float  _assistantBottomEdgeDismissVelocity;
    float  _assistantDismissAnimationDurationOverApp;
    SBEntityRemovalAnimationSettings * _entityRemovalAnimationSettings;
    SBFAnimationSettings * _slideoverDosidoAnimationSettings;
    float  _spotlightNoninteractiveAnimationDuration;
    SBFWakeAnimationSettings * _wakeAnimationSettings;
}

@property (nonatomic) float assistantAnimationDuration;
@property (nonatomic) float assistantBottomEdgeDismissThreshold;
@property (nonatomic) float assistantBottomEdgeDismissVelocity;
@property (nonatomic) float assistantDismissAnimationDurationOverApp;
@property (nonatomic, retain) SBEntityRemovalAnimationSettings *entityRemovalAnimationSettings;
@property (nonatomic, retain) SBFAnimationSettings *slideoverDosidoAnimationSettings;
@property (nonatomic) float spotlightNoninteractiveAnimationDuration;
@property (nonatomic, retain) SBFWakeAnimationSettings *wakeAnimationSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (float)assistantAnimationDuration;
- (float)assistantBottomEdgeDismissThreshold;
- (float)assistantBottomEdgeDismissVelocity;
- (float)assistantDismissAnimationDurationOverApp;
- (id)entityRemovalAnimationSettings;
- (void)setAssistantAnimationDuration:(float)arg1;
- (void)setAssistantBottomEdgeDismissThreshold:(float)arg1;
- (void)setAssistantBottomEdgeDismissVelocity:(float)arg1;
- (void)setAssistantDismissAnimationDurationOverApp:(float)arg1;
- (void)setDefaultValues;
- (void)setEntityRemovalAnimationSettings:(id)arg1;
- (void)setSlideoverDosidoAnimationSettings:(id)arg1;
- (void)setSpotlightNoninteractiveAnimationDuration:(float)arg1;
- (void)setWakeAnimationSettings:(id)arg1;
- (id)slideoverDosidoAnimationSettings;
- (float)spotlightNoninteractiveAnimationDuration;
- (id)wakeAnimationSettings;

@end
