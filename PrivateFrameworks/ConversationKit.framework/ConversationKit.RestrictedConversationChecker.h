
@interface ConversationKit.RestrictedConversationChecker : NSObject <TUConversationManagerDelegate> {
    void callFilterController;
    void screenTimeObserver;
    void unrestrictedAddressesForConversation;
}

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 migratingFromConversation:(id)arg2 toConversation:(id)arg3;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (id)init;

@end
