
@interface SeymourUI.FilterHeaderCell : UICollectionViewCell {
    void defaultButtonInsets;
    void delegate;
    void filterButton;
    void filterButtonState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void localizer;
    void titleLabel;
    void titleLabelTrailingToFilterButtonLeadingConstraint;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)tappedFilterButton:(id)arg1;
- (void)textSizeChanged:(id)arg1;
- (void)tintColorDidChange;

@end
