
@interface ASOOverlayWindow : UIApplicationRotationFollowingWindow

+ (bool)_isSystemWindow;

- (bool)_canAffectStatusBarAppearance;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithWindowScene:(id)arg1;
- (bool)isInternalWindow;

@end
