
@interface PaperKit.TextBoxCanvasElementView : _TtGC8PaperKit17CanvasElementViewVS_7TextBox_ {
    void _textBoxView;
}

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)setNeedsDisplay;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textBoxViewActiveTextBoxFrame:(id)arg1;
- (void)textBoxViewUpdateModelFrame:(id)arg1 modelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)textBoxViewUpdateViewFrame:(id)arg1 viewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
