
@protocol CKMessageEntryContentViewDelegate <UIScrollViewDelegate>

@required

- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didAddPluginEntryViewControllerToViewHierarchy:(UIViewController *)arg2;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didPasteURL:(NSString *)arg2;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didStagePluginPayload:(IMPluginPayload *)arg2;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didTapCharacterAtIndex:(unsigned long long)arg2 isLongPress:(bool)arg3;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 insertMention:(NSString *)arg2 entity:(CKEntity *)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 insertionPointEnteredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forMention:(NSString *)arg3 withEntities:(NSArray *)arg4;
- (bool)messageEntryContentView:(CKMessageEntryContentView *)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(NSString *)arg3;
- (bool)messageEntryContentView:(CKMessageEntryContentView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryContentView:(void *)arg1 showMentionSuggestionsForEntities:(void *)arg2 replacementRange:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: CKMessageEntryContentView *, NSArray *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKEntity *, void*
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 willAddPluginEntryViewControllerToViewHierarchy:(UIViewController *)arg2;
- (bool)messageEntryContentViewCanSuggestMentionForCurrentSelection:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewCancelShowMentionSuggestions:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewCancelWasTapped:(CKMessageEntryContentView *)arg1 shelfPluginPayload:(IMPluginPayload *)arg2;
- (void)messageEntryContentViewDidBeginEditing:(CKMessageEntryContentView *)arg1 wasAlreadyActive:(bool)arg2;
- (void)messageEntryContentViewDidChange:(CKMessageEntryContentView *)arg1 isTextChange:(bool)arg2 isShelfChange:(bool)arg3;
- (void)messageEntryContentViewDidChangeSelection:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidEndEditing:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidReturn:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidTapHandwritingKey:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidTapMention:(CKMessageEntryContentView *)arg1 characterIndex:(double)arg2;
- (void)messageEntryContentViewInsertionPointExitedRangeWithMention:(CKMessageEntryContentView *)arg1;
- (struct CGSize { double x1; double x2; })messageEntryContentViewMaxShelfPluginViewSize:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewShelfDidChange:(CKMessageEntryContentView *)arg1;
- (bool)messageEntryContentViewShouldBeginEditing:(CKMessageEntryContentView *)arg1;
- (bool)messageEntryContentViewShouldResignFirstResponder:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewWasTapped:(CKMessageEntryContentView *)arg1 isLongPress:(bool)arg2;
- (bool)messageEntryContentViewWillChangeText:(CKMessageEntryContentView *)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withReplacementText:(NSString *)arg3;

@end
