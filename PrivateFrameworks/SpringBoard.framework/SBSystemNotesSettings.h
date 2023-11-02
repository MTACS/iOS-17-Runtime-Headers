
@interface SBSystemNotesSettings : PTSettings {
    SBSystemNotesAppearanceSettings * _appearanceSettings;
    SBSystemNotesSwipeMetricSettings * _cornerSwipeMetricSettings;
    SBCornerFingerPanGestureSettings * _fingerSwipeGestureTuningSettings;
    SBSystemNotesInteractionSettings * _interactionSettings;
    SBSystemNotesLaunchSettings * _launchSettings;
    SBCornerPencilPanGestureSettings * _pencilSwipeGestureTuningSettings;
    SBPIPShadowSettings * _shadowSettings;
    SBPIPStashVisualSettings * _stashVisualSettings;
}

@property (nonatomic, retain) SBSystemNotesAppearanceSettings *appearanceSettings;
@property (nonatomic, retain) SBSystemNotesSwipeMetricSettings *cornerSwipeMetricSettings;
@property (nonatomic, retain) SBCornerFingerPanGestureSettings *fingerSwipeGestureTuningSettings;
@property (nonatomic, retain) SBSystemNotesInteractionSettings *interactionSettings;
@property (nonatomic, retain) SBSystemNotesLaunchSettings *launchSettings;
@property (nonatomic, retain) SBCornerPencilPanGestureSettings *pencilSwipeGestureTuningSettings;
@property (nonatomic, retain) SBPIPShadowSettings *shadowSettings;
@property (nonatomic, retain) SBPIPStashVisualSettings *stashVisualSettings;

+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)appearanceSettings;
- (id)cornerSwipeMetricSettings;
- (id)fingerSwipeGestureTuningSettings;
- (id)interactionSettings;
- (id)launchSettings;
- (id)pencilSwipeGestureTuningSettings;
- (void)setAppearanceSettings:(id)arg1;
- (void)setCornerSwipeMetricSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setFingerSwipeGestureTuningSettings:(id)arg1;
- (void)setInteractionSettings:(id)arg1;
- (void)setLaunchSettings:(id)arg1;
- (void)setPencilSwipeGestureTuningSettings:(id)arg1;
- (void)setShadowSettings:(id)arg1;
- (void)setStashVisualSettings:(id)arg1;
- (id)shadowSettings;
- (id)stashVisualSettings;

@end
