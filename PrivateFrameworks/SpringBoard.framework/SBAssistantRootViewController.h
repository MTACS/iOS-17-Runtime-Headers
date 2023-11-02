
@interface SBAssistantRootViewController : SBFTouchPassThroughViewController <SBFluidGestureDismissable> {
    SiriPresentationSpringBoardMainScreenViewController * _assistantViewController;
    SBFTouchPassThroughView * _clippingView;
    SBFTouchPassThroughView * _contentView;
    SBFluidDismissalState * _fluidDismissalState;
    SBFHomeGrabberSettings * _grabberSettings;
    SBHomeGrabberView * _homeAffordanceView;
    SBKeyboardHomeAffordanceAssertion * _keyboardHomeAffordanceAssertion;
    bool  _keyboardPresented;
    bool  _keyboardStashed;
    bool  _ownsHomeGesture;
    UIScreen * _screen;
    bool  _showsHomeAffordance;
}

@property (nonatomic, retain) SiriPresentationSpringBoardMainScreenViewController *assistantController;
@property (nonatomic, readonly) UIView *clippingView;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBFluidDismissalState *fluidDismissalState;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ownsHomeGesture;
@property (nonatomic) bool showsHomeAffordance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_setStatusBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)_updateHomeAffordance;
- (void)_updateKeyboardForHomeGesture;
- (id)assistantController;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)clippingView;
- (id)contentView;
- (id)fluidDismissalState;
- (id)initWithScreen:(id)arg1;
- (void)loadView;
- (bool)ownsHomeGesture;
- (void)setAssistantController:(id)arg1;
- (void)setFluidDismissalState:(id)arg1;
- (void)setHomeGrabberPointerClickDelegate:(id)arg1;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void)setOwnsHomeGesture:(bool)arg1;
- (void)setShowsHomeAffordance:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotate;
- (bool)showsHomeAffordance;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (bool)wantsFullScreenLayout;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
