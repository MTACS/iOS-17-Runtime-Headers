
@protocol WFSlotTemplateTextEntry <WFInputViewMutable, UITextInput>

@required

- (NSAttributedString *)attributedText;
- (bool)clearsZeroWhenTyping;
- (UIFont *)font;
- (void)insertAttributedText:(NSAttributedString *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setClearsZeroWhenTyping:(bool)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)wf_replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedText:(NSAttributedString *)arg2;

@end
