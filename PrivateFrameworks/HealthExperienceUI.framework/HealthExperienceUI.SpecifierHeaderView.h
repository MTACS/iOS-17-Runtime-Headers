
@interface HealthExperienceUI.SpecifierHeaderView : UIView <PSHeaderFooterView> {
    void $__lazy_storage_$_descriptionLabel;
    void $__lazy_storage_$_iconImageView;
    void $__lazy_storage_$_statusLabel;
    void descriptionText;
    void image;
    void statusText;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;

@end
