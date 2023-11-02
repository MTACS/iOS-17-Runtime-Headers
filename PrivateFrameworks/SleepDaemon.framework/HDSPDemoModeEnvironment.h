
@interface HDSPDemoModeEnvironment : HDSPEnvironment <HDSPNotificationObserver, HDSPSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

+ (id /* block */)_sleepModeManagerProvider;

- (id)demoEventRecord;
- (id)demoScheduleModel;
- (id)demoSleepSchedule;
- (id)demoSleepSettings;
- (void)environmentDidBecomeReady;
- (id)init;
- (bool)isDemoEnvironment;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)resetDemoMode;
- (void)setInitialSchedule;
- (id)sourceIdentifier;

@end
