
@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionProxyQueue;
    WBSHistoryService * _inProcessFallbackService;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionProxyQueue;

- (void).cxx_destruct;
- (id)_createConnection;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)arg1;
- (void)_setupConnectionWithInProcessFallback:(bool)arg1;
- (void)beginHistoryAccessSession:(id /* block */)arg1;
- (void)beginURLCompletionSession:(id /* block */)arg1;
- (void)connectWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)connectionProxyQueue;
- (void)dealloc;
- (void)ensureConnected:(id /* block */)arg1;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)getCompletionListItemsForQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getServiceInfo:(id /* block */)arg1;
- (id)init;
- (void)initializeCloudHistoryWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidate;
- (void)killService;
- (void)listDatabaseURLsWithCompletionHandler:(id /* block */)arg1;
- (void)queryMemoryFootprint:(id /* block */)arg1;
- (id)queryMemoryFootprintWithError:(id*)arg1;
- (void)releaseCloudHistory:(id /* block */)arg1;
- (void)setCompletionListVendorEndpoint:(id)arg1 completionHandler:(id /* block */)arg2;

@end
