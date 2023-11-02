
@interface HealthMedicationsUI.UITextViewWithPlaceholder : UITextView {
    void $__lazy_storage_$_placeholderLabel;
    void cancellable;
}

@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (id)text;
- (void)traitCollectionDidChange:(id)arg1;

@end
