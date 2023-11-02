
@interface TelephonyUI.MessageIndicatorView : UIView {
    void $__lazy_storage_$_backgroundView;
    void cornerRadius;
    void durationLabel;
    void location;
    void padding;
    void recordImageView;
    void tapHandler;
    void textPadding;
    void titleLabel;
    void viewModel;
}

- (void).cxx_destruct;
- (void)handleTapGesture;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
