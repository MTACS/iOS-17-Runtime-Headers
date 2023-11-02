
@protocol CAMControlStatusBarDelegate <NSObject>

@required

- (void)controlStatusBar:(CAMControlStatusBar *)arg1 didChangeExpandingControl:(CAMExpandingControl *)arg2 expanded:(bool)arg3;
- (void)controlStatusBar:(CAMControlStatusBar *)arg1 didCreateIndicatorForType:(unsigned long long)arg2;
- (void)controlStatusBar:(CAMControlStatusBar *)arg1 didReceiveTapInIndicatorForType:(unsigned long long)arg2;
- (void)controlStatusBar:(CAMControlStatusBar *)arg1 willChangeExpandingControl:(CAMExpandingControl *)arg2 expanded:(bool)arg3;

@end
