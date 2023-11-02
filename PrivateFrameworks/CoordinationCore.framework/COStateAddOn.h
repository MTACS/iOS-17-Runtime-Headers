
@interface COStateAddOn : COMeshAddOn {
    <COStateAddOnDelegate> * _delegate;
    bool  _isConstructingState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _meshState;
    NSMutableArray * _outstandingUpdateRequests;
    unsigned long long  _stateConstructionGeneration;
}

@property <COStateAddOnDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *meshState;

- (void).cxx_destruct;
- (void)_broadcastMeshState:(id)arg1;
- (void)_constructMeshState;
- (void)_handleStateNotification:(id)arg1;
- (void)_handleStateReadRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)_handleStateUpdateNotification:(id)arg1;
- (void)_handleStateUpdateRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)_handleUpdates:(id)arg1 removals:(id)arg2;
- (void)_processOutstandingUpdateRequests;
- (void)_sendRequest:(id)arg1 withRetryCount:(long long)arg2 withCallback:(id /* block */)arg3;
- (void)_withLock:(id /* block */)arg1;
- (id)delegate;
- (void)didAddToMeshController:(id)arg1;
- (void)didChangeNodesForMeshController:(id)arg1;
- (id)init;
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (id)meshState;
- (void)removeKeyPaths:(id)arg1 suite:(id)arg2 withCallback:(id /* block */)arg3;
- (void)sendStateUpdates:(id)arg1 removals:(id)arg2 withCallback:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDictionary:(id)arg1 suite:(id)arg2 withCallback:(id /* block */)arg3;
- (void)setMeshState:(id)arg1;
- (void)willRemoveFromMeshController:(id)arg1;

@end
