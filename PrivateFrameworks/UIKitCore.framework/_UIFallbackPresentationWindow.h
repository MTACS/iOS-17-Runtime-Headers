
@interface _UIFallbackPresentationWindow : UIApplicationRotationFollowingWindow

+ (bool)_isSystemWindow;

- (bool)_canAffectStatusBarAppearance;
- (bool)_includeInDefaultImageSnapshot;

@end
