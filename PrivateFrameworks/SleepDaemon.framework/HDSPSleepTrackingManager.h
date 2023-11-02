
@interface HDSPSleepTrackingManager : NSObject <HDSPEnvironmentAware, HDSPSleepSessionManagerDelegate> {
    HDSPEnvironment * _environment;
    HDSPSleepSessionManager * _sleepSessionManager;
    HKSPObserverSet * _sleepSessionObservers;
    <HDSPSleepTracker> * _sleepTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDSPSleepSessionManager *sleepSessionManager;
@property (nonatomic, readonly) HKSPObserverSet *sleepSessionObservers;
@property (nonatomic, readonly) <HDSPSleepTracker> *sleepTracker;
@property (readonly) Class superclass;

+ (id)platformSpecificTrackerWithEnvironment:(id)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 sleepSessionManager:(id)arg2 sleepTracker:(id)arg3;
- (void)removeObserver:(id)arg1;
- (id)sleepSessionManager;
- (void)sleepSessionManager:(id)arg1 didSaveArchivedSessions:(id)arg2;
- (void)sleepSessionManager:(id)arg1 didSaveSession:(id)arg2;
- (id)sleepSessionManager:(id)arg1 requestsProcessedSessionForSession:(id)arg2;
- (void)sleepSessionManagerDidFinishSession:(id)arg1;
- (id)sleepSessionObservers;
- (id)sleepTracker;

@end
