
@interface SBOldFloatingDockWindow : SBMainScreenActiveInterfaceOrientationWindow

+ (bool)sb_autorotates;

- (bool)_canBecomeKeyWindow;
- (id)floatingDockRootViewController;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)isContentHidden;
- (bool)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;

@end
