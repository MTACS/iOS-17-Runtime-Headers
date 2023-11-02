
@protocol _UITextPasteProgressSupport <NSObject>

@required

- (long long)_textPasteRangeBehavior;
- (UITextRange *)_textPasteSelectableRangeForResult:(NSAttributedString *)arg1 fromRange:(UITextRange *)arg2;

@end
