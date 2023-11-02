
@interface SBMedusaWindowDragTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _discardedAppLayout;
    long long  _discardedLayoutRole;
    unsigned long long  _finalWindowDragDestination;
    SBAppLayout * _fromAppLayout;
    bool  _hasAddedChildTransitionModifiers;
    NSSet * _initiallyBlurredDisplayItems;
    bool  _isGoingToHomeScreenPeek;
    SBAppLayout * _selectedAppLayout;
    SBAppLayout * _toAppLayout;
    SBAppLayout * _toFloatingAppLayout;
    NSMutableSet * _waitingForSceneUpdateForDisplayItems;
}

- (void).cxx_destruct;
- (bool)_goingToHomeScreenPeekFromSplitView;
- (bool)_minimizingCenterWindow;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutContainingAppLayout:(id)arg1;
- (id)appLayoutToAttachSlideOverTongue;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 fromAppLayout:(id)arg3 toAppLayout:(id)arg4 toFloatingAppLayout:(id)arg5 toHomeScreenPeek:(bool)arg6 toAppExposeBundleIdentifier:(id)arg7 initiallyBlurredDisplayItems:(id)arg8 windowDragDestination:(unsigned long long)arg9;
- (bool)isHomeScreenContentRequired;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionDidEnd;
- (long long)wallpaperStyle;

@end
