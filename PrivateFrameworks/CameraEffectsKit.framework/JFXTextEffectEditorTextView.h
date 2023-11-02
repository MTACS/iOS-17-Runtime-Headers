
@interface JFXTextEffectEditorTextView : UITextView {
    JFXTextEffectEditorView * _editorView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textFrameWithoutFudge;
}

@property (nonatomic) JFXTextEffectEditorView *editorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textFrameWithoutFudge;

- (void).cxx_destruct;
- (void)JFX_adjustSizeToMatchExpectedNumberOfLines:(id)arg1;
- (void)JFX_adjustTextEditingViewFrameAndInsetsForShadow:(id)arg1;
- (void)JFX_adjustTextEditingViewInsetsForVerticalAlignment:(long long)arg1 textAreaHeight:(double)arg2 textHeight:(double)arg3;
- (unsigned long long)JFX_countNumberOfLines;
- (void)applyTextEditingProperties:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)editorView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithTextEditingProperties:(id)arg1 editorView:(id)arg2;
- (id)initWithTextEditingProperties:(id)arg1 editorView:(id)arg2 textContainer:(id)arg3;
- (void)setEditorView:(id)arg1;
- (void)setTextFrameWithoutFudge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textColorForCaretSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textEditingFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFrameWithoutFudge;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)unmarkText;

@end
