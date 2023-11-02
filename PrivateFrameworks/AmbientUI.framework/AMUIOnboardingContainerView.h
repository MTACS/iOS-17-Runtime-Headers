
@interface AMUIOnboardingContainerView : UIView <AMUIOnboardingViewDelegate> {
    AMAmbientDefaults * _ambientDefaults;
    UIView * _animationContainerView;
    <AMUIOnboardingContainerViewDelegate> * _delegate;
    AMUIOnboardingView * _onboardingView;
    MTMaterialView * _overlayBlurMaterialView;
}

@property (nonatomic) AMAmbientDefaults *ambientDefaults;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMUIOnboardingContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureAnimationContainerViewIfNecessary;
- (void)_configureOnboardingViewIfNecessary;
- (void)_configureOverlayBlurMaterialViewIfNecessaryWithInitialWeighting:(double)arg1;
- (void)_layoutOnboardingView;
- (id)_newBlurMaterialViewWithInitialWeighting:(double)arg1 superview:(id)arg2;
- (void)_performDismissalAnimationWithCompletion:(id /* block */)arg1;
- (void)_performPresentationAnimationWithCompletion:(id /* block */)arg1;
- (id)ambientDefaults;
- (id)delegate;
- (void)layoutSubviews;
- (void)onboardingViewRequestsDismissal:(id)arg1;
- (void)performDismissalAnimation;
- (void)performPresentationAnimation;
- (void)setAmbientDefaults:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
