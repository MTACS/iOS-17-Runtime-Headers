
@interface SBPulseTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    bool  _shouldScaleIn;
}

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2;
- (double)scaleForIndex:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionWillUpdate;

@end
