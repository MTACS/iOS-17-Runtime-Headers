
@interface HealthMedicationsUI.FieldCell : UICollectionViewListCell <UITextFieldDelegate> {
    void $__lazy_storage_$_numberFormatter;
    void $__lazy_storage_$_textField;
    void baseIdentifier;
    void item;
}

- (void).cxx_destruct;
- (void)didTapCell;
- (void)didTapDoneWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidChangeWithSender:(id)arg1;

@end
