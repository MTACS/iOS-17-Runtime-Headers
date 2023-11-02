
@interface CKMessageReplyCountChatItem : CKMessageStatusChatItem

@property (nonatomic, readonly) unsigned long long replyCount;

- (id)_loadTranscriptButtonTextForReplyCountButtonType;
- (long long)buttonType;
- (Class)cellClass;
- (unsigned long long)layoutType;
- (id)loadTranscriptButtonText;
- (unsigned long long)replyCount;
- (bool)shouldHideDuringDarkFSM;
- (BOOL)transcriptOrientation;

@end
