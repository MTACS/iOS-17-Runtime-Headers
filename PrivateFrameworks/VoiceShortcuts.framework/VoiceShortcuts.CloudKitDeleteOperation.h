
@interface VoiceShortcuts.CloudKitDeleteOperation : WFStateMachine {
    void environment;
    void progress;
    void reason;
    void recordId;
    void subject;
}

- (void).cxx_destruct;
- (id)init;
- (bool)transitionToState:(id)arg1 withReason:(id)arg2;

@end
