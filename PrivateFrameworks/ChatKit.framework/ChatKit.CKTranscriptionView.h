
@interface ChatKit.CKTranscriptionView : UIView {
    void collapsedButtonColor;
    void didResize;
    void didTapExpansionButton;
    void expandedButtonColor;
    void expansionButton;
    void expansionState;
    void text;
    void textColor;
    void textView;
}

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)didToggleLineCountChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
