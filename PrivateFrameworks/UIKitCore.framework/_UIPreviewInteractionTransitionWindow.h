
@interface _UIPreviewInteractionTransitionWindow : UIWindow

+ (bool)_isSystemWindow;

- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (bool)_canAffectStatusBarAppearance;
- (bool)_isSettingFirstResponder;
- (id)_roleHint;
- (void)_setFirstResponder:(id)arg1;
- (bool)canBecomeKeyWindow;
- (id)init;
- (bool)isInternalWindow;

@end
