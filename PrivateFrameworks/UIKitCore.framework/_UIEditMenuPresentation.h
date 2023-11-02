
@interface _UIEditMenuPresentation : NSObject {
    UIEditMenuConfiguration * _activeConfiguration;
    unsigned long long  _currentState;
    <_UIEditMenuPresentationDelegate> * _delegate;
    _UIEditMenuPresentationAnimator * _dismissAnimator;
    UIMenu * _displayedMenu;
    bool  _enforcesMenuControllerLifecycle;
    _UIEditMenuPresentationAnimator * _presentAnimator;
    UIView * _sourceView;
}

@property (nonatomic, retain) UIEditMenuConfiguration *activeConfiguration;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic, readonly) <_UIEditMenuPresentationDelegate> *delegate;
@property (nonatomic, retain) _UIEditMenuPresentationAnimator *dismissAnimator;
@property (nonatomic, retain) UIMenu *displayedMenu;
@property (nonatomic) bool enforcesMenuControllerLifecycle;
@property (nonatomic, retain) _UIEditMenuPresentationAnimator *presentAnimator;
@property (nonatomic, readonly) UIView *sourceView;

- (void).cxx_destruct;
- (id)activeConfiguration;
- (void)animateFadeWithDelay:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)animateReducedMotionTransitionWithDelay:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)animateScaleDismissalWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)animateScalePresentWithDelay:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (unsigned long long)currentState;
- (id)delegate;
- (void)didTransitionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)dismissAnimator;
- (void)displayMenu:(id)arg1 configuration:(id)arg2;
- (id)displayedMenu;
- (bool)enforcesMenuControllerLifecycle;
- (void)forceEndDismissalIfNeeded;
- (void)forceEndPresentIfNeeded;
- (void)hideMenuWithReason:(long long)arg1;
- (id)initWithDelegate:(id)arg1 sourceView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuFrameInCoordinateSpace:(id)arg1;
- (id)presentAnimator;
- (void)replaceVisibleMenuWithMenu:(id)arg1 reason:(long long)arg2;
- (long long)resolvedUserInterfaceStyle;
- (void)setActiveConfiguration:(id)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setDismissAnimator:(id)arg1;
- (void)setDisplayedMenu:(id)arg1;
- (void)setEnforcesMenuControllerLifecycle:(bool)arg1;
- (void)setPresentAnimator:(id)arg1;
- (id)sourceView;
- (void)sourceViewDidUpdateFromTraitCollection:(id)arg1;
- (void)transitionWithEvent:(unsigned long long)arg1;
- (void)updateMenuPositionAnimated:(bool)arg1;

@end
