
@interface SCLSettingsSyncCoordinator : NSObject <SCLSettingsSyncStateMachineDelegate> {
    NSURL * _contextURL;
    NSObject<OS_dispatch_queue> * _queue;
    SCLScheduleSettings * _schedule;
    SCLSettingsSyncStateMachine * _stateMachine;
    NSObject<OS_dispatch_source> * _timerSource;
    <SCLSettingsSyncTransport> * _transport;
    NSString * _xpcActivityName;
}

@property (nonatomic, readonly) NSURL *contextURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) SCLScheduleSettings *schedule;
@property (nonatomic, readonly) SCLSettingsSyncStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic) <SCLSettingsSyncTransport> *transport;
@property (nonatomic, readonly) NSString *xpcActivityName;

- (void).cxx_destruct;
- (void)activate;
- (void)applySchedule:(id)arg1;
- (void)beginActivity:(id)arg1;
- (void)cancelCommitTimerForStateMachine:(id)arg1;
- (void)cancelRetryActivityForStateMachine:(id)arg1;
- (void)commitTimerFired;
- (id)contextURL;
- (void)didDeliverMessageWithIdentifier:(id)arg1;
- (void)identifier:(id)arg1 didSendWithSuccess:(bool)arg2 error:(id)arg3;
- (id)initWithFileURL:(id)arg1 pairingID:(id)arg2 schedule:(id)arg3 queue:(id)arg4;
- (void)noteSignificantUserInteractionOccured;
- (void)performSyncForStateMachine:(id)arg1;
- (id)queue;
- (void)registerActivityWithCriteria:(id)arg1;
- (id)schedule;
- (void)setTimerSource:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)stateMachine;
- (void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3;
- (void)stateMachine:(id)arg1 scheduleCommitTimerWithInterval:(double)arg2;
- (void)stateMachine:(id)arg1 scheduleRetryWithActivityCriteria:(id)arg2;
- (id)timerSource;
- (id)transport;
- (id)xpcActivityName;

@end
