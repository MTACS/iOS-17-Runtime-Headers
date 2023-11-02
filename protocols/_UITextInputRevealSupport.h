
@protocol _UITextInputRevealSupport <UITextInput>

@required

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsrangeForTextRange:(UITextRange *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedNSRange;
- (UITextRange *)_textRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
