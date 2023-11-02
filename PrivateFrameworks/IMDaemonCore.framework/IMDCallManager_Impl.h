
@interface IMDCallManager_Impl : NSObject <TUConversationManagerDelegate> {
    void conversationManager;
    void featureFlags;
    void newChatListenerTask;
    void queue;
    void serviceSession;
}

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 conversationUpdatedMessagesGroupUUID:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithServiceSession:(id)arg1;

@end
