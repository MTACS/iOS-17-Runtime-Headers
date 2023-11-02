
@interface PSCapacityBarCell : PSTableCell {
    NSLayoutConstraint * _barHeightConstraint;
    PSCapacityBarView * _barView;
    UIFont * _bigFont;
    NSMutableArray * _commonConstraints;
    bool  _forceLoading;
    bool  _hideLegend;
    NSMutableArray * _largeConstraints;
    NSMutableArray * _legendConstraints;
    UIFont * _legendFont;
    UIColor * _legendTextColor;
    UIStackView * _legendView;
    NSArray * _legends;
    UILabel * _loadingLabel;
    NSMutableArray * _normalConstraints;
    PSCapacityBarLegendView * _otherLegend;
    bool  _showOtherLegend;
    NSString * _sizeFormat;
    UILabel * _sizeLabel;
    bool  _sizesAreMem;
    double  _tableWidth;
    UILabel * _titleLabel;
}

+ (id)specifierWithTitle:(id)arg1;
+ (id)specifierWithTitle:(id)arg1 useStandardFontSizeForSizeLabel:(bool)arg2;

- (void).cxx_destruct;
- (void)addHorizontalLegends;
- (void)addVerticalLegends;
- (void)createCommonConstraints;
- (void)createLargeConstraints;
- (void)createLegends:(id)arg1;
- (void)createNormalConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)initializeViews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)usageString:(id)arg1;

@end
