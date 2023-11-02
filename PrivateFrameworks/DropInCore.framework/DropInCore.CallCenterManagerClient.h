
@interface DropInCore.CallCenterManagerClient : DropInCore.CallCenterManager {
    void audioPowerManager;
    void hostPseudonym;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
}

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;

@end
