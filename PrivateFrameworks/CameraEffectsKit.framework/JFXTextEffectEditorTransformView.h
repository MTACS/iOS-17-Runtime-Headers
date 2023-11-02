
@interface JFXTextEffectEditorTransformView : UIView {
    JFXTextEffectEditorTextView * _textView;
}

@property (nonatomic, readonly) JFXTextEffectEditorTextView *textView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textView:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)textView;

@end
