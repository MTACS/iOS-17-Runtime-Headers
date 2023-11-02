
@interface CKDiscoverUserIdentitiesOperation : CKOperation <CKDiscoverUserIdentitiesOperationCallbacks> {
    id /* block */  _discoverUserIdentitiesCompletionBlock;
    NSMutableSet * _discoveredLookupInfos;
    id /* block */  _userIdentityDiscoveredBlock;
    NSArray * _userIdentityLookupInfos;
}

@property (nonatomic, readonly) <CKDiscoverUserIdentitiesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ discoverUserIdentitiesCompletionBlock;
@property (nonatomic, retain) NSMutableSet *discoveredLookupInfos;
@property (nonatomic, readonly) CKDiscoverUserIdentitiesOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ userIdentityDiscoveredBlock;
@property (nonatomic, copy) NSArray *userIdentityLookupInfos;

+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)discoverUserIdentitiesCompletionBlock;
- (id)discoveredLookupInfos;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleUserIdentityDiscoveryForLookupInfo:(id)arg1 userIdentity:(id)arg2;
- (id)init;
- (id)initWithUserIdentityLookupInfos:(id)arg1;
- (void)setDiscoverUserIdentitiesCompletionBlock:(id /* block */)arg1;
- (void)setDiscoveredLookupInfos:(id)arg1;
- (void)setUserIdentityDiscoveredBlock:(id /* block */)arg1;
- (void)setUserIdentityLookupInfos:(id)arg1;
- (id /* block */)userIdentityDiscoveredBlock;
- (id)userIdentityLookupInfos;

@end
