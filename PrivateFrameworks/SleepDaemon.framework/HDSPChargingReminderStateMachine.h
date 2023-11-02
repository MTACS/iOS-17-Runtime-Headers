
@interface HDSPChargingReminderStateMachine : HKSPPersistentStateMachine <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineEventHandler, HDSPChargingReminderStateMachineInfoProvider> {
    HDSPChargingReminderDisabledState * _disabledState;
    HDSPChargingReminderMonitoringState * _monitoringState;
    HDSPChargingReminderNotifiedState * _notifiedState;
    HDSPChargingReminderWaitingState * _waitingState;
}

@property (nonatomic, readonly) <NAScheduler> *callbackScheduler;
@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDSPChargingReminderStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPChargingReminderDisabledState *disabledState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDSPChargingReminderStateMachineInfoProvider> *infoProvider;
@property (nonatomic, readonly) bool isCharging;
@property (nonatomic, readonly) HDSPChargingReminderMonitoringState *monitoringState;
@property (nonatomic, readonly) HDSPChargingReminderNotifiedState *notifiedState;
@property (nonatomic, readonly) bool sleepFeaturesEnabled;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;
@property (nonatomic, readonly) unsigned long long sleepScheduleState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPChargingReminderWaitingState *waitingState;

- (void).cxx_destruct;
- (id)allStates;
- (void)batteryLevelChanged:(float)arg1;
- (id)currentDate;
- (id)disabledState;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (bool)isCharging;
- (unsigned long long)loggingCategory;
- (id)monitoringState;
- (id)monitoringWindowAfterDate:(id)arg1;
- (id)notifiedState;
- (void)postChargingReminderNotification;
- (bool)sleepFeaturesEnabled;
- (id)sleepScheduleModel;
- (unsigned long long)sleepScheduleState;
- (void)startBatteryMonitoring;
- (void)stopBatteryMonitoring;
- (id)waitingState;

@end
