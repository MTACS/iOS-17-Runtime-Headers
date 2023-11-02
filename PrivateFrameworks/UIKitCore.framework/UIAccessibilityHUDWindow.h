
@interface UIAccessibilityHUDWindow : UIApplicationRotationFollowingWindow

+ (void)createSharedWindowWithScene:(id)arg1;
+ (void)removeSharedWindow;
+ (id)sharedWindow;

- (double)_adjustedWindowLevelFromLevel:(double)arg1;

@end
