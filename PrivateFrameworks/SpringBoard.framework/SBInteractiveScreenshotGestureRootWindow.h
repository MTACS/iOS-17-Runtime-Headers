
@interface SBInteractiveScreenshotGestureRootWindow : _UIRootWindow

+ (bool)_isSecure;

- (bool)_appearsInLoupe;
- (bool)_canBecomeKeyWindow;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (bool)_shouldPrepareScreenForWindow;
- (bool)_usesWindowServerHitTesting;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
