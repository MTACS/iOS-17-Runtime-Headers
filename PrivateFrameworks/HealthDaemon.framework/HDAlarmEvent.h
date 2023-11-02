
@interface HDAlarmEvent : NSObject {
    NSTimeZone * __unitTest_localTimeZoneOverride;
    NSString * _clientIdentifier;
    NSDate * _dueDate;
    NSDateComponents * _dueDateComponents;
    NSString * _eventIdentifier;
    unsigned long long  _eventOptions;
}

@property (nonatomic, copy) NSTimeZone *_unitTest_localTimeZoneOverride;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSDate *currentDueDate;
@property (nonatomic, readonly, copy) NSDate *dueDate;
@property (nonatomic, readonly, copy) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly, copy) NSString *eventIdentifier;
@property (nonatomic, readonly) unsigned long long eventOptions;
@property (nonatomic, readonly, copy) HKNotificationInstruction *hdmc_notificationHoldInstruction;
@property (nonatomic, readonly) bool requiresDeviceOnWrist;
@property (nonatomic, readonly) bool requiresDeviceUnlocked;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 dueDateComponents:(id)arg4 eventOptions:(unsigned long long)arg5;
- (id)_unitTest_localTimeZoneOverride;
- (id)clientIdentifier;
- (id)currentDueDate;
- (id)description;
- (id)dueDate;
- (id)dueDateComponents;
- (id)eventIdentifier;
- (unsigned long long)eventOptions;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 eventOptions:(unsigned long long)arg4;
- (id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDateComponents:(id)arg3 eventOptions:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)requiresDeviceOnWrist;
- (bool)requiresDeviceUnlocked;
- (void)set_unitTest_localTimeZoneOverride:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin

- (bool)isCriticalNotificationEvent;
- (bool)isFollowUpNotificationEvent;
- (id)scheduleItemIdentifier;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

- (id)hdmc_categoryIdentifier;
- (long long)hdmc_fertileWindowDayShift;
- (long long)hdmc_fertileWindowEndDayIndex;
- (id)hdmc_notificationHoldInstruction;

@end
