
@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface> {
    APUnfairRecursiveLock * _lock;
    NSMutableDictionary * _requestDelegates;
}

@property (nonatomic, retain) APUnfairRecursiveLock *lock;
@property (nonatomic, retain) NSMutableDictionary *requestDelegates;

+ (bool)canShareConnection;
+ (id)machService;
+ (id)requestCoordinator;

- (void).cxx_destruct;
- (void)_addDelegate:(id)arg1 withID:(id)arg2;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)contentResponses:(id)arg1 requester:(id)arg2;
- (id)exportedInterface;
- (id)exportedObject;
- (void)extendCollectionClassesForExportedInterface:(id)arg1;
- (void)extendCollectionClassesForRemoteInterface:(id)arg1;
- (void)finishedWithRequestsForID:(id)arg1;
- (id)init;
- (id)lock;
- (void)preWarm:(id)arg1 forRequester:(id)arg2;
- (id)proxyURLForRequester:(id)arg1;
- (void)proxyURLForRequester:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)remoteObjectInterface;
- (id)requestDelegates;
- (void)requestPromotedContentOfTypes:(id)arg1 forRequester:(id)arg2 forContext:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)sendAndRankContent:(id)arg1 forContext:(id)arg2 placement:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setLock:(id)arg1;
- (void)setRequestDelegates:(id)arg1;

@end
