
@interface SBHomeScreenWindow : SBWindow

+ (bool)sb_autorotates;

- (bool)_canBecomeKeyWindow;
- (id)autorotationPreventionReasons;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)homeScreenViewController;
- (id)initWithWindowScene:(id)arg1 rootViewController:(id)arg2 layoutStrategy:(id)arg3 role:(id)arg4 debugName:(id)arg5;
- (bool)isContentHidden;
- (bool)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;

@end
