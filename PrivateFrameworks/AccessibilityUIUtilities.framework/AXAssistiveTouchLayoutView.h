
@interface AXAssistiveTouchLayoutView : UIView {
    NSArray * _itemConstraints;
    NSMutableArray * _positioningLayoutGuides;
}

@property (nonatomic, retain) NSArray *itemConstraints;
@property (nonatomic, retain) NSMutableArray *positioningLayoutGuides;

+ (id)_imageMaximumContentSizeCategoryIndependentOfLabel;
+ (double)_layoutViewSideLengthScaledFromDefaultLength:(double)arg1 labelContentSizeCategory:(id)arg2;
+ (id)_preferredContentSizeCategoryCappedByMinimumContentSizeCategory:(id)arg1 maximumContentSizeCategory:(id)arg2;
+ (id)_traitCollectionForMinimumContentSizeCategory:(id)arg1 maximumContentSizeCategory:(id)arg2;
+ (double)defaultSideLength;
+ (id)fontMetrics;
+ (id)imageMaximumContentSizeCategory;
+ (id)imageMinimumContentSizeCategory;
+ (id)labelFont;
+ (id)labelMaximumContentSizeCategory;
+ (id)labelMinimumContentSizeCategory;
+ (double)layoutViewSideLengthScaledFromDefaultLength:(double)arg1;
+ (double)minimumOuterPadding;
+ (id)traitCollectionForImagePreferredContentSizeCategory;
+ (id)traitCollectionForLabelPreferredContentSizeCategory;

- (void).cxx_destruct;
- (void)_enableAutoLayoutForAllItems:(id)arg1;
- (void)_enumerateListsOfLocations:(id)arg1 items:(id)arg2 withBlock:(id /* block */)arg3;
- (id)_setUpConstraintsForPreferredPositionsForItems:(id)arg1 positions:(id)arg2;
- (id)_setUpConstraintsToAlignItems:(id)arg1 rows:(id)arg2 columns:(id)arg3;
- (id)_setUpConstraintsToAvoidCollisions:(id)arg1 rows:(id)arg2 columns:(id)arg3 clockwiseOctagonalLocations:(id)arg4;
- (void)centerItems:(id)arg1;
- (void)centerItems:(id)arg1 withView:(id)arg2;
- (id)itemConstraints;
- (void)layoutItemsByLocation:(id)arg1 hasBackButton:(bool)arg2;
- (void)layoutItemsByLocation:(id)arg1 positions:(id)arg2 rows:(id)arg3 columns:(id)arg4 clockwiseOctagonalLocations:(id)arg5 horizontallyCenteredLocation:(id)arg6;
- (id)positioningLayoutGuides;
- (void)setItemConstraints:(id)arg1;
- (void)setPositioningLayoutGuides:(id)arg1;

@end
