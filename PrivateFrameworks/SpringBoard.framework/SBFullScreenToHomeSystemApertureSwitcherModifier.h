
@interface SBFullScreenToHomeSystemApertureSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    bool  _bounced;
    SBCoplanarSwitcherModifier * _coplanarModifier;
    unsigned long long  _direction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _expandedCardCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _expandedCardFrame;
    double  _initialCardScale;
    bool  _jindoIntersectsIntialCardFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftOffCardVelocity;
    bool  _shouldClipRegionAboveSystemAperture;
    bool  _showShadow;
    NSUUID * _suppressionIdentifier;
    bool  _tucked;
    bool  _unblurred;
    SBFullScreenToHomeIconZoomSwitcherModifier * _zoomModifier;
}

- (void).cxx_destruct;
- (id)_blurItemContainerParameters;
- (id)_collapseMeshForNormalizedXDelta:(double)arg1;
- (struct CGPoint { double x1; double x2; })_collapsedTransitionTargetForZoomDown:(bool)arg1;
- (id)_expandMeshForIndex:(unsigned long long)arg1;
- (bool)_isEffectivelyHome;
- (bool)_isIndexZoomAppLayout:(unsigned long long)arg1;
- (bool)_shouldApplyEffectsToIndex:(unsigned long long)arg1;
- (id)_systemApertureSettings;
- (id)_tuckInAtEndMeshForNormalizedXDelta:(double)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToCacheSnapshots;
- (bool)completesWhenChildrenComplete;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGPoint { double x1; double x2; })expandedSourcePositionForSystemApertureTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleRepositionProgressEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 zoomModifier:(id)arg2 appLayout:(id)arg3 direction:(unsigned long long)arg4 expandedCardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 cardScale:(double)arg6 cardVelocity:(struct CGPoint { double x1; double x2; })arg7;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (id)meshTransformForIndex:(unsigned long long)arg1;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)repositionProgressNotificationsForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)rootContentViewBlurRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rootContentViewMaskRect;
- (double)rotationAngleForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (bool)systemApertureRequiresHeavyShadowForTransition;
- (id)systemApertureTransitioningAppLayouts;
- (id)topMostLayoutElements;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;
- (id)visibleHomeAffordanceLayoutElements;

@end
