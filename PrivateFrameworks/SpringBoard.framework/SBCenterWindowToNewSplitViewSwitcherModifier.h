
@interface SBCenterWindowToNewSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fromFullScreenAppLayout;
    long long  _layoutRoleBeingAdded;
    SBAppLayout * _toSpaceAppLayout;
}

- (void).cxx_destruct;
- (bool)_wasItemPreviouslyCenter:(id)arg1;
- (bool)_wasItemPreviouslyFullScreen:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromFullScreenAppLayout:(id)arg2 toSpaceAppLayout:(id)arg3;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (id)topMostLayoutRolesForAppLayout:(id)arg1;

@end
