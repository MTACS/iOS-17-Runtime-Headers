
@interface HealthRecordsUI.NavigationCell : UICollectionViewListCell {
    void $__lazy_storage_$_disclosureImageView;
    void $__lazy_storage_$_titleLabel;
    void item;
    void margin;
    void topAndBottomDistance;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)showDetailViewController:(id)arg1 viewController:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
