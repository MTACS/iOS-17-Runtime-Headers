
@interface TFFeedbackFormBaseCell : UITableViewCell <TFFeedbackDataDisplayable> {
    UIView * _bottomSeparator;
    UIView * _topSeparator;
    <TFFeedbackDataUpdateProxy> * _updateProxy;
}

@property (nonatomic, retain) UIView *bottomSeparator;
@property (getter=isSelectable, nonatomic, readonly) bool selectable;
@property (nonatomic, retain) UIView *topSeparator;
@property (nonatomic) <TFFeedbackDataUpdateProxy> *updateProxy;

+ (struct CGSize { double x1; double x2; })sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize { double x1; double x2; })arg3 inTraitEnvironment:(id)arg4;

- (void).cxx_destruct;
- (id)_createSeparatorSubview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrameForTop:(bool)arg1 inLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setupSeparatorViewsForAppearingInSectionLocation:(int)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (id)bottomSeparator;
- (unsigned long long)displayableDataType;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isSelectable;
- (void)layoutSubviews;
- (void)prepareSeparatorsForCellInSectionLocation:(int)arg1;
- (void)setBottomSeparator:(id)arg1;
- (void)setDisplayedDataGroupInclusionBool:(bool)arg1;
- (void)setDisplayedDataImageCollection:(id)arg1;
- (void)setDisplayedDataNumber:(id)arg1;
- (void)setDisplayedDataString:(id)arg1;
- (void)setTopSeparator:(id)arg1;
- (void)setUpdateProxy:(id)arg1;
- (id)topSeparator;
- (id)updateProxy;

@end
