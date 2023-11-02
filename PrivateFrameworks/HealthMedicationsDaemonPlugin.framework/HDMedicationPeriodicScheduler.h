
@interface HDMedicationPeriodicScheduler : NSObject <HDPeriodicActivityDelegate, HDProfileReadyObserver> {
    HDDaemon * _daemon;
    HDPeriodicActivity * _periodicActivity;
}

@property (nonatomic, readonly) HDPeriodicActivity *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activity;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;

@end
