
@interface _SBContinuousExposePeekContentSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    SBAppSwitcherContinuousExposeSwitcherModifier * _appSwitcherModifier;
    long long  _configuration;
    SBFullScreenContinuousExposeSwitcherModifier * _fullScreenContinuousExposeAppLayoutModifier;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) long long configuration;

- (void).cxx_destruct;
- (unsigned long long)activeCornersForTouchResizeForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appLayout;
- (long long)configuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 configuration:(long long)arg2;
- (bool)isItemResizingAllowedForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleSelectable:(long long)arg1 inAppLayout:(id)arg2;
- (id)keyboardSuppressionMode;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldAllowContentViewTouchesForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)switcherHitTestsAsOpaque;

@end
