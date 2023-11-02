
@interface PKPaymentSetupFieldFooterView : UITableViewHeaderFooterView {
    UIButton * _button;
    <PKPaymentSetupFieldFooterViewDelegate> * _delegate;
    PKPaymentSetupFieldLabel * _field;
}

@property (nonatomic) <PKPaymentSetupFieldFooterViewDelegate> *delegate;
@property (nonatomic, retain) PKPaymentSetupFieldLabel *field;

- (void).cxx_destruct;
- (void)_buttonTapped;
- (void)_updateDisplayForFieldTypeLabel;
- (id)delegate;
- (id)field;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setField:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
