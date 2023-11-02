
@interface STUIStatusBarVisualProvider_FixedSplit : STUIStatusBarVisualProvider_Split {
    NSLayoutConstraint * _leadingBottomConstraint;
}

@property (readonly) double bottomLeadingBaseline;
@property (readonly) double bottomLeadingWidth;
@property (nonatomic, retain) NSLayoutConstraint *leadingBottomConstraint;
@property (readonly) double leadingCenteringEdgeInset;
@property (readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } leadingEdgeInsets;
@property (readonly) double leadingPillInset;
@property (readonly) double leadingPillSpacing;
@property (readonly) double leadingSmallPillSpacing;
@property (readonly) double nativeDisplayWidth;
@property (readonly) double pillCenteringEdgeInset;
@property (readonly) UIFont *pillFont;
@property (readonly) struct CGSize { double x1; double x2; } pillSize;
@property (readonly) UIFont *pillSmallFont;
@property (readonly) double trailingCenteringEdgeInset;
@property (readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } trailingEdgeInsets;

+ (double)additionalBottomLeadingMargin;
+ (double)expandedPillFontSize;
+ (double)leadingCenteringOffset;
+ (double)pillCenteringOffset;
+ (double)pillFontSize;
+ (bool)showsLargeBatteryChargingAnimation;
+ (double)trailingCenteringOffset;
+ (double)trailingEdgeInsetLeadingAdjustment;

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsFromCenteringEdgeInset:(double)arg1 trailing:(bool)arg2;
- (id)_orderedDisplayItemPlacements;
- (bool)_updateLowerRegionsWithData:(id)arg1;
- (void)_updateSystemNavigationWithData:(id)arg1;
- (id)animationForBackgroundActivityPillAnimation:(id)arg1 duration:(double)arg2 scale:(double)arg3;
- (double)bottomLeadingBaseline;
- (double)bottomLeadingWidth;
- (void)dataUpdated:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
- (id)expandedPillFont;
- (struct CGSize { double x1; double x2; })expandedPillSize;
- (void)itemCreated:(id)arg1;
- (id)leadingBottomConstraint;
- (double)leadingCenteringEdgeInset;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })leadingEdgeInsets;
- (double)leadingItemSpacing;
- (double)leadingPillInset;
- (double)leadingPillSpacing;
- (double)leadingSmallPillSpacing;
- (double)nativeDisplayWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })notchRect;
- (struct CGSize { double x1; double x2; })notchSize;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (double)pillCenteringEdgeInset;
- (id)pillFont;
- (struct CGSize { double x1; double x2; })pillSize;
- (id)pillSmallFont;
- (double)referenceWidth;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (void)setLeadingBottomConstraint:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (id)styleAttributesForStyle:(long long)arg1;
- (double)trailingCenteringEdgeInset;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })trailingEdgeInsets;
- (bool)wantsPillInExpandedTrailingPlacements;

@end
