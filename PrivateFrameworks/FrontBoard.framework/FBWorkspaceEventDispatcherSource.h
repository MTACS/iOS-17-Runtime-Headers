
@interface FBWorkspaceEventDispatcherSource : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _lock_remnants;
    NSMutableDictionary * _lock_requestsByTargetIdentifier;
    RBSProcessHandle * _processHandle;
    BSSimpleAssertion * _underlyingAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RBSProcessHandle *processHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithProcessHandle:(id)arg1 underlyingAssertion:(id)arg2;
- (id)consumeRemnantsPassingTest:(id /* block */)arg1;
- (void)dealloc;
- (id)dequeueSceneRequestsForTargetIdentifier:(id)arg1;
- (void)enqueueSceneRequest:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)noteHandshakeWithRemnants:(id)arg1;
- (id)processHandle;

@end
