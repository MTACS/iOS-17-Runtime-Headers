
@interface SBDashBoardStatusBarController : NSObject <CSStatusBarControlling> {
    SBWindowSceneStatusBarSettingsAssertion * _hideStatusBarAssertion;
    NSMutableSet * _statusBarHiddenReasons;
    SBWindowSceneStatusBarSettingsAssertion * _statusBarParametersAssertion;
    NSMutableSet * _statusBars;
    NSMapTable * _statusBarsToVisbilityAssertions;
    SBWindowSceneStatusBarManager * _windowSceneStatusBarManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *statusBarAlpha;
@property (nonatomic, readonly) _UILegibilitySettings *statusBarLegibilitySettings;
@property (nonatomic, readonly) long long statusBarStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateStatusBarsAndPartAssertions:(id /* block */)arg1;
- (void)clearStatusBarParameters;
- (id)createFakeStatusBarWithReason:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (void)destroyFakeStatusBar:(id)arg1;
- (id)effectiveStatusBarStyleRequestForAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
- (id)initWithWindowSceneStatusBarManager:(id)arg1;
- (void)setStatusBarAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
- (void)setStatusBarHidden:(bool)arg1 forReason:(id)arg2;
- (void)setStatusBarPart:(unsigned long long)arg1 hidden:(bool)arg2 animationDuration:(double)arg3;
- (id)statusBarAlpha;
- (id)statusBarLegibilitySettings;
- (long long)statusBarStyle;

@end
