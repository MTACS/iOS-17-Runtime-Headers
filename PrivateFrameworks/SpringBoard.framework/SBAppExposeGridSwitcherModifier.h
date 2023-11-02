
@interface SBAppExposeGridSwitcherModifier : SBSwitcherModifier {
    NSString * _bundleIdentifier;
    bool  _disableFullScreenCardScaleRounding;
    struct CGSize { 
        double width; 
        double height; 
    }  _floatingCardSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullScreenCardSize;
    bool  _isScrollingForward;
    bool  _isShowingReopenClosedWindowsButton;
    SBMixedGridSwitcherModifier * _mixedGridModifier;
    unsigned long long  _numberOfHiddenAppLayouts;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousContentOffset;
    bool  _reversesFloatingCardDirection;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic) bool disableFullScreenCardScaleRounding;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } floatingCardSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fullScreenCardSize;
@property (nonatomic) bool reversesFloatingCardDirection;

- (void).cxx_destruct;
- (bool)_canShowReopenClosedWindowsButton;
- (id)_updateReopenClosedWindowsButtonPresence;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (bool)disableFullScreenCardScaleRounding;
- (struct CGSize { double x1; double x2; })floatingCardSize;
- (struct CGSize { double x1; double x2; })fullScreenCardSize;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 fullScreenCardSize:(struct CGSize { double x1; double x2; })arg2 floatingCardSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isLayoutRoleDraggable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleEligibleForContentDragSpringLoading:(long long)arg1 inAppLayout:(id)arg2;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (bool)reversesFloatingCardDirection;
- (void)setDisableFullScreenCardScaleRounding:(bool)arg1;
- (void)setReversesFloatingCardDirection:(bool)arg1;

@end
