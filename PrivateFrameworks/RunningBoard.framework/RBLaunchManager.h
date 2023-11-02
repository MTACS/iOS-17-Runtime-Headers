
@interface RBLaunchManager : NSObject {
    <RBLaunchManagerDelegate> * _delegate;
    RBLaunchdJobManager * _jobManager;
    RBLaunchTracker * _launchTracker;
}

- (void).cxx_destruct;
- (bool)_checkLaunchForBackoff:(id)arg1 error:(out id*)arg2;
- (id)_resolveNewProcessForInstance:(id)arg1 requestIdentity:(id)arg2 context:(id)arg3 withError:(out id*)arg4;
- (void)_validateBundleIDForProcess:(id)arg1 launchedWithContext:(id)arg2;
- (id)executeLaunchRequest:(id)arg1 existingProcess:(id)arg2 requestIdentity:(id)arg3 withError:(out id*)arg4;
- (id)init;
- (id)initWithJobManager:(id)arg1 timeProvider:(id)arg2 delegate:(id)arg3;

@end
