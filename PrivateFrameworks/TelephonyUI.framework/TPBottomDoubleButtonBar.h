
@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {
    TPButton * _button2;
}

- (void).cxx_destruct;
- (double)_buttonWidth;
- (void)_layoutButtons;
- (id)button2;
- (void)layoutSubviews;
- (void)setButton2:(id)arg1 andStyle:(bool)arg2;
- (void)setButton:(id)arg1 andStyle:(bool)arg2;

@end
