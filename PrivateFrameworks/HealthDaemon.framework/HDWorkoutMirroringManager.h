
@interface HDWorkoutMirroringManager : NSObject <HDProfileReadyObserver, HDRapportMessengerObserver> {
    NSMutableDictionary * _assertionsByBundleIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDWorkoutManager * _workoutManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createServerWithData:(id)arg1 completion:(id /* block */)arg2;
- (void)_takeBackgroundRuntimeAssertionForProcessWithBundleIdentifier:(id)arg1 pid:(int)arg2;
- (id)activeSessionBundleIdentifier;
- (void)dealloc;
- (id)initWithWorkoutManager:(id)arg1;
- (void)launchClientWithBundleIdentifier:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)rapportMessenger:(id)arg1 didReceiveRequest:(id)arg2 data:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)recoverMirroredWorkoutSessionWithCompletion:(id /* block */)arg1;
- (void)setActiveSessionBundleIdentifier:(id)arg1;

@end
