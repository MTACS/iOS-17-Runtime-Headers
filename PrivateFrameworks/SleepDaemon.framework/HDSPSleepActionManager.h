
@interface HDSPSleepActionManager : NSObject <HDSPEnvironmentAware, HDSPSource> {
    HDSPEnvironment * _environment;
    HKSPObserverSet * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

+ (bool)_isValidSnoozeDate:(id)arg1;
+ (id)_latestDateInAlarms:(id)arg1 dateBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)confirmAwakeNotification;
- (void)confirmAwakeNotificationOnDate:(id)arg1;
- (void)confirmAwakeNotificationOnDate:(id)arg1 confirmUntilDate:(id)arg2;
- (void)dismissGoodMorning;
- (void)dismissGoodMorningOnDate:(id)arg1;
- (void)dismissSleepLock;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)sleepAlarmDismissedOnDate:(id)arg1 source:(unsigned long long)arg2;
- (void)sleepAlarmSnoozedUntilDate:(id)arg1 source:(unsigned long long)arg2;
- (void)sleepAlarmWasModified;
- (id)sourceIdentifier;

@end
