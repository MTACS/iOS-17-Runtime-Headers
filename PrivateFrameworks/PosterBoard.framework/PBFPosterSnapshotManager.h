
@interface PBFPosterSnapshotManager : NSObject <BSInvalidatable, PBFBehaviorAssertionProviding, PBFPosterSnapshotIngesting, PBFPosterSnapshotProviding> {
    PBFApplicationStateMonitor * _applicationStateMonitor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assertionLock;
    NSHashTable * _assertionLock_assertionObservers;
    NSMutableDictionary * _assertionLock_extensionEditingInProgressAssertions;
    NSMutableDictionary * _assertionLock_extensionSnapshotterDisabledAssertions;
    NSMutableSet * _assertionLock_inUseAssertions;
    bool  _assertionLock_isOperationQueueSuspended;
    <PBFExtensionProviding> * _extensionProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_fulfilledSnapshotBlocks;
    bool  _lock_invalidated;
    NSHashTable * _lock_observers;
    PBFPriorityQueue * _lock_priorityQueue;
    NSMapTable * _lock_requestToCompletion;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    <PBFModelCoordinatorProviding> * _modelCoordinatorProvider;
    NSOperationQueue * _operationQueue;
    RBSAssertion * _posterBoardPrewarmAssertion;
    <PBFRuntimeAssertionProviding> * _runtimeAssertionProvider;
    NSObject<OS_os_activity> * _snapshotActivity;
    struct os_activity_scope_state_s { 
        unsigned long long opaque[2]; 
    }  _snapshotActivityState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquirePrewarmAssertionIfNeeded:(bool)arg1;
- (void)_assertionLock_evaluateInUseAssertions;
- (bool)_assertionLock_isExtensionProhibitedFromSnapshotting:(id)arg1;
- (bool)_assertionLock_updateOperationQueueSuspended:(bool)arg1;
- (id)_createSnapshotForDefinition:(id)arg1 withSurface:(id)arg2 snapshotScale:(double)arg3 configuredProperties:(id)arg4 path:(id)arg5 context:(id)arg6 error:(out id*)arg7;
- (void)_enqueueSnapshotForRequestIfNeeded:(id)arg1 relativePriority:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_enumerateAssertionObservers:(id /* block */)arg1 respondingToSelector:(SEL)arg2;
- (void)_failRequest:(id)arg1 withError:(id)arg2 shouldReEnqueue:(bool)arg3 attempt:(unsigned long long)arg4;
- (void)_ingestResultsFromSnapshotter:(id)arg1;
- (void)_invalidateEditingSessionAssertion:(id)arg1 extensionIdentifier:(id)arg2;
- (void)_invalidateExtensionSnapshotterDisabledAssertion:(id)arg1 extensionIdentifier:(id)arg2;
- (void)_invalidateInUseAssertion:(id)arg1;
- (bool)_isExtensionProhibitedFromSnapshotting:(id)arg1;
- (bool)_isOperationQueueSuspended;
- (void)_kickoffNextOperation;
- (id)_loadReservationsForDefinitionForRequest:(id)arg1;
- (void)_lock_acquirePrewarmAssertionIfNeeded:(bool)arg1;
- (void)_lock_addCompletion:(id /* block */)arg1 forRequest:(id)arg2;
- (id)_lock_buildSnapshotterForRequest:(id)arg1 attemptNumber:(unsigned long long)arg2;
- (void)_lock_cancelAllRequests;
- (bool)_lock_cancelSnapshotter:(id)arg1 reason:(id)arg2;
- (void)_lock_cleanupAfterOperation:(id)arg1;
- (void)_lock_cleanupAfterRequest:(id)arg1;
- (void)_lock_enqueueSnapshotter:(id)arg1 forRequest:(id)arg2 attempt:(long long)arg3 relativePriority:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)_lock_enumerateObservers:(id /* block */)arg1;
- (void)_lock_fireCompletionsForRequest:(id)arg1 snapshotImagesByReservation:(id)arg2 error:(id)arg3;
- (void)_lock_fireDidUpdateSnapshotForPath:(id)arg1 snapshotImagesByReservation:(id)arg2;
- (void)_lock_kickoffNextOperation;
- (void)_lock_logOperationQueueStatus;
- (unsigned long long)_lock_numberOfRemainingOperations;
- (void)_lock_prioritizeOperation:(id)arg1;
- (id)_lock_snapshotterForRequest:(id)arg1 requestContainingRequest:(out id*)arg2;
- (id)_lock_snapshottersForExtensionBundleIdentifier:(id)arg1;
- (void)_lock_teardownPrewarmAssertionIfAppropriate:(id)arg1;
- (void)_operationDidComplete:(id)arg1 snapshotter:(id)arg2;
- (void)_posterBoardPrewarmAssertionWasInvalidated;
- (void)_setupMemoryPressureTracking;
- (id)_snapshotCoordinatorForPath:(id)arg1;
- (id)_snapshotSuspendedExtensionBundleIdentifiers;
- (void)_teardownPrewarmAssertionIfAppropriate:(id)arg1;
- (id)acquireEditingSessionAssertionForProvider:(id)arg1 withReason:(id)arg2;
- (id)acquireSnapshotterDisabledAssertionForProvider:(id)arg1 withReason:(id)arg2;
- (id)acquireSnapshotterInUseAssertionWithReason:(id)arg1;
- (id)activeEditingSessionAssertionExtensionIdentifiers;
- (void)addBehaviorAssertionObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (bool)areSnapshotsFullyPrepared:(id)arg1;
- (void)cancelAllRequests;
- (bool)cancelRequestedSnapshotsForExtensionBundleIdentifier:(id)arg1;
- (bool)cancelRequestedSnapshotsForPath:(id)arg1;
- (bool)cancelRequestedSnapshotsForRequests:(id)arg1 reason:(id)arg2;
- (void)cancelRequests:(id)arg1 reason:(id)arg2;
- (void)dealloc;
- (void)duplicateSnapshotsFromPath:(id)arg1 to:(id)arg2;
- (void)fetchPosterSnapshotForRequest:(id)arg1 definition:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchPosterSnapshotsForRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)ingestSnapshotCollection:(id)arg1 forConfiguration:(id)arg2 error:(out id*)arg3;
- (id)initWithRuntimeAssertionProvider:(id)arg1 extensionProvider:(id)arg2 modelCoordinatorProvider:(id)arg3 applicationStateMonitor:(id)arg4;
- (void)invalidate;
- (bool)isSnapshotRequestFulfilled:(id)arg1;
- (id)posterSnapshotForRequest:(id)arg1 definition:(id)arg2 error:(out id*)arg3;
- (void)prewarmCachesForFulfilledRequests:(id)arg1;
- (void)prewarmSnapshotsForRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)purgeSnapshotCacheForType:(long long)arg1;
- (void)removeBehaviorAssertionObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
