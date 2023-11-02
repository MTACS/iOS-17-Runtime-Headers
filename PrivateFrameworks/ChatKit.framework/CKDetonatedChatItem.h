
@interface CKDetonatedChatItem : CKMessagePartChatItem

- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (bool)canAttachStickers;
- (bool)canCopy;
- (bool)canExport;
- (bool)canForward;
- (bool)canPerformQuickAction;
- (bool)canSendAsTextMessage;
- (id)dragItemProvider;
- (bool)isSensitive;
- (id)momentShareURL;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
