
@interface FBSceneRemnant : NSObject <BSInvalidatable> {
    BSSimpleAssertion * _assertion;
    NSObject<OS_dispatch_queue> * _assertionQueue;
    FBSSceneDefinition * _definition;
    BSAtomicSignal * _invalidated;
    FBSSceneParameters * _parameters;
    FBWorkspace * _workspace;
}

@property (nonatomic, readonly) BSSimpleAssertion *_assertion;
@property (nonatomic, readonly, copy) FBSSceneClientSettings *_clientSettings;
@property (getter=_hasBeenInvalidated, nonatomic, readonly) bool _invalidated;
@property (nonatomic, readonly) FBWorkspace *_workspace;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) FBSSceneDefinition *definition;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSSceneSettings *lastSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assertion;
- (id)_clientSettings;
- (bool)_hasBeenInvalidated;
- (id)_initWithIdentity:(id)arg1 client:(id)arg2 workspace:(id)arg3 parameters:(id)arg4 assertionQueue:(id)arg5 assertion:(id)arg6;
- (id)_workspace;
- (void)dealloc;
- (id)definition;
- (id)description;
- (id)init;
- (void)invalidate;
- (id)lastSettings;

@end
