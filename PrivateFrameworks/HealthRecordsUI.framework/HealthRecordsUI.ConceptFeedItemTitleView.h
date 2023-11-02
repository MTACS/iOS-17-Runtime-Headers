
@interface HealthRecordsUI.ConceptFeedItemTitleView : UIView {
    void $__lazy_storage_$_bottomConstraint;
    void $__lazy_storage_$_dateChevronConstraint;
    void $__lazy_storage_$_dateTrailingConstraint;
    void activeConstraints;
    void categoryColor;
    void chevronView;
    void dateLabel;
    void dateString;
    void headerImage;
    void hidesChevron;
    void hidesHeaderSymbolForAccessibilitySizing;
    void isInEditingMode;
    void title;
    void titleLabel;
    void viewData;
}

@property (nonatomic, readonly) NSLayoutYAxisAnchor *lastBaselineAnchor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastBaselineAnchor;
- (void)traitCollectionDidChange:(id)arg1;

@end
