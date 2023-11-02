
@interface PaperKit.ValueStepper : UIControl {
    void $__lazy_storage_$_currentValue;
    void contentStackView;
    void cornerRadius;
    void decreaseButton;
    void increaseButton;
    void interItemSpacing;
    void maxValue;
    void minValue;
    void unit;
    void valueLabel;
    void valueLabelBorderWidth;
    void valueLabelWidth;
}

- (void).cxx_destruct;
- (void)didTapLeftButton;
- (void)didTapRightButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
