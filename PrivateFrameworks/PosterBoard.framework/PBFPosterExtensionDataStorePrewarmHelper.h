
@interface PBFPosterExtensionDataStorePrewarmHelper : NSObject <BSInvalidatable, PBFPosterExtensionDataStorePrewarmStatusUpdater> {
    NSString * _activePhase;
    NSDictionary * _completionFlagForPhase;
    NSDictionary * _dispatchGroupForPhase;
    BSAtomicFlag * _finishedFlag;
    BSAtomicFlag * _invalidationFlag;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_cancellationHandlerForCurrentPhase;
    id /* block */  _lock_completion;
    NSMutableArray * _lock_completionObservers;
    double  _lock_endTime;
    NSMutableDictionary * _lock_fatalErrorForPhase;
    NSError * _lock_finalizedAmalgamtedNonfatalErrors;
    NSError * _lock_finalizedError;
    NSMutableDictionary * _lock_nonFatalErrorsForPhase;
    double  _lock_startTime;
    PBFPosterExtensionDataStorePrewarmPlan * _plan;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (retain) NSString *activePhase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) PBFPosterExtensionDataStorePrewarmPlan *plan;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_executePhase:(id)arg1 executionBlock:(id /* block */)arg2 context:(id)arg3 timeout:(double)arg4;
- (void)_fireCompletionHandler:(id /* block */)arg1 reason:(id)arg2;
- (void)_markAsDoneAndFireCompletionHandlers;
- (id)activePhase;
- (void)appendCompletionObserver:(id /* block */)arg1;
- (void)dealloc;
- (void)executePrewarmWithExecutor:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)finishedWithError:(id)arg1;
- (id)initWithPlan:(id)arg1;
- (void)invalidate;
- (void)noteNonFatalError:(id)arg1;
- (id)plan;
- (void)setActivePhase:(id)arg1;

@end
