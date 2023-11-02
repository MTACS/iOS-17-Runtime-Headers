
@interface _UIBannerWindow : UIWindow

+ (bool)_isSystemWindow;

- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (id)_roleHint;
- (bool)_shouldAdjustSizeClassesAndResizeWindow;
- (bool)_shouldForceTraitPropagationThroughHierarchy;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;

@end
