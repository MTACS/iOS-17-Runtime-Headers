
@interface ICTodoButtonProxyElement : UIAccessibilityElement {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
    ICBaseTextView * _textView;
    ICTodoButton * _todoButton;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;
@property (nonatomic) ICBaseTextView *textView;
@property (nonatomic) ICTodoButton *todoButton;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)initWithTodoButton:(id)arg1 inTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textView:(id)arg3;
- (bool)isAccessibilityElement;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextView:(id)arg1;
- (void)setTodoButton:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (id)textView;
- (id)todoButton;

@end
