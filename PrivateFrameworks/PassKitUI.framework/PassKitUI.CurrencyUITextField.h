
@interface PassKitUI.CurrencyUITextField : UITextField <UITextFieldDelegate> {
    void _amount;
    void formatter;
    void isEditable;
}

- (void).cxx_destruct;
- (void)deleteBackward;
- (void)editingChanged;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)resetSelection;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;

@end
