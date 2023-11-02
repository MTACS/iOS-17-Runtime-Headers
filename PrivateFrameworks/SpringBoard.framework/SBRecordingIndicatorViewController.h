
@interface SBRecordingIndicatorViewController : UIViewController {
    long long  _activeInterfaceOrientation;
    UIViewPropertyAnimator * _animatorFastFade;
    UIViewPropertyAnimator * _animatorScaleToNormal;
    UIViewPropertyAnimator * _animatorScaleToOverscale;
    UIViewPropertyAnimator * _animatorScaleToRest;
    UIViewPropertyAnimator * _animatorScaleToZero;
    UIViewPropertyAnimator * _animatorSpringToOff;
    UIViewPropertyAnimator * _animatorSpringToOn;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    CALayer * _contentLayer;
    CAContext * _context;
    <SBRecordingIndicatorViewControllerDelegate> * _delegate;
    UIColor * _indicatorColor;
    UIView * _indicatorContainerView;
    unsigned long long  _indicatorState;
    SBRecordingIndicatorView * _indicatorView;
    unsigned long long  _location;
    CALayer * _rootLayer;
    double  _sideOffset;
    double  _size;
    double  _topOffset;
}

@property (nonatomic) long long activeInterfaceOrientation;
@property (nonatomic) <SBRecordingIndicatorViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIColor *indicatorColor;
@property (nonatomic, readonly) UIView *indicatorContainerView;
@property (nonatomic, readonly) unsigned long long indicatorState;
@property (nonatomic, readonly) SBRecordingIndicatorView *indicatorView;
@property (nonatomic, readonly) unsigned long long location;

- (void).cxx_destruct;
- (void)_addBlurFilterToLayer:(id)arg1 withBlurRadius:(double)arg2;
- (double)_alphaForStateIdleOn;
- (void)_animateLayer:(id)arg1 forKeyPath:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 persistingToValue:(bool)arg5 duration:(double)arg6;
- (bool)_canShowWhileLocked;
- (void)_configureRootLayer;
- (bool)_interchangesViewAndLayer;
- (long long)_overrideWindowActiveInterfaceOrientation;
- (bool)_screenTypeForcesFastFadeAnimations;
- (bool)_shouldForceViewToShowForBacklightLuminance:(long long)arg1;
- (bool)_shouldForceViewToShowForCurrentBacklightLuminance;
- (double)_sizeForStateIdleOn;
- (id)_springAnimationForKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4;
- (void)_stopAllAnimations;
- (void)_updateIndicatorForBacklightLuminance:(long long)arg1 previousBacklightLuminance:(long long)arg2;
- (void)_updateIndicatorLayerSize:(double)arg1 opacity:(double)arg2;
- (void)_updateIndicatorLayerWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateIndicatorViewSize:(double)arg1 alpha:(double)arg2;
- (void)_updateIndicatorVisibilityWithSpringAnimation:(bool)arg1;
- (void)_updateToOrientation:(long long)arg1;
- (bool)_usesSpringAnimations;
- (long long)activeInterfaceOrientation;
- (void)calculateInitialIndicatorPositionAndSize;
- (id)delegate;
- (id)indicatorColor;
- (id)indicatorContainerView;
- (unsigned long long)indicatorState;
- (id)indicatorView;
- (id)initForLocation:(unsigned long long)arg1;
- (unsigned long long)location;
- (void)setActiveInterfaceOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndicatorColor:(id)arg1;
- (void)setIndicatorState:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateIndicatorShape:(unsigned long long)arg1;
- (void)updateIndicatorVisibility:(bool)arg1;
- (void)updateIndicatorVisibilityWithFastFadeAnimation:(bool)arg1;

@end
