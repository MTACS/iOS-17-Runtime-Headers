
@interface SCLSettingsSyncStateMachine : NSObject {
    SCLSettingsSyncContext * _context;
    SCLSettingsSyncState * _currentState;
    <SCLSettingsSyncStateMachineDelegate> * _delegate;
    SCLSettingsSyncErrorHandler * _errorHandler;
    SCLSettingsSyncState * _failedState;
    SCLSettingsSyncState * _pendingSendState;
    SCLSettingsSyncState * _sendingState;
    SCLSettingsSyncState * _sentState;
    SCLSettingsSyncState * _syncedState;
}

@property (nonatomic, retain) SCLSettingsSyncContext *context;
@property (nonatomic, readonly) SCLSettingsSyncState *currentState;
@property (nonatomic) <SCLSettingsSyncStateMachineDelegate> *delegate;
@property (nonatomic, readonly) SCLSettingsSyncErrorHandler *errorHandler;
@property (nonatomic, readonly) SCLSettingsSyncState *failedState;
@property (nonatomic, readonly) SCLSettingsSyncState *pendingSendState;
@property (nonatomic, readonly) SCLSettingsSyncState *sendingState;
@property (nonatomic, readonly) SCLSettingsSyncState *sentState;
@property (nonatomic, readonly) SCLSettingsSyncState *syncedState;

- (void).cxx_destruct;
- (bool)_isRelevantMessage:(id)arg1;
- (void)activate;
- (void)cancelCommitTimer;
- (void)cancelRetryActivity;
- (void)commitSettings;
- (id)context;
- (id)currentState;
- (id)delegate;
- (void)didEnqueueMessage:(id)arg1;
- (void)enqueueFailedWithError:(id)arg1;
- (id)errorHandler;
- (id)failedState;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)message:(id)arg1 didFailToAcknowledgeWithError:(id)arg2;
- (void)message:(id)arg1 failedWithError:(id)arg2;
- (void)messageDidSend:(id)arg1;
- (void)messageWasDelivered:(id)arg1;
- (id)pendingSendState;
- (void)performSync;
- (void)scheduleCommitTimerWithInterval:(double)arg1;
- (void)scheduleRetryWithActivityCriteria:(id)arg1;
- (id)sendingState;
- (id)sentState;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)settingsDidChange;
- (void)significantUserInteractionOccurred;
- (id)syncedState;
- (void)transitionToState:(id)arg1;
- (void)xpcActivityStarted;

@end
