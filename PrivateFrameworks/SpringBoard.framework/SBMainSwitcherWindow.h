
@interface SBMainSwitcherWindow : SBFWindow

+ (bool)sb_autorotates;

- (bool)_canBecomeKeyWindow;
- (void)_configureContextOptions:(id)arg1;
- (unsigned long long)_edgesForSystemGesturesTouchDelay;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (bool)_usesWindowServerHitTesting;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
