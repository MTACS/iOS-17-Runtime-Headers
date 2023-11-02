
@interface _UISnapshotWindow : UIWindow {
    bool  __extendsScreenSceneLifetime;
}

@property bool _extendsScreenSceneLifetime;

+ (bool)_isSystemWindow;

- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (bool)_alwaysGetsContexts;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (bool)_canDisableMirroring;
- (bool)_extendsScreenSceneLifetime;
- (bool)_isSettingFirstResponder;
- (void)_setFirstResponder:(id)arg1;
- (bool)_shouldAdjustSizeClassesAndResizeWindow;
- (bool)canBecomeKeyWindow;
- (void)set_extendsScreenSceneLifetime:(bool)arg1;

@end
