
@interface HealthExperienceUI.TextFieldCollectionViewCell : UICollectionViewListCell {
    void $__lazy_storage_$_proxy;
    void $__lazy_storage_$_titleLabel;
    void $__lazy_storage_$_valueField;
    void isEditEnabled;
    void item;
    void titleAndValueFieldSideBySideConstraints;
    void titleAndValueFieldStackedConstraints;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
