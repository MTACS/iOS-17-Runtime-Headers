
@interface HealthMedicationsUI.DosageCollectionViewCell : UICollectionViewListCell <UITextFieldDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_deleteAccessory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_spacerAccessory;
    void $__lazy_storage_$_toolbar;
    void $__lazy_storage_$_valueField;
    void $__lazy_storage_$_valueLabel;
    void baseIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentDosage;
    void currentLayoutConstraints;
    void item;
    void timePicker;
}

- (void).cxx_destruct;
- (void)doneTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (void)timePickerChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)valueLabelTapped:(id)arg1;

@end
