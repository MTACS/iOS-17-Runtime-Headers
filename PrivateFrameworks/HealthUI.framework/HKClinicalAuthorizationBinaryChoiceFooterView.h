
@interface HKClinicalAuthorizationBinaryChoiceFooterView : UIView {
    UIButton * _primaryButton;
    UIButton * _secondaryButton;
    NSLayoutConstraint * _secondaryFirstBaselineToPrimaryBottomConstraint;
}

@property (nonatomic, readonly) UIButton *primaryButton;
@property (nonatomic, readonly) UIButton *secondaryButton;
@property (nonatomic, readonly) NSLayoutConstraint *secondaryFirstBaselineToPrimaryBottomConstraint;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_updateForCurrentContentSizeCategory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryButton;
- (id)secondaryButton;
- (id)secondaryFirstBaselineToPrimaryBottomConstraint;
- (void)traitCollectionDidChange:(id)arg1;

@end
