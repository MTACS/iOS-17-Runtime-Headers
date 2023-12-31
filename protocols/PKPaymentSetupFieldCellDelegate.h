
@protocol PKPaymentSetupFieldCellDelegate <NSObject>

@optional

- (void)fieldCellDidTapButton:(PKPaymentSetupFieldCell *)arg1;
- (void)fieldCellEditableTextFieldDidBeginEditing:(PKPaymentSetupFieldCell *)arg1;
- (void)fieldCellEditableTextFieldDidEndEditing:(PKPaymentSetupFieldCell *)arg1;
- (bool)fieldCellEditableTextFieldShouldBeginEditing:(PKPaymentSetupFieldCell *)arg1;
- (bool)fieldCellEditableTextFieldShouldClear:(PKPaymentSetupFieldCell *)arg1;
- (bool)fieldCellEditableTextFieldShouldReturn:(PKPaymentSetupFieldCell *)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(PKPaymentSetupFieldCell *)arg1;

@end
