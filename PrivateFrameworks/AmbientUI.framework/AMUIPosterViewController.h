
@interface AMUIPosterViewController : UIViewController <AMUIAmbientViewControlling, PRUISAmbientPosterViewControllerDelegate> {
    AMUIPosterAppearanceTransitionCoordinator * _appearanceTransitionCoordinator;
    double  _appearanceTransitionProgress;
    long long  _chromeOrientationPolicy;
    PRSPosterConfiguration * _configuration;
    long long  _contentMode;
    <AMUIPosterViewControllerDelegate> * _delegate;
    PRUISAmbientPosterViewController * _posterViewController;
    UIGestureRecognizer * _tapGestureRecognizer;
    UIView * _touchBlockingView;
}

@property (nonatomic, readonly) NSDictionary *activeConfigurationMetadata;
@property (nonatomic, retain) AMUIPosterAppearanceTransitionCoordinator *appearanceTransitionCoordinator;
@property (nonatomic) double appearanceTransitionProgress;
@property (nonatomic) long long chromeOrientationPolicy;
@property (nonatomic) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMUIPosterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveContentMode;
@property (readonly) unsigned long long hash;
@property (getter=_posterViewController, nonatomic, readonly) PRUISAmbientPosterViewController *posterViewController;
@property (readonly) Class superclass;

+ (id)suggestedInstanceIdentifiers;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_evaluateAuthenticationWithConfiguration:(id)arg1;
- (id)_posterExtensionDisplayNameWithBundleIdentifier:(id)arg1;
- (id)_posterViewController;
- (id)_snapshotController;
- (void)_triggerTapEvent:(id)arg1;
- (void)_updateStateForContentMode:(long long)arg1;
- (id)activeConfigurationMetadata;
- (void)ambientPosterViewController:(id)arg1 relinquishExtensionInstanceIdentifier:(id)arg2;
- (void)ambientPosterViewController:(id)arg1 setChromeVisibility:(bool)arg2 withAnimationSettings:(id)arg3 animationFence:(id)arg4;
- (unsigned long long)ambientPosterViewController:(id)arg1 titleAlignmentForInterfaceOrientation:(long long)arg2;
- (id)ambientPosterViewControllerRequestExtensionInstanceIdentifier:(id)arg1;
- (id)appearanceTransitionCoordinator;
- (double)appearanceTransitionProgress;
- (long long)chromeOrientationPolicy;
- (long long)contentMode;
- (id)delegate;
- (long long)effectiveContentMode;
- (bool)handleDismiss;
- (void)invalidate;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (void)setAppearanceTransitionCoordinator:(id)arg1;
- (void)setAppearanceTransitionProgress:(double)arg1;
- (void)setChromeOrientationPolicy:(long long)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (bool)updatePosterConfiguration:(id)arg1 withAnimationSettings:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
