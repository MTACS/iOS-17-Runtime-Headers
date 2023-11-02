
@interface SBControlCenterWindow : SBIgnoredForAutorotationSecureWindow

+ (id)_traitsArbiterOrientationActuationRole;

- (bool)_canBecomeKeyWindow;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)window;

@end
