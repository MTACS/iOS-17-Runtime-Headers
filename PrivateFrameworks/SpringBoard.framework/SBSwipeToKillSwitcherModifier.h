
@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    double  _decelerationTargetProgress;
    bool  _fadeOutSwipedItems;
    bool  _hasPrepared;
    SBHighlightSwitcherModifier * _highlightModifier;
    unsigned long long  _interpolationDirection;
    bool  _isDragging;
    long long  _layoutRole;
    SBAppLayout * _leafAppLayout;
    double  _progress;
    bool  _simulatingPostRemovalState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

- (void).cxx_destruct;
- (void)_calculateInterpolationDirection;
- (bool)_dragHasBeenReleasedTowardKill;
- (unsigned long long)_interpolatingAdjacentIndexForIndex:(unsigned long long)arg1;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id /* block */)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })contentViewOffsetForAccessoriesOfAppLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentViewOffsetForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg3;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)initWithLayoutRole:(long long)arg1 inAppLayout:(id)arg2 fadeOutSwipedItems:(bool)arg3;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;

@end
