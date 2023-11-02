
@protocol _UIWindowHostingSceneComponentProviding <_UISceneComponentProviding>

@optional

- (void)_windowHostingScene:(UIScene<_UISceneUIWindowHosting> *)arg1 didMoveFromScreen:(UIScreen *)arg2 toScreen:(UIScreen *)arg3;
- (void)_windowHostingScene:(UIScene<_UISceneUIWindowHosting> *)arg1 willMoveFromScreen:(UIScreen *)arg2 toScreen:(UIScreen *)arg3;

@end
