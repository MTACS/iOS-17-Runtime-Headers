
@interface PKPaymentAuthorizationPasswordButtonView : UIView {
    NSLayoutConstraint * _buttonBottomPaddingConstraint;
    NSLayoutConstraint * _buttonTopPaddingConstraint;
    NSMutableArray * _hiddenConstraints;
    UIButton * _passwordButton;
    UIView * _separatorView;
    NSLayoutConstraint * _seperatorHeightConstraint;
}

- (void).cxx_destruct;
- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 action:(id)arg2;
- (void)setActionTitle:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)updateConstraints;

@end
