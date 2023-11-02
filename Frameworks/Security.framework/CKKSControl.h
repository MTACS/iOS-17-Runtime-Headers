
@interface CKKSControl : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_xpc_object> * _endpoint;
    bool  _synchronous;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_xpc_object> *endpoint;
@property bool synchronous;

+ (id)CKKSControlObject:(bool)arg1 error:(id*)arg2;
+ (id)controlObject:(id*)arg1;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (void)deleteSEView:(id)arg1 reply:(id /* block */)arg2;
- (id)endpoint;
- (void)fetchSEViewKeyHierarchy:(id)arg1 forceFetch:(bool)arg2 reply:(id /* block */)arg3;
- (void)fetchSEViewKeyHierarchy:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (void)modifyTLKSharesForSEView:(id)arg1 adding:(id)arg2 deleting:(id)arg3 reply:(id /* block */)arg4;
- (id)objectProxyWithErrorHandler:(id /* block */)arg1;
- (void)pcsMirrorKeysForServices:(id)arg1 reply:(id /* block */)arg2;
- (void)proposeTLKForSEView:(id)arg1 proposedTLK:(id)arg2 wrappedOldTLK:(id)arg3 tlkShares:(id)arg4 reply:(id /* block */)arg5;
- (void)rpcCKMetric:(id)arg1 attributes:(id)arg2 reply:(id /* block */)arg3;
- (void)rpcFastStatus:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcFetchAndProcessChanges:(id)arg1 classA:(bool)arg2 onlyIfNoRecentFetch:(bool)arg3 reply:(id /* block */)arg4;
- (void)rpcFetchAndProcessChanges:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcFetchAndProcessChangesIfNoRecentFetch:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcFetchAndProcessClassAChanges:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcGetCKDeviceIDWithReply:(id /* block */)arg1;
- (void)rpcKnownBadState:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcPerformanceCounters:(id /* block */)arg1;
- (void)rpcPushOutgoingChanges:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcResetCloudKit:(id)arg1 reason:(id)arg2 reply:(id /* block */)arg3;
- (void)rpcResetLocal:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcResync:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcResyncLocal:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcStatus:(id)arg1 fast:(bool)arg2 waitForNonTransientState:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)rpcStatus:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcTLKMissing:(id)arg1 reply:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setSynchronous:(bool)arg1;
- (bool)synchronous;
- (void)toggleHavoc:(id /* block */)arg1;

@end
