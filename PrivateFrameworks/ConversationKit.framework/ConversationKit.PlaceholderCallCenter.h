
@interface ConversationKit.PlaceholderCallCenter : NSObject <TUConversationManagerDelegate> {
    void activeCalls;
    void conversationManager;
    void expectedAVLessConversationUUIDs;
    void queue;
}

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 avModeChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (id)init;

@end
