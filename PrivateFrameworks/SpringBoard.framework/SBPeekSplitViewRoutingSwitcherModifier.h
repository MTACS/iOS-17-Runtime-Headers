
@interface SBPeekSplitViewRoutingSwitcherModifier : SBSwitcherModifier <SBChainableModifierDelegate, SBRoutingSwitcherModifierDelegate> {
    SBTransitionSwitcherModifier * _exitingTransitionTrackingModifier;
    bool  _isRotating;
    SBSwitcherModifier * _nonPeekingModifier;
    long long  _peekConfiguration;
    long long  _peekState;
    SBAppLayout * _peekingAppLayout;
    SBSwitcherModifier * _peekingModifier;
    SBRoutingSwitcherModifier * _routingModifier;
    long long  _spaceConfiguration;
    SBAppLayout * _splitViewAppLayout;
    SBAppSwitcherSettings * _switcherSettings;
    SBAppLayout * _toAppLayout;
    bool  _uncondtionallyAllowAppLayoutContainment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)modifierForEvent:(id)arg1;

- (void).cxx_destruct;
- (id)_combinedResultingAppLayoutWithAppLayout:(id)arg1;
- (id)_handleEvent:(id)arg1;
- (bool)_isAppLayoutBeingResized:(id)arg1;
- (void)_temporarilyAllowUnconditionaryAppLayoutContainmentWithBlock:(id /* block */)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutContainingAppLayout:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)canPerformKeyboardShortcutAction:(long long)arg1 forBundleIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg3;
- (id)debugPotentialChildModifiers;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)fallbackModifierForRoutingModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (unsigned long long)hiddenContainerStatusBarParts;
- (double)homeScreenDimmingAlpha;
- (id)homeScreenModifierForRoutingModifier:(id)arg1;
- (id)initWithPeekConfiguration:(long long)arg1 spaceConfiguration:(long long)arg2 peekingAppLayout:(id)arg3;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleSelectable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isResizeGrabberVisibleForAppLayout:(id)arg1;
- (bool)isWallpaperRequiredForSwitcher;
- (id)keyboardSuppressionMode;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;
- (unsigned long long)multipleWindowsIndicatorLayoutRoleMaskForAppLayout:(id)arg1;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (id)routingModifier:(id)arg1 animationAttributesModifierForLayoutElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })routingModifier:(id)arg1 containerViewBoundsForModifier:(id)arg2;
- (id)routingModifier:(id)arg1 event:(id)arg2 forModifier:(id)arg3;
- (id)routingModifier:(id)arg1 filteredAppLayouts:(id)arg2 forModifier:(id)arg3;
- (id)routingModifier:(id)arg1 filteredContinuousExposeIdentifiers:(id)arg2 forModifier:(id)arg3;
- (id)routingModifier:(id)arg1 modifierForAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })routingModifier:(id)arg1 switcherViewBoundsForModifier:(id)arg2;
- (id)scrollModifierForRoutingModifier:(id)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldAllowContentViewTouchesForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldConfigureInAppDockHiddenAssertion;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (unsigned long long)transactionCompletionOptions;
- (id)transactionCompletionOptionsModifierForRoutingModifier:(id)arg1;
- (id)visibleHomeAffordanceLayoutElements;
- (long long)wallpaperStyle;

@end
