
@interface HDDatabasePruningCoordinator : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate, HDProfileReadyObserver> {
    HDPeriodicActivity * _activity;
    HDDaemon * _daemon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithDaemon:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;

@end
