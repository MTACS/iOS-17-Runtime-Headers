
@interface GEOServiceRequester : NSObject {
    NSArray * _networkOperationClasses;
    Class  _offlineOperationClass;
    NSMapTable * _pendingRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingRequestsLock;
    GEOOfflineStateManager * _stateManagerOverride;
}

@property (nonatomic, retain) NSArray *networkOperationClasses;
@property (nonatomic, retain) Class offlineOperationClass;
@property (nonatomic, retain) GEOOfflineStateManager *offlineStateManager;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1 forRequest:(id)arg2;
- (void)_cancelRequest:(id)arg1;
- (id)_currentOperationForRequest:(id)arg1;
- (id)_keyForRequest:(id)arg1;
- (id)_operationClassForTraits:(id)arg1 requestKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg2 forCohort:(id)arg3 config:(id)arg4 error:(id*)arg5;
- (void)_removeAllOperationsForRequest:(id)arg1;
- (void)_request:(id)arg1 completed:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (bool)_shouldTryNextOperationForError:(id)arg1 fromOperation:(id)arg2;
- (void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 options:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 options:(unsigned long long)arg6 willSendRequestHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (id)_takeCurrentOperationForRequest:(id)arg1;
- (id)_validateResponse:(id)arg1;
- (id)init;
- (id)networkOperationClasses;
- (Class)offlineOperationClass;
- (id)offlineStateManager;
- (void)setNetworkOperationClasses:(id)arg1;
- (void)setOfflineOperationClass:(Class)arg1;
- (void)setOfflineStateManager:(id)arg1;

@end
