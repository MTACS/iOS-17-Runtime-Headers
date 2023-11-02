
@protocol UIWindowSceneDelegate_ForSpringBoardOnly <UIWindowSceneDelegate>

@optional

- (double)_windowScene:(UIWindowScene *)arg1 levelForWindow:(UIWindow *)arg2 preferredLevel:(double)arg3;
- (void)_windowScene:(UIWindowScene *)arg1 window:(UIWindow *)arg2 didUpdateSupportedInterfaceOrientations:(unsigned long long)arg3;
- (void)_windowScene:(UIWindowScene *)arg1 window:(UIWindow *)arg2 didUpdateSupportedInterfaceOrientations:(unsigned long long)arg3 preferredOrientation:(long long)arg4;
- (void)_windowScene:(UIWindowScene *)arg1 windowDidBecomeVisible:(UIWindow *)arg2;
- (void)_windowScene:(UIWindowScene *)arg1 windowWillAttach:(UIWindow *)arg2;
- (void)_windowScene:(UIWindowScene *)arg1 windowWillBecomeHidden:(UIWindow *)arg2;
- (void)_windowScene:(UIWindowScene *)arg1 windowWillBecomeVisible:(UIWindow *)arg2;
- (void)_windowScene:(UIWindowScene *)arg1 windowWillDetach:(UIWindow *)arg2;

@end
