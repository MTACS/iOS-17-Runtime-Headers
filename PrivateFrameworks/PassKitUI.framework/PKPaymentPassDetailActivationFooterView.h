
@interface PKPaymentPassDetailActivationFooterView : UITableViewHeaderFooterView {
    UIButton * _activationButton;
    UILabel * _footerTextLabel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activationAction:(id)arg2;
- (void)layoutSubviews;
- (void)setActivationButtonText:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setupActivationButtonWithAction:(id)arg1;
- (void)setupFooter;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
