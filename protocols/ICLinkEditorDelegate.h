
@protocol ICLinkEditorDelegate <NSObject>

@required

- (void)createLink:(NSURL *)arg1 title:(NSString *)arg2 textSelection:(ICTTMergeableStringSelection *)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 addApproach:(long long)arg5;
- (void)createNoteLinkAttachment:(NSString *)arg1 textSelection:(ICTTMergeableStringSelection *)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 addApproach:(long long)arg4;
- (bool)languageHasSpaces;
- (void)linkEditorWillDismiss;
- (void)openLinkEditor:(id)arg1;
- (void)removeLinksFromCurrentSelection;
- (void)removeLinksFromTextSelection:(ICTTMergeableStringSelection *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)shouldShowFloatingSuggestions;
- (long long)writingDirection;

@end
