
@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell {
    long long  _contentAlignment;
}

@property (nonatomic) long long contentAlignment;

+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (struct CGSize { double x1; double x2; })desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3;
+ (id)reuseIdentifier;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;

- (void)applyStyle;
- (long long)contentAlignment;
- (double)contentViewBottomAnchorConstraintConstant;
- (void)loadContentViewConstraints;
- (double)minimumContentHeight;
- (void)setContentAlignment:(long long)arg1;
- (void)setupAccessoryImageViewInView:(id)arg1;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (void)updateConstraints;

@end
