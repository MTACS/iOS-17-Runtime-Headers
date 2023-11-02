
@interface PKFindBankAccountInformationFooterView : PKTableFooterView {
    UIButton * _accountInformationButton;
}

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 action:(id)arg2;
- (void)layoutSubviews;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setupAccountInformationButtonWithAction:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
