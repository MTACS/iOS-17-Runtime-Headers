
@protocol EDMessageQueryHelperDelegate <NSObject>

@required

- (void)queryHelper:(EDMessageQueryHelper *)arg1 conversationIDDidChangeForMessages:(NSArray *)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didAddMessages:(NSArray *)arg2;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didDeleteMessages:(NSArray *)arg2;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didFindMessages:(NSArray *)arg2;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 didUpdateMessages:(NSArray *)arg2 forKeyPaths:(NSArray *)arg3;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 messageFlagsDidChangeForMessages:(NSArray *)arg2;
- (void)queryHelper:(EDMessageQueryHelper *)arg1 objectIDDidChangeForMessage:(EMMessage *)arg2 oldObjectID:(EMMessageObjectID *)arg3 oldConversationID:(long long)arg4;
- (void)queryHelperDidFindAllMessages:(EDMessageQueryHelper *)arg1;
- (void)queryHelperDidFinishRemoteSearch:(EDMessageQueryHelper *)arg1;
- (void)queryHelperNeedsRestart:(EDMessageQueryHelper *)arg1;

@end
