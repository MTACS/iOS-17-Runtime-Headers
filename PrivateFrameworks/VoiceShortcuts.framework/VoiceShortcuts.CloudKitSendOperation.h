
@interface VoiceShortcuts.CloudKitSendOperation : WFStateMachine {
    void database;
    void environment;
    void progress;
    void reason;
    void record;
    void subject;
}

- (void).cxx_destruct;
- (id)init;
- (bool)transitionToState:(id)arg1 withReason:(id)arg2;

@end
