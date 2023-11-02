
@interface HealthMedicationsUI.TextItemCell : UICollectionViewListCell <UITextViewDelegate> {
    void $__lazy_storage_$_textView;
    void item;
}

- (void).cxx_destruct;
- (void)didTapDoneWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;

@end
