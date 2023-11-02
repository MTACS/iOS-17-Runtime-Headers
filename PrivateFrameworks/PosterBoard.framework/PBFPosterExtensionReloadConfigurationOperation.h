
@interface PBFPosterExtensionReloadConfigurationOperation : NSBlockOperation <PBFBehaviorAssertionObserver, PRUpdatingServiceObserver> {
    <PBFBehaviorAssertionProviding> * _behaviorAssertionProvider;
    bool  _didTimeout;
    NSError * _error;
    PRSPosterPath * _existingConfigurationPath;
    NSString * _extensionBundleIdentifier;
    bool  _locationInUse;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    NSMutableArray * _lock_completionObservers;
    double  _lock_executionFinishDate;
    double  _lock_executionStateDate;
    RBSAssertion * _lock_extensionPosterUpdateEntitledMemoryAssertion;
    RBSAssertion * _lock_extensionPosterUpdateRuntimeAssertion;
    NSObject<OS_dispatch_group> * _lock_group;
    bool  _lock_isFinished;
    CLInUseAssertion * _lock_locationInUseAssertion;
    PRSPosterPathsAssertion * _lock_postRefreshPosterPathsAssertion;
    RBSAssertion * _lock_posterBoardPosterUpdateRuntimeAssertion;
    <BSInvalidatable> * _lock_snapshotterDisabledAssertion;
    PRSPosterPath * _preRefreshPosterConfiguration;
    long long  _reason;
    <PBFRuntimeAssertionProviding> * _runtimeAssertionProvider;
    PRSPosterUpdateSessionInfo * _sessionInfo;
    double  _timeoutInterval;
    PRUpdatingService * _updatingService;
}

@property (nonatomic, readonly) <PBFBehaviorAssertionProviding> *behaviorAssertionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didTimeout;
@property (retain) NSError *error;
@property (nonatomic, readonly) double executionFinishDate;
@property (nonatomic, readonly) double executionStartDate;
@property (nonatomic, readonly) double executionTime;
@property (nonatomic, readonly) PRSPosterPath *existingConfigurationPath;
@property (readonly) unsigned long long hash;
@property (readonly) PRSPosterPath *postRefreshPosterConfiguration;
@property (retain) PRSPosterPath *preRefreshPosterConfiguration;
@property (nonatomic, readonly) <PBFRuntimeAssertionProviding> *runtimeAssertionProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeoutInterval;
@property (getter=hasUniqueSessionInfo, nonatomic, readonly) bool uniqueSessionInfo;
@property (nonatomic, readonly) PRUpdatingService *updatingService;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1 postRefreshPosterPathsAssertion:(id)arg2;
- (void)_fireCompletionObservers:(id)arg1 instance:(id)arg2 error:(id)arg3;
- (double)_lock_executionTime;
- (void)_setup;
- (id)_userInfoForErrors;
- (void)addCompletionObserver:(id /* block */)arg1;
- (void)assertionProviderDidAcquireEditingSessionAssertion:(id)arg1 forExtensionIdentifier:(id)arg2;
- (void)assertionProviderDidAcquireSnapshotterDisabledAssertion:(id)arg1 forExtensionIdentifier:(id)arg2;
- (id)behaviorAssertionProvider;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)didTimeout;
- (id)error;
- (double)executionFinishDate;
- (double)executionStartDate;
- (double)executionTime;
- (id)existingConfigurationPath;
- (bool)hasUniqueSessionInfo;
- (id)initWithUpdatingService:(id)arg1 sessionInfo:(id)arg2 existingConfigurationPath:(id)arg3 locationInUse:(bool)arg4 runtimeAssertionProvider:(id)arg5 behaviorAssertionProvider:(id)arg6 timeout:(double)arg7 powerLogReason:(long long)arg8;
- (void)invalidateAssertionsWithCompletion:(id /* block */)arg1;
- (id)postRefreshPosterConfiguration;
- (id)preRefreshPosterConfiguration;
- (id)runtimeAssertionProvider;
- (void)setDidTimeout:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setPreRefreshPosterConfiguration:(id)arg1;
- (double)timeoutInterval;
- (id)updatingService;
- (void)updatingService:(id)arg1 didInvalidateWithError:(id)arg2;

@end
