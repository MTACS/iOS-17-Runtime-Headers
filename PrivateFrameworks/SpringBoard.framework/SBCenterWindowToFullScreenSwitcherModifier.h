
@interface SBCenterWindowToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fullScreenAppLayoutWithCenterRemoved;
    SBDisplayItem * _movingCenterItem;
}

- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)blurDelayForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fullScreenWithCenterAppLayout:(id)arg2;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;

@end
