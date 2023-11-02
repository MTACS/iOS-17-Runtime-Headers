
@interface SBEntityRemovalCrossblurSwitcherModifier : SBTransitionSwitcherModifier {
    bool  _animateOpacity;
    SBAppLayout * _appLayout;
    SBSwitcherModifier * _multitaskingModifier;
    SBEntityRemovalToHomeSwitcherModifier * _toHomeRemovalModifier;
    NSUUID * _transitionID;
}

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 forAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 multitaskingModifier:(id)arg3;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (bool)shouldPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionDidEnd;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;

@end
