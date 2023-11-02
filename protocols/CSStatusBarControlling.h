
@protocol CSStatusBarControlling <NSObject>

@required

- (void)clearStatusBarParameters;
- (UIStatusBar *)createFakeStatusBarWithReason:(NSString *)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)destroyFakeStatusBar:(UIStatusBar *)arg1;
- (UIStatusBarStyleRequest *)effectiveStatusBarStyleRequestForAlpha:(NSNumber *)arg1 style:(long long)arg2 legibilitySettings:(_UILegibilitySettings *)arg3;
- (void)setStatusBarAlpha:(NSNumber *)arg1 style:(long long)arg2 legibilitySettings:(_UILegibilitySettings *)arg3;
- (void)setStatusBarHidden:(bool)arg1 forReason:(NSString *)arg2;
- (void)setStatusBarPart:(unsigned long long)arg1 hidden:(bool)arg2 animationDuration:(double)arg3;
- (NSNumber *)statusBarAlpha;
- (_UILegibilitySettings *)statusBarLegibilitySettings;
- (long long)statusBarStyle;

@end
