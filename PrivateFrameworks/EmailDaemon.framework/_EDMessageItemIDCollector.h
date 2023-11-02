
@interface _EDMessageItemIDCollector : NSObject <EDMessageQueryHelperDelegate> {
    NSConditionLock * _collectionLock;
    NSString * _errorString;
    NSMutableArray * _messageItemIDs;
    <EFScheduler> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectItemIDsWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remindMeNotificationController:(id)arg4 remoteSearchProvider:(id)arg5 errorString:(id*)arg6;
- (id)init;
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
- (void)queryHelperDidFindAllMessages:(id)arg1;
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;
- (void)queryHelperNeedsRestart:(id)arg1;

@end
