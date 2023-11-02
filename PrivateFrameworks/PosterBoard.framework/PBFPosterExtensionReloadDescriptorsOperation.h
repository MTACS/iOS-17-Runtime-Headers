
@interface PBFPosterExtensionReloadDescriptorsOperation : NSBlockOperation <PRUpdatingServiceObserver> {
    bool  _didTimeout;
    NSError * _error;
    NSString * _extensionBundleIdentifier;
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
    PRSPosterPathsAssertion * _lock_postRefreshPosterPathsAssertion;
    PRSPosterPathsAssertion * _postRefreshPosterPathsAssertion;
    long long  _powerLogReason;
    NSArray * _preRefreshPosterDescriptors;
    <PBFRuntimeAssertionProviding> * _runtimeAssertionProvider;
    PRSPosterUpdateSessionInfo * _sessionInfo;
    double  _timeoutInterval;
    PRUpdatingService * _updatingService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didTimeout;
@property (retain) NSError *error;
@property (nonatomic, readonly) double executionFinishDate;
@property (nonatomic, readonly) double executionStartDate;
@property (nonatomic, readonly) double executionTime;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *postRefreshPosterDescriptors;
@property (copy) PRSPosterPathsAssertion *postRefreshPosterPathsAssertion;
@property (readonly, copy) NSArray *preRefreshPosterDescriptors;
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
- (void)cancel;
- (void)dealloc;
- (id)description;
- (bool)didTimeout;
- (id)error;
- (double)executionFinishDate;
- (double)executionStartDate;
- (double)executionTime;
- (id)extensionBundleIdentifier;
- (bool)hasUniqueSessionInfo;
- (id)initWithUpdatingService:(id)arg1 extensionBundleIdentifier:(id)arg2 sessionInfo:(id)arg3 preRefreshPosterDescriptors:(id)arg4 runtimeAssertionProvider:(id)arg5 timeout:(double)arg6 powerLogReason:(long long)arg7;
- (void)invalidateAssertionsWithCompletion:(id /* block */)arg1;
- (id)postRefreshPosterDescriptors;
- (id)postRefreshPosterPathsAssertion;
- (id)preRefreshPosterDescriptors;
- (id)runtimeAssertionProvider;
- (void)setDidTimeout:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setPostRefreshPosterPathsAssertion:(id)arg1;
- (double)timeoutInterval;
- (id)updatingService;
- (void)updatingService:(id)arg1 didInvalidateWithError:(id)arg2;

@end
