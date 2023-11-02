
@interface HealthExperienceUI.ResettableCalendarDateDisplayCell : UICollectionViewListCell {
    void clearButton;
    void clearButtonWidthConstraint;
    void dateLabel;
    void item;
    void titleAndValueFieldSideBySideConstraints;
    void titleAndValueFieldStackedConstraints;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)didTapClear;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
