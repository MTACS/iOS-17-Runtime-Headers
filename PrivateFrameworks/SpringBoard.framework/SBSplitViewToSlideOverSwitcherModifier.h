
@interface SBSplitViewToSlideOverSwitcherModifier : SBTransitionSwitcherModifier {
    unsigned long long  _direction;
    SBAppLayout * _fromMainAppLayoutGoingIntoSlideOver;
    SBAppLayout * _fullScreenAppLayout;
    SBAppLayout * _slideOverAppLayout;
    SBAppLayout * _splitViewAppLayout;
    long long  _transitioningLayoutRole;
}

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 transitioningLayoutRole:(long long)arg2 splitViewAppLayout:(id)arg3 slideOverAppLayout:(id)arg4 direction:(unsigned long long)arg5;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (id)topMostLayoutRolesForAppLayout:(id)arg1;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
