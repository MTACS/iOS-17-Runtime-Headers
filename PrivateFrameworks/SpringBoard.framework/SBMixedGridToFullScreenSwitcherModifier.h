
@interface SBMixedGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    NSArray * _appLayoutsBeforeTransition;
    long long  _direction;
    SBAppLayout * _floatingAppLayout;
    SBAppLayout * _fullScreenAppLayout;
    SBSwitcherModifier * _fullscreenModifier;
    SBSwitcherModifier<SBMixedGridSwitcherProviding> * _mixedGridModifier;
    SBRouteToMixedGridSwitcherModifier * _routeToMixedGridModifier;
}

- (void).cxx_destruct;
- (id)_appLayoutToScrollTo;
- (id)_firstFloatingAppLayout:(id)arg1;
- (bool)_isEffectivelyFullScreen;
- (bool)_isIndexActive:(unsigned long long)arg1;
- (id)_newMixedGridModifier;
- (void)_performBlockWhileSimulatingPostPresentationScrollViewContentOffset:(id /* block */)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appLayoutToScrollToBeforeTransitioning;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)blurViewIconScaleForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 floatingAppLayout:(id)arg4 floatingConfiguration:(long long)arg5 gridModifier:(id)arg6 fullScreenModifier:(id)arg7;
- (bool)isLayoutRoleDraggable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleEligibleForContentDragSpringLoading:(long long)arg1 inAppLayout:(id)arg2;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
