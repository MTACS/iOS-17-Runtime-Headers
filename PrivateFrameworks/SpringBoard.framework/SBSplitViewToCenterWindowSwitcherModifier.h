
@interface SBSplitViewToCenterWindowSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fromAppLayout;
    long long  _layoutRoleBeingMoved;
    long long  _layoutRoleBeingResized;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (bool)_isItemBeingMovedToCenter:(id)arg1;
- (bool)_isItemBeingResized:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg3;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;

@end
