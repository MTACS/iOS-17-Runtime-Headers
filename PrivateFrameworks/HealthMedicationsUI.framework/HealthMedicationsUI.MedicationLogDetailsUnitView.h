
@interface HealthMedicationsUI.MedicationLogDetailsUnitView : UIView <UITextFieldDelegate> {
    void $__lazy_storage_$_countingAffixLabel;
    void $__lazy_storage_$_titleLabel;
    void $__lazy_storage_$_valueAffixStackView;
    void $__lazy_storage_$_valueTextField;
    void detailsDelegate;
    void valueText;
    void viewModel;
}

- (void).cxx_destruct;
- (void)didChangeText:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;

@end
