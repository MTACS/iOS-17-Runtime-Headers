
@protocol SCLSettingsSyncStateMachineDelegate <NSObject>

@required

- (void)cancelCommitTimerForStateMachine:(SCLSettingsSyncStateMachine *)arg1;
- (void)cancelRetryActivityForStateMachine:(SCLSettingsSyncStateMachine *)arg1;
- (void)performSyncForStateMachine:(SCLSettingsSyncStateMachine *)arg1;
- (void)stateMachine:(SCLSettingsSyncStateMachine *)arg1 didTransitionFromState:(SCLSettingsSyncState *)arg2 toState:(SCLSettingsSyncState *)arg3;
- (void)stateMachine:(SCLSettingsSyncStateMachine *)arg1 scheduleCommitTimerWithInterval:(double)arg2;
- (void)stateMachine:(SCLSettingsSyncStateMachine *)arg1 scheduleRetryWithActivityCriteria:(NSObject<OS_xpc_object> *)arg2;

@end
