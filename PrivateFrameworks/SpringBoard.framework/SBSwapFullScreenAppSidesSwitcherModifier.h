
@interface SBSwapFullScreenAppSidesSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _animationPhase;
    SBAppLayout * _fromAppLayout;
    long long  _layoutRoleToKeepOnTop;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 layoutRoleToKeepOnTop:(long long)arg4;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)topMostLayoutRolesForAppLayout:(id)arg1;
- (id)transitionWillBegin;

@end
