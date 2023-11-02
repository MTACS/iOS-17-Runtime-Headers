
@interface SBItemResizeTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _selectedAppLayout;
}

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (id)keyboardSuppressionMode;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;
- (bool)wantsSceneResizesHostedContextForAppLayout:(id)arg1;

@end
