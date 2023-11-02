
@interface SBSUIRemoteAlertSceneHostComponent : FBSSceneComponent {
    SBSRemoteAlertActivationContext * _activationContext;
    SBSRemoteAlertConfigurationContext * _configurationContext;
    NSString * _configurationIdentifier;
    <SBSUIRemoteAlertSceneHostComponentDelegate> * _delegate;
}

@property (nonatomic, copy) SBSRemoteAlertActivationContext *activationContext;
@property (nonatomic, readonly) bool allowsAlertStacking;
@property (nonatomic, readonly) bool allowsMenuButtonDismissal;
@property (getter=isAttachedToWindowedAccessory, nonatomic, readonly) bool attachedToWindowedAccessory;
@property (nonatomic, readonly, copy) NSSet *backgroundActivitiesToSuppress;
@property (nonatomic, retain) SBSRemoteAlertConfigurationContext *configurationContext;
@property (nonatomic, copy) NSString *configurationIdentifier;
@property (getter=isContentOpaque, nonatomic, readonly) bool contentOpaque;
@property (nonatomic) <SBSUIRemoteAlertSceneHostComponentDelegate> *delegate;
@property (nonatomic, readonly) double desiredAutoLockDuration;
@property (nonatomic, readonly) unsigned long long desiredHardwareButtonEvents;
@property (nonatomic, readonly) SBUIRemoteAlertIdleTimerSettings *desiredIdleTimerSettings;
@property (nonatomic, readonly) long long dismissalAnimationStyle;
@property (nonatomic, readonly) NSNumber *preferredSceneDeactivationReason;
@property (nonatomic, readonly) int preferredStatusBarVisibility;
@property (nonatomic, readonly) bool shouldDisableAlertItems;
@property (nonatomic, readonly) bool shouldDisableBanners;
@property (nonatomic, readonly) bool shouldDisableControlCenter;
@property (nonatomic, readonly) bool shouldDisableInteractiveScreenshotGesture;
@property (nonatomic, readonly) bool shouldDisableOrientationUpdates;
@property (nonatomic, readonly) bool shouldDisableReachability;
@property (nonatomic, readonly) bool shouldDisableSiri;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long swipeDismissalStyle;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } windowedAccessoryCutoutFrameInScreen;

- (void).cxx_destruct;
- (id)activationContext;
- (bool)allowsAlertStacking;
- (bool)allowsMenuButtonDismissal;
- (id)backgroundActivitiesToSuppress;
- (id)configurationContext;
- (id)configurationIdentifier;
- (id)delegate;
- (double)desiredAutoLockDuration;
- (unsigned long long)desiredHardwareButtonEvents;
- (id)desiredIdleTimerSettings;
- (void)didInvalidateForRemoteAlertServiceInvalidation;
- (void)didTransitionToAttachedToWindowedAccessory:(bool)arg1 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)dismissalAnimationStyle;
- (void)handleButtonActions:(id)arg1;
- (bool)isAttachedToWindowedAccessory;
- (bool)isContentOpaque;
- (id)preferredSceneDeactivationReason;
- (int)preferredStatusBarVisibility;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setActivationContext:(id)arg1;
- (void)setConfigurationContext:(id)arg1;
- (void)setConfigurationIdentifier:(id)arg1;
- (void)setDefaultStatusBarHeightsForWindowScene:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldDisableAlertItems;
- (bool)shouldDisableBanners;
- (bool)shouldDisableControlCenter;
- (bool)shouldDisableInteractiveScreenshotGesture;
- (bool)shouldDisableOrientationUpdates;
- (bool)shouldDisableReachability;
- (bool)shouldDisableSiri;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)swipeDismissalStyle;
- (long long)whitePointAdaptivityStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })windowedAccessoryCutoutFrameInScreen;

@end
