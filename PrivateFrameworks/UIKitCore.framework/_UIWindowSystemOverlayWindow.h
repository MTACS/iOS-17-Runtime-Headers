
@interface _UIWindowSystemOverlayWindow : UIWindow

+ (bool)_isSecure;
+ (bool)_isSystemWindow;
+ (bool)_needsPassthroughInteraction;

- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (bool)_extendsScreenSceneLifetime;
- (bool)_isSettingFirstResponder;
- (bool)_shouldAdjustSizeClassesAndResizeWindow;
- (bool)canBecomeKeyWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)isInternalWindow;

@end
