
@interface BKUIPearlJindoEnrollViewController : BKUIPearlEnrollViewController <BKJindoPresentableObserving, BKUIAlertControllerListener, BKUIPearlEnrollViewStateTransitionDelegate, BNPresentableObserving> {
    NSLayoutConstraint * _bottomContainerTopConstraint;
    UIView * _hostedTutorialMicaView;
    NSLayoutConstraint * _hostedTutorialMicaViewCenterConstraint;
    bool  _jindoNeedsResignActiveRevoke;
    BKUIHostedJindoPresentable * _presentable;
    <UITraitChangeRegistration> * _traitChangeRegistration;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomContainerTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *hostedTutorialMicaView;
@property (nonatomic, retain) NSLayoutConstraint *hostedTutorialMicaViewCenterConstraint;
@property (nonatomic) bool jindoNeedsResignActiveRevoke;
@property (nonatomic, retain) BKUIHostedJindoPresentable *presentable;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UITraitChangeRegistration> *traitChangeRegistration;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_fullEnrollViewSize;
- (void)_handleEnrollStateOnAppear;
- (bool)_isDarkMode;
- (id)_jindoBottomContainer;
- (void)_postBannerToDestinationWithInitialStateCollapsed:(bool)arg1;
- (void)_postBannerToDestinationWithInitialStateCollapsed:(bool)arg1 enrollViewStateConfiguration:(id /* block */)arg2;
- (void)_prepEnrollViewAndEnrollTutorialMica;
- (void)_sceneDidActivate:(id)arg1;
- (void)_sceneWillDeactivate:(id)arg1;
- (void)_setupUI;
- (id)_startOverTitleForState:(int)arg1;
- (void)alertActionTappedFromAlert;
- (void)animateToSuccessCompletionLayout:(long long)arg1;
- (id)bottomContainerTopConstraint;
- (id)buttonTray;
- (void)didBecomeActive:(id)arg1;
- (void)didChangeActiveLayoutMode:(id)arg1;
- (id)escapeHatchButton;
- (id)escapeHatchButton:(id)arg1 state:(int)arg2;
- (id)hostedTutorialMicaView;
- (id)hostedTutorialMicaViewCenterConstraint;
- (bool)jindoNeedsResignActiveRevoke;
- (void)navigateToMidFlowPeriocularSplashScreenWithPrepareAction:(id /* block */)arg1 completionAction:(id /* block */)arg2;
- (id)nextStateButton;
- (id)nextStateButtonContainer;
- (void)nextStateButtonPressed:(id)arg1;
- (void)prepareBottomContainerForAnimationToState:(int)arg1 fromState:(int)arg2 subState:(int)arg3 advancing:(bool)arg4;
- (void)prepareForAnimationToState:(int)arg1 fromState:(int)arg2 subState:(int)arg3 advancing:(bool)arg4;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentable;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (id)retryMatchOperationButton;
- (void)setBottomContainerTopConstraint:(id)arg1;
- (void)setHostedTutorialMicaView:(id)arg1;
- (void)setHostedTutorialMicaViewCenterConstraint:(id)arg1;
- (void)setJindoNeedsResignActiveRevoke:(bool)arg1;
- (void)setPresentable:(id)arg1;
- (void)setTraitChangeRegistration:(id)arg1;
- (id)startOverButtonForState:(int)arg1;
- (void)stateTransitionDidComplete;
- (id)traitChangeRegistration;
- (void)transitionToSuccessFromPeriocularSplash;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive:(id)arg1;

@end
