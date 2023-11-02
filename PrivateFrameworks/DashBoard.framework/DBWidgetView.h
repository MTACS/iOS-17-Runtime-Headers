
@interface DBWidgetView : UIView <CARSessionCommandObserving> {
    UIView * _contentView;
    DBEnvironmentConfiguration * _environmentConfiguration;
    <DBWidgetViewFocusEnabledProviding> * _focusEnabledProvider;
    NSTimer * _focusFadeTimer;
    bool  _focusFaded;
    DBWidgetFocusRingView * _focusRingView;
    UIView * _highContrastBackgroundColorView;
    _TtC9DashBoard22DBDashboardPlatterView * _platterView;
    MTShadowView * _shadowView;
}

@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DBEnvironmentConfiguration *environmentConfiguration;
@property (nonatomic) <DBWidgetViewFocusEnabledProviding> *focusEnabledProvider;
@property (nonatomic, retain) NSTimer *focusFadeTimer;
@property (nonatomic) bool focusFaded;
@property (nonatomic, retain) DBWidgetFocusRingView *focusRingView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highContrastBackgroundColorView;
@property (nonatomic, retain) _TtC9DashBoard22DBDashboardPlatterView *platterView;
@property (nonatomic, retain) MTShadowView *shadowView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canFade;
- (void)_evaluateFocusFade;
- (void)_fadeFocusRing;
- (void)_startFadeTimerIfNecessary;
- (void)_unfadeFocusRing;
- (void)_wheelChangedWithEvent:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (id)contentView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)environmentConfiguration;
- (id)focusEnabledProvider;
- (id)focusFadeTimer;
- (bool)focusFaded;
- (id)focusRingView;
- (id)highContrastBackgroundColorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 focusEnabledProvider:(id)arg2 environmentConfiguration:(id)arg3;
- (void)layoutSubviews;
- (id)platterView;
- (void)session:(id)arg1 didUpdateNightMode:(bool)arg2;
- (void)setContentView:(id)arg1;
- (void)setEnvironmentConfiguration:(id)arg1;
- (void)setFocusEnabledProvider:(id)arg1;
- (void)setFocusFadeTimer:(id)arg1;
- (void)setFocusFaded:(bool)arg1;
- (void)setFocusRingView:(id)arg1;
- (void)setHighContrastBackgroundColorView:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (id)shadowView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAppearanceForWallpaper;

@end
