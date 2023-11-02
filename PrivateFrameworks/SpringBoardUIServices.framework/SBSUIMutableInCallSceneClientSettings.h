
@interface SBSUIMutableInCallSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (getter=isCallConnected, nonatomic) bool callConnected;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expanseHUDDodgingInsets;
@property (nonatomic, copy) NSSet *preferredBackgroundActivitiesToSuppress;
@property (nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic) unsigned long long preferredStatusBarStyleOverridesToSuppress;
@property (nonatomic) bool prefersBannersHiddenFromClonedDisplay;
@property (nonatomic) bool prefersHiddenWhenDismissed;
@property (nonatomic) bool shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic) bool shouldNeverBeShownWhenLaunchingFaceTime;
@property (nonatomic) bool supportsDeviceLockActions;
@property (nonatomic) bool transientOverlayHomeIndicatorAutoHidden;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expanseHUDDodgingInsets;
- (bool)homeIndicatorAutoHidden;
- (bool)isCallConnected;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)preferredBackgroundActivitiesToSuppress;
- (unsigned long long)preferredHardwareButtonEventTypes;
- (unsigned long long)preferredStatusBarStyleOverridesToSuppress;
- (bool)prefersBannersHiddenFromClonedDisplay;
- (bool)prefersHiddenWhenDismissed;
- (void)setCallConnected:(bool)arg1;
- (void)setExpanseHUDDodgingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHomeIndicatorAutoHidden:(bool)arg1;
- (void)setPreferredBackgroundActivitiesToSuppress:(id)arg1;
- (void)setPreferredHardwareButtonEventTypes:(unsigned long long)arg1;
- (void)setPreferredStatusBarStyleOverridesToSuppress:(unsigned long long)arg1;
- (void)setPrefersBannersHiddenFromClonedDisplay:(bool)arg1;
- (void)setPrefersHiddenWhenDismissed:(bool)arg1;
- (void)setShouldBecomeVisibleWhenWakingDisplay:(bool)arg1;
- (void)setShouldNeverBeShownWhenLaunchingFaceTime:(bool)arg1;
- (void)setSupportsDeviceLockActions:(bool)arg1;
- (void)setTransientOverlayHomeIndicatorAutoHidden:(bool)arg1;
- (bool)shouldBecomeVisibleWhenWakingDisplay;
- (bool)shouldNeverBeShownWhenLaunchingFaceTime;
- (bool)supportsDeviceLockActions;
- (bool)transientOverlayHomeIndicatorAutoHidden;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
