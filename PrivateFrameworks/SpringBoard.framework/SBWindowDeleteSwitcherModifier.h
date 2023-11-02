
@interface SBWindowDeleteSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _centerWindowAppLayout;
    SBAppLayout * _fromAppLayout;
    SBAppLayout * _fullScreenAppLayout;
    struct UIRectCornerRadii { 
        double topLeft; 
        double bottomLeft; 
        double bottomRight; 
        double topRight; 
    }  _initialCornerRadii;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    long long  _layoutRole;
    bool  _supportsGroupOpacity;
    bool  _usePageFullScreenCenterWindowDeletion;
}

@property (nonatomic) bool usePageFullScreenCenterWindowDeletion;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_centerOfCenterPageFullScreenAssociatedSourceDisplayItem:(id)arg1 appLayout:(id)arg2;
- (id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutContainingAppLayout:(id)arg1;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 layoutRole:(long long)arg3;
- (bool)isSwitcherWindowVisible;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)setUsePageFullScreenCenterWindowDeletion:(bool)arg1;
- (bool)shouldAllowGroupOpacityForAppLayout:(id)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionDidEnd;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (bool)usePageFullScreenCenterWindowDeletion;
- (id)visibleAppLayouts;
- (struct SBSwitcherGradientWallpaperAttributes { double x1; double x2; })wallpaperGradientAttributesForIndex:(unsigned long long)arg1;

@end
