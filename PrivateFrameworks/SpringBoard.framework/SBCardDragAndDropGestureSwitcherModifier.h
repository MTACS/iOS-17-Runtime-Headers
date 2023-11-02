
@interface SBCardDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    unsigned long long  _currentDropRegion;
    SBAppLayout * _draggingAppLayout;
    long long  _draggingLayoutRole;
    SBAppLayout * _draggingLeafAppLayout;
    SBCardDropSwitcherModifier * _dropModifier;
    SBSwitcherDropRegionContext * _dropRegionContext;
    bool  _gestureEnded;
    NSUUID * _gestureID;
    SBAppLayout * _intersectingAppLayout;
    long long  _intersectingLayoutRole;
    SBAppLayout * _intersectingLeafAppLayout;
    bool  _isScrolling;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    SBAppLayout * _previouslyIntersectingAppLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (unsigned long long)blurTargetPreferenceForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg3;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullyPresentedFrameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)handleBlurProgressEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleSwitcherDropEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1;
- (bool)isLayoutRoleBlurred:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleDraggable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleKillable:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleSelectable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldAccessoryDrawShadowForAppLayout:(id)arg1;
- (bool)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldShowBackdropViewAtIndex:(unsigned long long)arg1;
- (bool)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)arg1;
- (bool)shouldUseNonuniformSnapshotScalingForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;

@end
