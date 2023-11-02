
@interface SBSUIInCallSceneClientSettings : UIApplicationSceneClientSettings

@property (getter=isCallConnected, nonatomic, readonly) bool callConnected;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expanseHUDDodgingInsets;
@property (nonatomic, readonly, copy) NSSet *preferredBackgroundActivitiesToSuppress;
@property (nonatomic, readonly) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic, readonly) unsigned long long preferredStatusBarStyleOverridesToSuppress;
@property (nonatomic, readonly) bool prefersBannersHiddenFromClonedDisplay;
@property (nonatomic, readonly) bool prefersHiddenWhenDismissed;
@property (nonatomic, readonly) bool shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic, readonly) bool shouldNeverBeShownWhenLaunchingFaceTime;
@property (nonatomic, readonly) bool supportsDeviceLockActions;
@property (nonatomic, readonly) bool transientOverlayHomeIndicatorAutoHidden;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expanseHUDDodgingInsets;
- (bool)homeIndicatorAutoHidden;
- (bool)isCallConnected;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)preferredBackgroundActivitiesToSuppress;
- (unsigned long long)preferredHardwareButtonEventTypes;
- (unsigned long long)preferredStatusBarStyleOverridesToSuppress;
- (bool)prefersBannersHiddenFromClonedDisplay;
- (bool)prefersHiddenWhenDismissed;
- (bool)shouldBecomeVisibleWhenWakingDisplay;
- (bool)shouldNeverBeShownWhenLaunchingFaceTime;
- (bool)supportsDeviceLockActions;
- (bool)transientOverlayHomeIndicatorAutoHidden;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
