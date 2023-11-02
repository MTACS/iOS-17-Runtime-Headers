
@protocol UIStatusBarStyleDelegate <NSObject>

@required

- (void)statusBar:(UIStatusBar_Base *)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (long long)statusBar:(UIStatusBar_Base *)arg1 styleForRequestedStyle:(long long)arg2 overrides:(unsigned long long)arg3;
- (void)statusBar:(UIStatusBar_Base *)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;

@optional

- (void)statusBar:(UIStatusBar_Base *)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;
- (void)statusBar:(UIStatusBar_Base *)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4;
- (UISystemNavigationAction *)statusBarSystemNavigationAction:(UIStatusBar_Base *)arg1;

@end
