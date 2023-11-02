
@interface SBAppExposeContinuousExposeSwitcherModifier : SBSwitcherModifier {
    NSString * _bundleIdentifier;
    bool  _isScrollingForward;
    bool  _isShowingReopenClosedWindowsButton;
    unsigned long long  _numberOfHiddenAppLayouts;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousContentOffset;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (bool)_canShowReopenClosedWindowsButton;
- (id)_updateReopenClosedWindowsButtonPresence;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isLayoutRoleDraggable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isResizeGrabberVisibleForAppLayout:(id)arg1;
- (bool)isWallpaperRequiredForSwitcher;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldAccessoryDrawShadowForAppLayout:(id)arg1;
- (long long)wallpaperStyle;

@end
