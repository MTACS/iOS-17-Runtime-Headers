
@interface ICTextViewControllerView : UIView {
    ICTextView * _textView;
}

@property (nonatomic, readonly) ICTextView *textView;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithTextView:(id)arg1;
- (id)textView;

@end
