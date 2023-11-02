
@interface SCLSettingsSyncState : NSObject {
    SCLSettingsSyncStateMachine * _stateMachine;
    unsigned long long  _status;
}

@property (nonatomic) SCLSettingsSyncStateMachine *stateMachine;
@property (nonatomic, readonly) unsigned long long status;

- (void).cxx_destruct;
- (void)commitSettings;
- (void)didEnqueueMessage:(id)arg1;
- (void)didEnterWithPreviousState:(id)arg1;
- (void)enqueueFailedWithError:(id)arg1;
- (id)initWithStateMachine:(id)arg1;
- (void)message:(id)arg1 didFailToAcknowledgeWithError:(id)arg2;
- (void)message:(id)arg1 failedWithError:(id)arg2;
- (void)messageDidSend:(id)arg1;
- (void)messageWasDelivered:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)settingsDidChange;
- (void)significantUserInteractionOccurred;
- (id)stateMachine;
- (unsigned long long)status;
- (void)willExitWithNextState:(id)arg1;
- (void)xpcActivityStarted;

@end
