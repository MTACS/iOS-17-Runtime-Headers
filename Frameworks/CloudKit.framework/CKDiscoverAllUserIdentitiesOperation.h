
@interface CKDiscoverAllUserIdentitiesOperation : CKOperation <CKDiscoverAllUserIdentitiesOperationCallbacks> {
    id /* block */  _discoverAllUserIdentitiesCompletionBlock;
    NSMutableDictionary * _identityToContactIdentifiers;
    id /* block */  _userIdentityDiscoveredBlock;
}

@property (nonatomic, readonly) <CKDiscoverAllUserIdentitiesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ discoverAllUserIdentitiesCompletionBlock;
@property (nonatomic, retain) NSMutableDictionary *identityToContactIdentifiers;
@property (nonatomic, readonly) CKDiscoverUserIdentitiesOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ userIdentityDiscoveredBlock;

+ (SEL)daemonInvocationSelector;
+ (Class)operationInfoClass;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)discoverAllUserIdentitiesCompletionBlock;
- (void)handleUserIdentityDiscovery:(id)arg1;
- (id)identityToContactIdentifiers;
- (id)init;
- (void)performCKOperation;
- (void)setDiscoverAllUserIdentitiesCompletionBlock:(id /* block */)arg1;
- (void)setIdentityToContactIdentifiers:(id)arg1;
- (void)setUserIdentityDiscoveredBlock:(id /* block */)arg1;
- (id /* block */)userIdentityDiscoveredBlock;

@end
