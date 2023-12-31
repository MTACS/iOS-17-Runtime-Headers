
@interface SBHomeScreenViewController : UIViewController <SBFZStackParticipantDelegate, SBFloatingDockControllerObserver, SBHModalLibraryPresentationContainerViewProviding> {
    unsigned long long  _allowedInterfaceOrientations;
    NSMapTable * _appIconForceTouchControllerOrientationUpdateDeferralAssertions;
    NSMapTable * _appIconForceTouchControllerWindowLevelAssertions;
    SBWindowSceneStatusBarSettingsAssertion * _childOrPresentedStatusBarAssertion;
    bool  _disableAnimationForNextIconRotation;
    long long  _effectiveOrientation;
    bool  _homeScreenAutorotatesEvenWhenIconIsDragging;
    SBFloatingDockBehaviorAssertion * _homeScreenFloatingDockAssertion;
    bool  _iconContentHidden;
    UIView * _iconContentView;
    SBIconController * _iconController;
    SBHIconManager * _iconManager;
    NSMutableSet * _iconRotationPreventionReasons;
    long long  _orientation;
    bool  _performedInitialLayout;
    unsigned long long  _possibleInterfaceOrientations;
    SBHomeScreenReturnToSpotlightPolicy * _returnToSpotlightPolicy;
    bool  _rotating;
    SBUIController * _userInterfaceController;
    SBFloatingDockBehaviorAssertion * _widgetEditFloatingDockAssertion;
    <BSInvalidatable> * _widgetEditViewControllerOrientationUpdateDeferralAssertion;
    SBFZStackParticipant * _zStackParticipant;
}

@property (nonatomic) unsigned long long allowedInterfaceOrientations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long effectiveOrientation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homeScreenAutorotatesEvenWhenIconIsDragging;
@property (nonatomic, retain) SBFloatingDockBehaviorAssertion *homeScreenFloatingDockAssertion;
@property (getter=isIconContentHidden, nonatomic) bool iconContentHidden;
@property (nonatomic, readonly) UIView *iconContentView;
@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic, readonly) SBHIconManager *iconManager;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long orientation;
@property (getter=hasPerformedInitialLayout, nonatomic) bool performedInitialLayout;
@property (nonatomic) unsigned long long possibleInterfaceOrientations;
@property (nonatomic, readonly) SBHomeScreenReturnToSpotlightPolicy *returnToSpotlightPolicy;
@property (getter=isRotating, nonatomic) bool rotating;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBUIController *userInterfaceController;
@property (nonatomic, retain) SBFloatingDockBehaviorAssertion *widgetEditFloatingDockAssertion;
@property (nonatomic, retain) <BSInvalidatable> *widgetEditViewControllerOrientationUpdateDeferralAssertion;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;

- (void).cxx_destruct;
- (void)_acquireFloatingDockBehaviorAssertionIfNecessaryForFloatingDockController:(id)arg1;
- (void)_acquireForceTouchOrientationUpdateDeferralAssertionForIconView:(id)arg1;
- (void)_acquireForceTouchWindowLevelAssertionForIconView:(id)arg1;
- (void)_animateTransitionToSize:(struct CGSize { double x1; double x2; })arg1 andInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (void)_appIconForceTouchControllerDidDismissNotification:(id)arg1;
- (void)_appIconForceTouchControllerWillPresentNotification:(id)arg1;
- (id)_autorotationPreventionReasons;
- (void)_beginAppearanceTransitionForChildViewControllersToVisible:(bool)arg1 animated:(bool)arg2;
- (void)_cleanupAfterTransitionToSize:(struct CGSize { double x1; double x2; })arg1 fromInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (void)_dismissAllIconForceTouchControllersDidFire:(id)arg1;
- (void)_endAppearanceTransitionForChildViewControllersToVisible:(bool)arg1;
- (id)_homeScreenView;
- (id)_iconContentView;
- (void)_iconEditingDidChange:(id)arg1;
- (void)_performInitialLayoutWithOrientation:(long long)arg1;
- (void)_prepareForTransitionToSize:(struct CGSize { double x1; double x2; })arg1 andInterfaceOrientation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)_relinquishForceTouchOrientationUpdateDeferralAssertionForIconView:(id)arg1;
- (void)_relinquishForceTouchWindowLevelAssertionForIconView:(id)arg1;
- (void)_updateIconContentViewOrientationAndLayoutIfNeeded;
- (void)_widgetEditViewDidDisappear:(id)arg1;
- (void)_widgetEditViewDidDisappearImplementation;
- (void)_widgetEditViewWillAppear:(id)arg1;
- (unsigned long long)allowedInterfaceOrientations;
- (bool)canBecomeFirstResponder;
- (id)containerViewControllerForPresentingFromTodayViewControllerAllowingCoverSheet:(bool)arg1;
- (id)containerViewForModalLibraryPresenter:(id)arg1;
- (id)containerViewForPresentingContextMenuForIconView:(id)arg1;
- (void)dealloc;
- (void)disableAnimationForNextIconRotation;
- (long long)effectiveOrientation;
- (void)floatingDockControllerDidRegister:(id)arg1;
- (bool)hasPerformedInitialLayout;
- (bool)homeScreenAutorotatesEvenWhenIconIsDragging;
- (id)homeScreenFloatingDockAssertion;
- (id)iconContentView;
- (id)iconController;
- (id)iconManager;
- (id)initWithIconController:(id)arg1 userInterfaceController:(id)arg2;
- (bool)isIconContentHidden;
- (bool)isRotating;
- (id)legibilitySettings;
- (void)loadView;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (long long)orientation;
- (unsigned long long)possibleInterfaceOrientations;
- (id)returnToSpotlightPolicy;
- (void)setAllowIconRotation:(bool)arg1 forReason:(id)arg2;
- (void)setAllowedInterfaceOrientations:(unsigned long long)arg1;
- (void)setEffectiveOrientation:(long long)arg1;
- (void)setHomeScreenAutorotatesEvenWhenIconIsDragging:(bool)arg1;
- (void)setHomeScreenFloatingDockAssertion:(id)arg1;
- (void)setIconContentHidden:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)setOrientation:(long long)arg1;
- (void)setPerformedInitialLayout:(bool)arg1;
- (void)setPossibleInterfaceOrientations:(unsigned long long)arg1;
- (void)setRotating:(bool)arg1;
- (void)setWidgetEditFloatingDockAssertion:(id)arg1;
- (void)setWidgetEditViewControllerOrientationUpdateDeferralAssertion:(id)arg1;
- (void)setZStackParticipant:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)userInterfaceController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)widgetEditFloatingDockAssertion;
- (id)widgetEditViewControllerOrientationUpdateDeferralAssertion;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
