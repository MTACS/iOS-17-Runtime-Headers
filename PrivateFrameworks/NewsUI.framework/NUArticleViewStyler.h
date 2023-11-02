
@interface NUArticleViewStyler : NSObject <NUArticleViewStyler> {
    UIColor * _mainBackgroundColor;
    long long  _statusBarStyle;
    UIColor * _tabBarTintColor;
    UIColor * _toolbarTintColor;
    UIColor * _topContentColor;
}

@property (nonatomic, readonly) UIColor *mainBackgroundColor;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, retain) UIColor *tabBarTintColor;
@property (nonatomic, retain) UIColor *toolbarTintColor;
@property (nonatomic, readonly) long long topBackgroundStatusBarStyle;
@property (nonatomic, readonly) UIColor *topContentColor;

- (void).cxx_destruct;
- (id)initWithBackgroundColor:(id)arg1 topBackgroundColor:(id)arg2;
- (id)mainBackgroundColor;
- (void)setTabBarTintColor:(id)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (long long)statusBarStyle;
- (long long)statusBarStyleForBackgroundColor:(id)arg1;
- (void)styleTabBar:(id)arg1;
- (void)styleToolbar:(id)arg1;
- (id)tabBarTintColor;
- (id)toolbarTintColor;
- (long long)topBackgroundStatusBarStyle;
- (id)topContentColor;
- (void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2;
- (void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2;

@end
