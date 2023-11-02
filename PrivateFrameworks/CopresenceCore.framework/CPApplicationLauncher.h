
@interface CPApplicationLauncher : NSObject {
    NSMutableDictionary * _bundleIDToAssertionMap;
    CPFeatureFlags * _featureFlags;
    CPApplicationLauncherSwift * _newApplicationLauncher;
    NSMutableDictionary * _sessionIDtoAuthMap;
    NSMutableDictionary * _sessionIDtoCompletionMap;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableDictionary *bundleIDToAssertionMap;
@property (nonatomic, readonly) CPFeatureFlags *featureFlags;
@property (nonatomic, retain) NSMutableDictionary *sessionIDtoAuthMap;
@property (nonatomic, retain) NSMutableDictionary *sessionIDtoCompletionMap;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_acquireAssertionForBundleID:(id)arg1;
- (id)_authorizationForActivitySession:(id)arg1;
- (id)_authorizationsForBundleID:(id)arg1;
- (void)_authorizePiPForActivity:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleStateTransitionForAuthorization:(id)arg1 activitySession:(id)arg2 state:(long long)arg3;
- (void)_insertAuth:(id)arg1 completion:(id /* block */)arg2 forSessionID:(id)arg3;
- (void)_insertBKSAssertion:(id)arg1 forBundleID:(id)arg2;
- (void)_invalidateBKSAssertionForBundleID:(id)arg1;
- (void)_invokeAndDequeueCompletionForSessionID:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_launchAndAcquireAssertionIfNecessaryForActivitySession:(id)arg1 options:(long long)arg2 completion:(id /* block */)arg3;
- (void)_launchAppForActivitySession:(id)arg1 options:(long long)arg2 completion:(id /* block */)arg3;
- (void)_launchApplicationForActivitySession:(id)arg1 options:(long long)arg2 completion:(id /* block */)arg3;
- (id)_openApplicationOptionsForActivitySession:(id)arg1 options:(long long)arg2;
- (void)_revokeAndRemoveAuthForSessionID:(id)arg1;
- (void)_revokeAuthorizations:(id)arg1;
- (bool)_sessionAlreadyAuthorizingOrAuthorizedForPiP:(id)arg1;
- (id)_sessionIDForActivity:(id)arg1;
- (id)_sessionIDForAuthorization:(id)arg1;
- (void)_validatePiPStartedFor:(id)arg1 bundleID:(id)arg2;
- (void)authorizePiPForActivity:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)bundleIDToAssertionMap;
- (id)featureFlags;
- (id)init;
- (void)launchAppForActivitySession:(id)arg1 options:(long long)arg2 completion:(id /* block */)arg3;
- (void)revokeBackgroundAuthorizationForBundleID:(id)arg1;
- (void)revokeBackgroundAuthorizationForSession:(id)arg1;
- (id)sessionIDtoAuthMap;
- (id)sessionIDtoCompletionMap;
- (void)setBundleIDToAssertionMap:(id)arg1;
- (void)setSessionIDtoAuthMap:(id)arg1;
- (void)setSessionIDtoCompletionMap:(id)arg1;
- (id)workQueue;

@end
