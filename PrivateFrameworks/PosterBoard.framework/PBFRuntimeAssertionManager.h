
@interface PBFRuntimeAssertionManager : NSObject <BSInvalidatable, PBFRuntimeAssertionProviding> {
    BSAtomicFlag * _invalidationFlag;
    <BSInvalidatable> * _stateCaptureSentinel;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSMapTable * _stateQueue_acquistionDateForAssertion;
    NSHashTable * _stateQueue_knownAssertions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildRBSAssertionForTarget:(id)arg1 assertionIdentifier:(id)arg2 explanation:(id)arg3 invalidationHandler:(id /* block */)arg4;
- (void)_runningBoardAssertionStateDidUpdate:(id)arg1 assertionIdentifier:(id)arg2 error:(id)arg3;
- (id)_stateQueue_debugDescription;
- (id)_stateQueue_debugDescriptionForPosterBoardProcessAssertions;
- (id)_stateQueue_debugDescriptionForPosterExtensionProcessAssertions;
- (id)_stateQueue_debugDescriptionForTarget:(id)arg1;
- (id)acquireAssertion:(id)arg1 reason:(id)arg2 target:(id)arg3 invalidationHandler:(id /* block */)arg4;
- (id)acquirePosterUpdateMemoryAssertionForReason:(id)arg1 target:(id)arg2 auditToken:(id)arg3 posterProviderBundleIdentifier:(id)arg4;
- (id)acquirePosterUpdateRuntimeAssertionForReason:(id)arg1 target:(id)arg2;
- (id)acquirePrewarmRuntimeAssertionForReason:(id)arg1 target:(id)arg2 invalidationHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)invalidate;

@end
