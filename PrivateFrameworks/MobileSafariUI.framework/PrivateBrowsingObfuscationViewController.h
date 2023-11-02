
@interface PrivateBrowsingObfuscationViewController : UIViewController {
    UIVisualEffectView * _URLButtonBackground;
    UIToolbar * _bottomBar;
    UIVisualEffectView * _bottomBarBackground;
    UIVisualEffectView * _capsuleBackground;
    SFCapsuleNavigationBarTheme * _theme;
    UIVisualEffectView * _topBarBackground;
}

@property (nonatomic) UIVisualEffectView *URLButtonBackground;
@property (nonatomic) UIToolbar *bottomBar;
@property (nonatomic) UIVisualEffectView *capsuleBackground;
@property (nonatomic, retain) SFCapsuleNavigationBarTheme *theme;
@property (nonatomic) UIVisualEffectView *topBarBackground;

- (void).cxx_destruct;
- (id)URLButtonBackground;
- (void)_updateTheme;
- (id)bottomBar;
- (id)capsuleBackground;
- (void)setBottomBar:(id)arg1;
- (void)setCapsuleBackground:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTopBarBackground:(id)arg1;
- (void)setURLButtonBackground:(id)arg1;
- (id)theme;
- (id)topBarBackground;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
