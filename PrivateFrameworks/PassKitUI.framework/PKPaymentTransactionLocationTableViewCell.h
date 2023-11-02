
@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell {
    UIImageView * _disclosureView;
    PKTransactionMapView * _mapView;
    UILabel * _titleLabel;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) PKPaymentTransaction *transaction;
@property (nonatomic) bool usesDarkMapAppearance;

- (void).cxx_destruct;
- (id)_disclosureView;
- (bool)_shouldShowDisclosureIndicator;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setTitleLabelColor:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setUsesDarkMapAppearance:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transaction;
- (bool)usesDarkMapAppearance;

@end
