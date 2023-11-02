
@interface SBRemovalSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    bool  _hasResizedEnoughToUnblur;
    unsigned long long  _indexOfAppLayoutPriorToRemoval;
    unsigned long long  _indexToScrollToAfterRemoval;
    long long  _layoutRole;
    SBSwitcherModifier * _multitaskingModifier;
    unsigned long long  _phase;
    long long  _reason;
    SBAppLayout * _resultingAppLayoutIfAny;
    NSSet * _visibleAppLayoutsPriorToRemoval;
}

- (void).cxx_destruct;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id /* block */)arg1;
- (id)_remainingAppLayoutForRemovingLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)blurViewIconScaleForIndex:(unsigned long long)arg1;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleResizeProgressEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithLayoutRole:(long long)arg1 inAppLayout:(id)arg2 reason:(long long)arg3;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (id)resizeProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldAccessoryDrawShadowForAppLayout:(id)arg1;
- (bool)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)visibleAppLayouts;

@end
