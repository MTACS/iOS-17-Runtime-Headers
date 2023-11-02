
@protocol _UISceneMetricsCalculating <NSObject>

@required

- (UIWindowScene *)_scene;
- (void)_setScene:(UIWindowScene *)arg1;
- (void)_updateMetricsOnWindows:(NSArray *)arg1 animated:(bool)arg2;

@end
