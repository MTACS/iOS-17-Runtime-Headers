
@interface SHSheetContentLayoutSpec : NSObject {
    double  _actionInterGroupInset;
    double  _customViewSectionHeight;
    double  _customViewVerticalInset;
    double  _estimatedActionFooterHeight;
    double  _estimatedFooterHeight;
    double  _estimatedHeaderHeight;
    UIColor * _footerBackgroundColor;
    double  _heroActionItemSpacing;
    double  _horizontalCellWidth;
    double  _horizontalSectionBottomInset;
    double  _peopleIconWidth;
    double  _peopleSectionHeight;
    double  _sharingAppIconWidth;
    UIColor * _tintColor;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _topContentSectionHeaderInsets;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) double actionInterGroupInset;
@property (nonatomic, readonly) UIImageSymbolConfiguration *activityImageSymbolConfiguration;
@property (nonatomic) double customViewSectionHeight;
@property (nonatomic) double customViewVerticalInset;
@property (nonatomic, readonly) UIColor *editTintColor;
@property (nonatomic, readonly) double estimatedActionFooterHeight;
@property (nonatomic, readonly) double estimatedFooterHeight;
@property (nonatomic, readonly) double estimatedHeaderHeight;
@property (nonatomic, readonly) UIColor *footerBackgroundColor;
@property (nonatomic, readonly) double heroActionItemSpacing;
@property (nonatomic) double horizontalCellWidth;
@property (nonatomic, readonly) double horizontalSectionBottomInset;
@property (nonatomic, readonly) bool isAccessibilityContentSize;
@property (nonatomic, readonly) double peopleIconWidth;
@property (nonatomic, readonly) double peopleSectionHeight;
@property (nonatomic, readonly) double sharingAppIconWidth;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } topContentSectionHeaderInsets;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (double)actionInterGroupInset;
- (id)actionsLayoutSectionConfigurationWithEnvironment:(id)arg1;
- (id)activityImageSymbolConfiguration;
- (double)customViewSectionHeight;
- (double)customViewVerticalInset;
- (id)editTintColor;
- (double)estimatedActionFooterHeight;
- (double)estimatedFooterHeight;
- (double)estimatedHeaderHeight;
- (id)footerBackgroundColor;
- (double)heroActionItemSpacing;
- (double)horizontalCellWidth;
- (double)horizontalCellWidthForContentWidth:(double)arg1 sizeOffset:(double)arg2;
- (double)horizontalSectionBottomInset;
- (id)initWithTraitCollection:(id)arg1 tintColor:(id)arg2;
- (bool)isAccessibilityContentSize;
- (long long)numberOfHorizontalItemsPerGroupForContentWidth:(double)arg1;
- (double)peopleIconWidth;
- (double)peopleSectionHeight;
- (void)setCustomViewSectionHeight:(double)arg1;
- (void)setCustomViewVerticalInset:(double)arg1;
- (void)setHorizontalCellWidth:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (double)sharingAppIconWidth;
- (bool)shouldUseNarrowLayoutForHeroActionsWithContainerWidth:(double)arg1;
- (id)tintColor;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })topContentSectionHeaderInsets;
- (id)traitCollection;

@end
