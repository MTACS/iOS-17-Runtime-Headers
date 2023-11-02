
@interface HKSleepHealthStore : NSObject <HDSPSleepSessionPersistence, HKSleepHealthStoreInterface, _HKXPCExportable> {
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
    <NAScheduler> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) <NAScheduler> *scheduler;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;
- (void)saveSleepTrackingSamples:(id)arg1 completion:(id /* block */)arg2;
- (id)scheduler;
- (void)startSleepTrackingSession;
- (void)stopSleepTrackingSession;
- (void)updateCurrentSleepSchedules:(id)arg1 sleepDurationGoal:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

- (id)hdsp_persistSessions:(id)arg1;
- (void)hdsp_startSession;
- (void)hdsp_stopSession;

@end
