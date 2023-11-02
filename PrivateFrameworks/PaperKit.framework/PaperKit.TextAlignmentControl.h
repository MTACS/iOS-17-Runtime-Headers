
@interface PaperKit.TextAlignmentControl : UIControl {
    void axis;
    void centerAlignmentButton;
    void contentStackView;
    void justifiedAlignmentButton;
    void leftAlignmentButton;
    void maximumButtonSize;
    void minimumButtonSize;
    void regularCornerRadius;
    void rightAlignmentButton;
    void selectedTextAlignment;
    void useCapsuleStyle;
}

- (void).cxx_destruct;
- (void)didTapCenterAlignmentButton;
- (void)didTapJustifiedAlignmentButton;
- (void)didTapLeftAlignmentButton;
- (void)didTapRightAlignmentButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
