
@interface DropInCore.CallCenterManager : NSObject <TUConversationManagerDelegate> {
    void activeCall;
    void activeConversation;
    void callCenter;
    void callParticpants;
    void conversationProviderLoader;
    void conversationProviderManager;
    void conversationTimer;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void participantValidator;
    void serialQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signposter;
    void someoneJoined;
}

- (void).cxx_destruct;
- (void)callStatusChangedWithNotification:(id)arg1;
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 updatedIncomingPendingConversations:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)serverDisconnectedForConversationManager:(id)arg1;
- (void)uplinkMutedChangedWithNotification:(id)arg1;

@end
