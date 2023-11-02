
@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS <_UIStatusBarRegionCursorInsetProvider> {
    _UIStatusBarDisplayItemPlacement * _datePlacement;
    NSLayoutConstraint * _leadingRegionTrailingAnchorConstraint;
    NSDictionary * _orderedDisplayItemPlacements;
    _UIStatusBarDisplayItemPlacement * _timePlacement;
    NSLayoutConstraint * _trailingRegionLeadingAnchorConstraint;
}

@property (nonatomic, readonly) bool canFixupDisplayItemAttributes;
@property (nonatomic, readonly) UIFont *clockFont;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *datePlacement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } expandedEdgeInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;
@property (nonatomic) _UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsIndirectPointerTouchActions;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *timePlacement;
@property (nonatomic, retain) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint;

+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
+ (double)height;
+ (double)regionCursorCornerRadius;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })regionCursorInsets;
+ (bool)regionCursorIsPill;
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;

- (void).cxx_destruct;
- (void)_dateTimePreferencesUpdated;
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_updateDateAndTimePlacements;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimationSettings:(id)arg2 options:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clockBoundsForLayoutItem:(id)arg1;
- (id)clockFont;
- (id)datePlacement;
- (void)dealloc;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
- (id)expandedFont;
- (id)expandedPillFont;
- (struct CGSize { double x1; double x2; })expandedPillSize;
- (id)init;
- (void)itemCreated:(id)arg1;
- (id)leadingRegionTrailingAnchorConstraint;
- (id)normalFont;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)pillFont;
- (struct CGSize { double x1; double x2; })pillSize;
- (id)pillSmallFont;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (double)regionSpacing;
- (void)setDatePlacement:(id)arg1;
- (void)setLeadingRegionTrailingAnchorConstraint:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (void)setTimePlacement:(id)arg1;
- (void)setTrailingRegionLeadingAnchorConstraint:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (void)sizeUpdatedFromSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (void)statusBarEnabledPartsUpdated;
- (id)styleAttributesForStyle:(long long)arg1;
- (id)timePlacement;
- (id)trailingRegionLeadingAnchorConstraint;
- (bool)wantsPillInExpandedTrailingPlacements;

@end
