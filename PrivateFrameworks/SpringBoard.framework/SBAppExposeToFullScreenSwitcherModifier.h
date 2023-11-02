
@interface SBAppExposeToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier * _appExposeModifier;
    NSArray * _appLayoutsBeforeTransition;
    NSString * _bundleIdentifier;
    long long  _direction;
    SBAppLayout * _floatingAppLayout;
    SBAppLayout * _fullScreenAppLayout;
    SBSwitcherModifier * _fullscreenModifier;
    bool  _isSimulatingPreTransitionState;
    SBRouteToAppExposeSwitcherModifier * _routeToAppExposeModifier;
}

- (void).cxx_destruct;
- (bool)_isEffectivelyFullScreen;
- (bool)_isIndexActive:(unsigned long long)arg1;
- (id)_newAppExposeModifier;
- (void)_performBlockBySimulatingPreTransitionState:(id /* block */)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appLayouts;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 floatingAppLayout:(id)arg4 bundleIdentifier:(id)arg5 appExposeModifier:(id)arg6 fullScreenModifier:(id)arg7;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)plusButtonAlpha;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
