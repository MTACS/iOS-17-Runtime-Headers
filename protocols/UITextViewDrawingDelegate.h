
@protocol UITextViewDrawingDelegate <NSObject>

@optional

- (bool)textView:(UITextView *)arg1 canAddDrawingAtIndex:(unsigned long long)arg2;
- (void)textView:(UITextView *)arg1 didRemoveDrawingAtIndex:(unsigned long long)arg2;
- (NSTextAttachment *)textView:(UITextView *)arg1 newAttachmentForFileType:(NSString *)arg2;
- (bool)textView:(UITextView *)arg1 shouldDeleteDrawingAtIndex:(unsigned long long)arg2;
- (void)textView:(UITextView *)arg1 upgradeDrawingAtIndex:(unsigned long long)arg2 itemProviders:(NSArray *)arg3 insertionLocationInDrawing:(struct CGPoint { double x1; double x2; })arg4;
- (void)textView:(UITextView *)arg1 willAddDrawingAtIndex:(unsigned long long)arg2;
- (bool)textViewCanAddStroke:(UITextView *)arg1;
- (bool)textViewCanSelectDrawing:(UITextView *)arg1;
- (void)textViewDidEndStroke:(UITextView *)arg1;
- (void)textViewWillBeginStroke:(UITextView *)arg1;
- (void)textViewWillBeginStroke:(UITextView *)arg1 forTouch:(UITouch *)arg2;

@end
