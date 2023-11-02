
@interface HKClinicalAuthorizationPrimaryChoiceFooterView : UIView {
    UIButton * _primaryButton;
}

@property (nonatomic, readonly) UIButton *primaryButton;

- (void).cxx_destruct;
- (double)_bottomMarginForTraitCollection:(id)arg1;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_updateMetricsWithTraitCollection:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryButton;
- (void)traitCollectionDidChange:(id)arg1;

@end
