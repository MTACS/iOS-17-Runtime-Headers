
@interface HDSPSleepLockScreenStateMachine : HKSPPersistentStateMachine <HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenStateMachineEventHandler, HDSPSleepLockScreenStateMachineInfoProvider> {
    HDSPSleepLockScreenBedtimeState * _bedtimeState;
    HDSPSleepLockScreenGreetingState * _greetingState;
    HDSPSleepLockScreenOffState * _offState;
    HDSPSleepLockScreenWindDownState * _windDownState;
}

@property (nonatomic, readonly) HDSPSleepLockScreenBedtimeState *bedtimeState;
@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDSPSleepLockScreenStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPSleepLockScreenGreetingState *greetingState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inUnscheduledSleepMode;
@property (nonatomic, readonly) <HDSPSleepLockScreenStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) bool isLockScreenActive;
@property (nonatomic, readonly) HDSPSleepLockScreenOffState *offState;
@property (nonatomic, readonly) long long sleepMode;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPSleepLockScreenWindDownState *windDownState;

- (void).cxx_destruct;
- (id)allStates;
- (id)bedtimeState;
- (id)currentDate;
- (void)dismissAlertForGoodMorning;
- (id)greetingState;
- (bool)inUnscheduledSleepMode;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (bool)isLockScreenActive;
- (unsigned long long)loggingCategory;
- (id)offState;
- (void)presentAlertForGoodMorning;
- (void)sleepLockScreenStateDidChange:(long long)arg1 previousState:(long long)arg2;
- (long long)sleepMode;
- (void)sleepModeDidChange:(long long)arg1 reason:(unsigned long long)arg2;
- (id)sleepScheduleModel;
- (id)windDownState;

@end
