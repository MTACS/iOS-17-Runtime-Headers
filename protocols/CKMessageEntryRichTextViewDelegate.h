
@protocol CKMessageEntryRichTextViewDelegate <UITextViewDelegate>

@required

- (void)didSetAttributedTextOfRichTextEntryView:(CKMessageEntryRichTextView *)arg1;
- (double)maxWidthForPreviewImagesInMessageEntryRichTextView:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 didTapCharacterAtIndex:(unsigned long long)arg2 isLongPress:(bool)arg3;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 insertMention:(NSString *)arg2 entity:(CKEntity *)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 insertionPointEnteredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forMention:(NSString *)arg3 withEntities:(NSArray *)arg4;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 pastedURL:(NSString *)arg2;
- (bool)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 shouldPasteMediaObjects:(NSArray *)arg2;
- (bool)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 shouldRecognizeGesture:(UIGestureRecognizer *)arg2;
- (void)messageEntryRichTextView:(void *)arg1 showMentionSuggestionsForEntities:(void *)arg2 replacementRange:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: CKMessageEntryRichTextView *, NSArray *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKEntity *, void*
- (bool)messageEntryRichTextViewCanSuggestMentionForCurrentSelection:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextViewCancelShowMentionSuggestions:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextViewDidTapHandwritingKey:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextViewDidTapMention:(CKMessageEntryRichTextView *)arg1 characterIndex:(double)arg2;
- (void)messageEntryRichTextViewInsertionPointExitedRangeWithMention:(CKMessageEntryRichTextView *)arg1;
- (bool)messageEntryRichTextViewShouldResignFirstResponder:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextViewWasTapped:(CKMessageEntryRichTextView *)arg1 isLongPress:(bool)arg2;

@end
