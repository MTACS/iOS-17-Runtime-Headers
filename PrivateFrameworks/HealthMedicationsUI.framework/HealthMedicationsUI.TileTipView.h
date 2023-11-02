
@interface HealthMedicationsUI.TileTipView : UIView {
    void $__lazy_storage_$_actionButton;
    void $__lazy_storage_$_detailLabel;
    void $__lazy_storage_$_dismissButton;
    void $__lazy_storage_$_dismissImageView;
    void $__lazy_storage_$_separatorView;
    void $__lazy_storage_$_subdetailLabel;
    void $__lazy_storage_$_titleLabel;
    void currentConstraints;
    void detailLabelBottomConstraint;
    void iconImageView;
    void isUsingVerticalLayout;
    void onDismiss;
    void onTap;
}

- (void).cxx_destruct;
- (void)didTapDismiss;
- (void)didTapView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
