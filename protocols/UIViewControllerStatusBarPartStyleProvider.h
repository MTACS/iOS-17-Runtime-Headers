
@protocol UIViewControllerStatusBarPartStyleProvider <NSObject>

@required

- (long long)preferredCenterStatusBarStyle;
- (long long)preferredLeadingStatusBarStyle;
- (long long)preferredTrailingStatusBarStyle;

@end
