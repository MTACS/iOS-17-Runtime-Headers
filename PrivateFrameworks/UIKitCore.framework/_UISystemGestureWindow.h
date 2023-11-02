
@interface _UISystemGestureWindow : _UIRootWindow {
    UISystemGestureView * _systemGestureView;
}

+ (bool)_isSecure;

- (void).cxx_destruct;
- (bool)_appearsInLoupe;
- (bool)_extendsScreenSceneLifetime;
- (id)_focusResponder;
- (bool)_isSystemGestureWindow;
- (bool)_shouldPrepareScreenForWindow;
- (id)_systemGestureView;
- (bool)_usesWindowServerHitTesting;
- (bool)canBecomeKeyWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithDisplay:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithScreen:(id)arg1;

@end
