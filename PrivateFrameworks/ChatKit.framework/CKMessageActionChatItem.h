
@interface CKMessageActionChatItem : CKMultilineStampLabelChatItem

- (long long)actionType;
- (id)handle;
- (id)loadTranscriptText;
- (id)sender;

@end
