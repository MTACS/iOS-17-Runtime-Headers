
@interface SBMoveDisplaysTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBTransitionSwitcherModifierMoveDisplaysContext * _moveDisplaysContext;
    SBAppLayout * _remainingAppLayout;
    bool  _remainingAppLayoutNeedsLayout;
}

@property (nonatomic, readonly) SBTransitionSwitcherModifierMoveDisplaysContext *moveDisplaysContext;
@property (nonatomic, readonly) SBAppLayout *remainingAppLayout;
@property (nonatomic, readonly) bool remainingAppLayoutNeedsLayout;

- (void).cxx_destruct;
- (id)_appLayoutsContainingMovingDisplayItems;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)initWithTransitionEvent:(id)arg1;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isSwitcherWindowVisible;
- (id)moveDisplaysContext;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (id)remainingAppLayout;
- (bool)remainingAppLayoutNeedsLayout;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)topMostLayoutElements;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;

@end
