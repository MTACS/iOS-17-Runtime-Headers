
@interface SBSceneResizeTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _discardedAppLayout;
    long long  _discardedLayoutRole;
    SBAppLayout * _fromAppLayout;
    double  _minimumCardWithForDismissal;
    SBAppLayout * _selectedAppLayout;
    SBAppLayout * _toAppLayout;
}

@property (nonatomic, retain) SBAppLayout *selectedAppLayout;

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 minimumCardWithForDismissal:(double)arg4;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)resizeGrabberLayoutAttributesForAppLayout:(id)arg1;
- (id)selectedAppLayout;
- (void)setSelectedAppLayout:(id)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;

@end
