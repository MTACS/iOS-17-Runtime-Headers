
@interface SBStripContinuousExposeSwitcherModifier : SBSwitcherModifier <SBSwitcherLayoutCalculationsCacheDelegate> {
    double  _cached_appStripOriginX;
    double  _cached_appStripUnocclusionProgress;
    bool  _continuousExposeConfigurationChangeTransition;
    NSMutableSet * _highlightedByHoverAppLayouts;
    NSMutableSet * _highlightedByTouchAppLayouts;
    unsigned long long  _modifierEventGenCount;
    bool  _requireStripContentsInViewHierarchy;
    SBSwitcherLayoutCalculationsCache * _stripLayoutCache;
}

@property (getter=isContinuousExposeConfigurationChangeTransition, nonatomic) bool continuousExposeConfigurationChangeTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *highlightedByHoverAppLayouts;
@property (nonatomic, retain) NSMutableSet *highlightedByTouchAppLayouts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_appStripOriginX;
- (id)_currentLayoutCalculationsValidityToken;
- (double)_highlightScaleForAppLayout:(id)arg1;
- (unsigned long long)_indexInContinuousExposeIdentifierPileForAppLayout:(id)arg1;
- (void)_invalidateAppStripOriginX;
- (bool)_isAppLayoutEffectivelyOnStage:(id)arg1;
- (bool)_isGroupForAppLayoutHighlightedFromHover:(id)arg1;
- (bool)_isGroupForAppLayoutHighlightedFromTouch:(id)arg1;
- (id)_orderedVisibleAppLayoutsIgnoringProgress:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_positionForPositionIn3DContainerSpace:(struct CGPoint { double x1; double x2; })arg1 layerPosition:(struct CGPoint { double x1; double x2; })arg2 layerSize:(struct CGSize { double x1; double x2; })arg3 layerAnchorPoint:(struct CGPoint { double x1; double x2; })arg4 layerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg5 containerPerspective:(double)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_stripFrame;
- (double)_wallpaperDimmingForIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 forAppLayout:(id)arg2;
- (double)adjustedSpaceAccessoryViewScale:(double)arg1 forAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsForContinuousExposeIdentifier:(id)arg1;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (id)buildLayoutCalculationsForCache:(id)arg1;
- (double)contentPageViewScaleForAppLayout:(id)arg1 withScale:(double)arg2;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleHighlightEvent:(id)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (id)highlightedByHoverAppLayouts;
- (id)highlightedByTouchAppLayouts;
- (id)inactiveAppLayoutsReachableByKeyboardShortcut;
- (id)init;
- (bool)isContinuousExposeConfigurationChangeTransition;
- (bool)isHomeAffordanceSupportedForAppLayout:(id)arg1;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)perspectiveAngleForAppLayout:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)setContinuousExposeConfigurationChangeTransition:(bool)arg1;
- (void)setHighlightedByHoverAppLayouts:(id)arg1;
- (void)setHighlightedByTouchAppLayouts:(id)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)visibleAppLayouts;
- (struct SBSwitcherGradientWallpaperAttributes { double x1; double x2; })wallpaperGradientAttributesForIndex:(unsigned long long)arg1;

@end
