
@interface ICBaseLayoutManager : NSLayoutManager {
    UITextView * _textView;
}

@property (nonatomic) UITextView *textView;

+ (id)defaultLinkTextAttributes;

- (void).cxx_destruct;
- (double)bulletYOffsetForCharacterAtIndex:(unsigned long long)arg1;
- (void)drawBulletsForListRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphStyle:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)drawListStylesForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setTextView:(id)arg1;
- (id)textContainer;
- (id)textController;
- (id)textView;

@end
