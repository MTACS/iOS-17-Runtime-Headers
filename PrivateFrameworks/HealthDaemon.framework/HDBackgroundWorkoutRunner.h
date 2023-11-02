
@interface HDBackgroundWorkoutRunner : NSObject <HDAssertionObserver, HDProcessStateObserver> {
    HDAssertionManager * _assertionManager;
    HDDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)acquireBKSAssertionForClient:(id)arg1;
+ (bool)hasBackgroundPermissionForBundleIdentifier:(id)arg1 errorOut:(id*)arg2;
+ (void)releaseBKSAssertion:(id)arg1 forClient:(id)arg2;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (id)takeBackgroundRunningAssertionForOwnerIdentifier:(id)arg1 client:(id)arg2 includeCoreLocationAssertion:(bool)arg3;

@end
