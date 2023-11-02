
@interface CKMessageRetractionChatItem : CKStampButtonChatItem

@property (nonatomic, readonly) bool isRetractedReply;
@property (nonatomic, readonly) bool isRetractedReplyThreadOriginator;

- (id)_loadTranscriptTextWithRetractionUnsupportedCount:(unsigned long long)arg1 unsupportedNames:(id)arg2 isFromMe:(bool)arg3 isFailedRetraction:(bool)arg4 senderName:(id)arg5;
- (id)_retractionUnsupportedByNamesFromHandles:(id)arg1;
- (bool)canBeSelectedInEditMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (bool)hasSelectableText;
- (id)imMessageRetractionChatItem;
- (bool)isRetractedReply;
- (bool)isRetractedReplyThreadOriginator;
- (id)loadTranscriptText;

@end
