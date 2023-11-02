
@protocol ICMentionsControllerApp <NSObject>

@optional

- (void)insertMentionAttachment:(ICInlineAttachment *)arg1 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 viaAutoComplete:(bool)arg3;
- (void)updateAutoCompletionView:(NSSet *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textView:(UITextView *)arg3 mentionString:(NSString *)arg4;

@end
