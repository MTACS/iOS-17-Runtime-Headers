
@interface SBContinuousExposeArcSwipeSwitcherModifier : SBTransitionSwitcherModifier {
    SBArcSwipeSwitcherModifier * _arcSwipeModifier;
    SBAppLayout * _fromAppLayout;
    NSArray * _initialVisibleAppLayouts;
    SBAppLayout * _selectedAppLayout;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (id)_selectedAppLayout;
- (void)didMoveToParentModifier:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 selectedAppLayout:(id)arg4 initialVisibleAppLayouts:(id)arg5 pinSpaceCornerRadiiToDisplayCornerRadii:(bool)arg6;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)topMostLayoutElements;

@end
