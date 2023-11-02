
@interface AFUISiriCarPlayView : UIView <AFUISiriCarPlayBackgroundViewDelegate, AFUISiriContent, SUICOrbViewControlling> {
    AFUISiriCarPlayBackgroundView * _backgroundView;
    long long  _mode;
    UIView * _orbContainerView;
    SUICOrbView * _orbView;
    UIView * _remoteContentView;
    <AFUISiriContentDelegate> * _siriContentDelegate;
    long long  _siriSessionState;
    UIView * _siriXIndicatorView;
    CRSUIStatusBarStyleAssertion * _statusBarStyleAssertion;
    <AFUISiriViewDelegate> * _viewDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UIView *remoteContentView;
@property (nonatomic) long long siriSessionState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_SUICOrbViewModeGetDescription:(long long)arg1;
- (void)_orbHeldWithGestureRecognizer:(id)arg1;
- (void)_orbTappedWithGestureRecognizer:(id)arg1;
- (long long)_orbViewModeForCurrentSessionState;
- (void)_setupContentViews;
- (void)_updateOrbViewModeToMatchSessionState;
- (void)animateOrbViewToOffWithCompletion:(id /* block */)arg1;
- (void)backgroundView:(id)arg1 requestsCarPlayStatusBarOverride:(bool)arg2 animationSettings:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewDelegate:(id)arg2;
- (long long)mode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })orbViewRectInCarplayView;
- (id)remoteContentView;
- (void)resetOrbViewToSiriSessionState;
- (void)setAuxiliaryViewsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setContentViewsAlpha:(double)arg1;
- (void)setInputPowerLevel:(float)arg1;
- (void)setMode:(long long)arg1;
- (void)setOutputPowerLevel:(float)arg1;
- (void)setRemoteContentView:(id)arg1;
- (void)setRequestHandlingStatus:(unsigned long long)arg1;
- (void)setSiriContentDelegate:(id)arg1;
- (void)setSiriSessionState:(long long)arg1;
- (long long)siriSessionState;
- (id)siriXIndicatorView;
- (void)updateBackgroundViewMode:(long long)arg1;
- (void)updateBackgroundVisibility:(bool)arg1;

@end
