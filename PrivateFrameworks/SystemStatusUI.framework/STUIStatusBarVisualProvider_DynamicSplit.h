
@interface STUIStatusBarVisualProvider_DynamicSplit : STUIStatusBarVisualProvider_Split <STUIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate> {
    BSAnimationSettings * _currentAnimationSettings;
    NSLayoutConstraint * _cutoutCenterConstraint;
    NSLayoutConstraint * _cutoutWidthConstraint;
    bool  _forceAvoidanceRectUpdate;
    NSLayoutConstraint * _leadingCenterYConstraint;
}

@property (nonatomic, retain) BSAnimationSettings *currentAnimationSettings;
@property (nonatomic, retain) NSLayoutConstraint *cutoutCenterConstraint;
@property (nonatomic, retain) NSLayoutConstraint *cutoutWidthConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceAvoidanceRectUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *leadingCenterYConstraint;
@property (readonly) Class superclass;

+ (double)baseFontSize;
+ (double)expandedFontSize;
+ (double)height;
+ (bool)supportsDisplayingRingerStatus;
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;

- (void).cxx_destruct;
- (bool)_needsUpdateOfConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cutoutOffset:(double*)arg2 cutoutWidth:(double*)arg3;
- (id)_orderedDisplayItemPlacements;
- (void)_updateRingerDisplayItem:(id)arg1 enabled:(bool)arg2;
- (bool)_updateSystemNavigationWithData:(id)arg1 avoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (double)additionalCarrierItemSpacing;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimationSettings:(id)arg2 options:(unsigned long long)arg3;
- (double)bottomLeadingTopOffset;
- (id)currentAnimationSettings;
- (id)cutoutCenterConstraint;
- (double)cutoutEdgeInset;
- (id)cutoutWidthConstraint;
- (void)dataUpdated:(id)arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (double)effectiveTargetDisplayWidth;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
- (double)expandedIconScale;
- (bool)forceAvoidanceRectUpdate;
- (void)itemCreated:(id)arg1;
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
- (void)setForceAvoidanceRectUpdate:(bool)arg1;
- (void)setLeadingCenterYConstraint:(id)arg1;
- (void)setOnAODLockScreen:(bool)arg1;
- (void)setOnLockScreen:(bool)arg1;
- (id)setupInContainerView:(id)arg1;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (double)topLeadingCenterOffset;
- (id)trailingItemCutoffWidths;
- (unsigned long long)trailingNumberOfItemsForWidth:(double)arg1 includingPrivacyIndicator:(bool)arg2;
- (double)trailingScaleForWidth:(double)arg1 includingPrivacyIndicator:(bool)arg2;
- (void)updateDisplayItem:(id)arg1 toDynamicallyHidden:(bool)arg2 scale:(double)arg3;
- (void)updateDisplayItem:(id)arg1 toScale:(double)arg2;

@end
