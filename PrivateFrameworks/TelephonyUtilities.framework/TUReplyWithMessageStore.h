
@interface TUReplyWithMessageStore : NSObject

- (id)_cannedRepliesForSending:(bool)arg1;
- (id)_defaultRepliesForSending:(bool)arg1;
- (void)_handleMessagesStoreChanged;
- (id)cannedReplies;
- (id)cannedRepliesForSending;
- (id)cannedReplyActionSheetOptions;
- (int)count;
- (id)customReplies;
- (void)dealloc;
- (id)defaultReplies;
- (id)init;
- (void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2;

@end
