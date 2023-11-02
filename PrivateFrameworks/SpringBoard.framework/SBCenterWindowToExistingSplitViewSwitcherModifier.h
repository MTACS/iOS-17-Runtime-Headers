
@interface SBCenterWindowToExistingSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayoutBeingReplaced;
    SBAppLayout * _fromAppLayout;
    long long  _layoutRoleBeingReplaced;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (bool)_wasPreviousCenterAppLayout:(id)arg1 layoutRole:(long long)arg2;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)topMostLayoutRolesForAppLayout:(id)arg1;
- (id)visibleAppLayouts;

@end
