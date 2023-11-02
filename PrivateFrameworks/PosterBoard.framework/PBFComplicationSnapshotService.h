
@interface PBFComplicationSnapshotService : NSObject <BSInvalidatable, PBFComplicationSnapshotProviding, PBFComplicationSnapshotterObserver> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_requestToResult;
    NSMapTable * _lock_requestToSnapshotErrorHandlers;
    NSMapTable * _lock_requestToSnapshotReceivedHandlers;
    NSOperationQueue * _operationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fireCompletionHandlersForRequest:(id)arg1 snapshot:(id)arg2 error:(id)arg3;
- (void)_lock_appendErrorBlock:(id /* block */)arg1 forRequest:(id)arg2;
- (void)_lock_appendReceivedBlock:(id /* block */)arg1 forRequest:(id)arg2;
- (id)_lock_preparedComplicationSnapshotForRequest:(id)arg1;
- (id)complicationSnapshotForRequest:(id)arg1;
- (void)complicationSnapshotter:(id)arg1 didFinishWithSnapshot:(id)arg2 error:(id)arg3;
- (void)fetchComplicationSnapshotsForRequests:(id)arg1 complicationSnapshotReceivedHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)invalidate;
- (id)preparedComplicationSnapshotsForRequests:(id)arg1;
- (void)trimCachedSnapshotsToRequests:(id)arg1;

@end
