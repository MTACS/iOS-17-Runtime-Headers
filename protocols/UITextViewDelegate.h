
@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>

@optional

- (UIMenu *)textView:(UITextView *)arg1 editMenuForTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 suggestedActions:(NSArray *)arg3;
- (UITextItemMenuConfiguration *)textView:(UITextView *)arg1 menuConfigurationForTextItem:(UITextItem *)arg2 defaultMenu:(UIMenu *)arg3;
- (UIAction *)textView:(UITextView *)arg1 primaryActionForTextItem:(UITextItem *)arg2 defaultAction:(UIAction *)arg3;
- (bool)textView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(NSString *)arg3;
- (bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)textView:(UITextView *)arg1 textItemMenuWillDisplayForTextItem:(UITextItem *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)textView:(UITextView *)arg1 textItemMenuWillEndForTextItem:(UITextItem *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)textView:(UITextView *)arg1 willDismissEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)textView:(UITextView *)arg1 willPresentEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)textViewDidBeginEditing:(UITextView *)arg1;
- (void)textViewDidChange:(UITextView *)arg1;
- (void)textViewDidChangeSelection:(UITextView *)arg1;
- (void)textViewDidEndEditing:(UITextView *)arg1;
- (bool)textViewShouldBeginEditing:(UITextView *)arg1;
- (bool)textViewShouldEndEditing:(UITextView *)arg1;

@end
