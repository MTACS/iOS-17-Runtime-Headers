
@interface PRPosterSnapshotter : NSObject <BSInvalidatable, FBSceneDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assertionLock;
    RBSAssertion * _assertionLock_memoryAssertion;
    RBSAssertion * _assertionLock_runtimeAssertion;
    RBSAssertion * _assertionLock_selfRuntimeAssertion;
    BSAuditToken * _auditToken;
    PRPosterExtension * _extension;
    BSAtomicFlag * _invalidationFlag;
    BSAtomicFlag * _isSnapshottingFlag;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_enqueuedSnapshots;
    FBScene * _lock_mainQueue_scene;
    BSContinuousMachTimer * _lock_timeoutTimer;
    _PRPosterEnqueuedSnapshot * _mainQueue_activeSnapshot;
    bool  _mainQueue_complicationRenderingCompleted;
    double  _mainQueue_endTime;
    bool  _mainQueue_shouldWaitForComplicationRendering;
    double  _mainQueue_startTime;
    RBSProcessIdentity * _processIdentity;
    NSString * _providerBundleIdentifier;
    bool  _shouldAcquireRuntimeAssertions;
    RBSTarget * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PRPosterExtension *extension;
@property (readonly) unsigned long long hash;
@property bool shouldAcquireRuntimeAssertions;
@property (readonly) Class superclass;

+ (id)completionQueue;
+ (id)fileIOQueue;
+ (void)teardownScene:(id)arg1 sceneWasDeactivated:(bool)arg2 runtimeAssertion:(id)arg3 memoryAssertion:(id)arg4 selfRuntimeAssertion:(id)arg5;

- (void).cxx_destruct;
- (void)_lock_mainQueue_executeSnapshot:(id)arg1;
- (void)_mainQueue_captureSnapshotWithScene:(id)arg1;
- (void)_mainQueue_executeNextSnapshotIfPossible;
- (void)_mainQueue_finishWithError:(id)arg1 result:(id)arg2;
- (void)_mainQueue_updateAssertions:(id)arg1;
- (void)_teardownScene:(bool)arg1;
- (void)dealloc;
- (void)enqueueSnapshotRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)extension;
- (void)fireSceneDeactivationErrorForTesting:(id)arg1;
- (id)init;
- (id)initWithExtension:(id)arg1;
- (void)installRequestAsActive:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidate;
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;
- (void)setShouldAcquireRuntimeAssertions:(bool)arg1;
- (bool)shouldAcquireRuntimeAssertions;

@end
