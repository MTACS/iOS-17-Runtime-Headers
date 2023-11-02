
@interface _UIStatusBarVisualProvider_DynamicSplit : _UIStatusBarVisualProvider_Split <_UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate> {
    BSAnimationSettings * _currentAnimationSettings;
    NSLayoutConstraint * _cutoutCenterConstraint;
    NSLayoutConstraint * _cutoutWidthConstraint;
    id /* block */  _deferredAvoidanceFrameUpdateBlock;
    NSLayoutConstraint * _leadingCenterYConstraint;
}

@property (nonatomic, retain) BSAnimationSettings *currentAnimationSettings;
@property (nonatomic, retain) NSLayoutConstraint *cutoutCenterConstraint;
@property (nonatomic, retain) NSLayoutConstraint *cutoutWidthConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deferredAvoidanceFrameUpdateBlock;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *leadingCenterYConstraint;
@property (readonly) Class superclass;

+ (double)baseFontSize;
+ (double)expandedFontSize;
+ (double)height;
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;

- (void).cxx_destruct;
- (bool)_needsUpdateOfConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cutoutOffset:(double*)arg2 cutoutWidth:(double*)arg3;
- (id)_orderedDisplayItemPlacements;
- (bool)_updateSystemNavigationWithData:(id)arg1 avoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimationSettings:(id)arg2 options:(unsigned long long)arg3;
- (double)bottomLeadingTopOffset;
- (id)currentAnimationSettings;
- (id)cutoutCenterConstraint;
- (double)cutoutEdgeInset;
- (id)cutoutWidthConstraint;
- (void)dataUpdated:(id)arg1;
- (id /* block */)deferredAvoidanceFrameUpdateBlock;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (double)effectiveTargetDisplayWidth;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
- (double)expandedIconScale;
- (double)itemSpacing;
- (id)leadingCenterYConstraint;
- (id)leadingItemCutoffWidths;
- (double)leadingItemSpacing;
- (unsigned long long)leadingNumberOfItemsForWidth:(double)arg1;
- (double)leadingScaleForWidth:(double)arg1;
- (double)minimumBottomLeadingWidth;
- (double)minimumItemScaleFactor;
- (double)normalIconScale;
- (id)normalRoundFont;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (double)sensorAreaCenterOffsetFromTrailing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sensorAreaRect;
- (struct CGSize { double x1; double x2; })sensorAreaSize;
- (void)setCurrentAnimationSettings:(id)arg1;
- (void)setCutoutCenterConstraint:(id)arg1;
- (void)setCutoutWidthConstraint:(id)arg1;
- (void)setDeferredAvoidanceFrameUpdateBlock:(id /* block */)arg1;
- (void)setLeadingCenterYConstraint:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (double)topLeadingCenterOffset;
- (id)trailingItemCutoffWidths;
- (unsigned long long)trailingNumberOfItemsForWidth:(double)arg1 includingPrivacyIndicator:(bool)arg2;
- (double)trailingScaleForWidth:(double)arg1 includingPrivacyIndicator:(bool)arg2;
- (void)updateDisplayItem:(id)arg1 toDynamicallyHidden:(bool)arg2 scale:(double)arg3;
- (void)updateDisplayItem:(id)arg1 toScale:(double)arg2;

@end
