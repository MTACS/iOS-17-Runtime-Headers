
@interface WBSHistoryConnection : NSObject <WBSHistoryConnectionProtocol> {
    WBSCloudHistory * _cloudHistory;
    WBSCloudHistoryConfiguration * _cloudHistoryConfiguration;
    NSXPCConnection * _completionListProvider;
    NSTimer * _delayTimer;
    WBSHistoryService * _historyService;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

- (void).cxx_destruct;
- (void)beginHistoryAccessSession:(id /* block */)arg1;
- (void)beginURLCompletionSession:(id /* block */)arg1;
- (void)connectWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)ensureConnected:(id /* block */)arg1;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)getCompletionListItemsForQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getServiceInfo:(id /* block */)arg1;
- (id)initWithHistoryService:(id)arg1;
- (void)initializeCloudHistoryWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)listDatabaseURLsWithCompletionHandler:(id /* block */)arg1;
- (void)queryMemoryFootprint:(id /* block */)arg1;
- (void)releaseCloudHistory:(id /* block */)arg1;
- (void)setCompletionListVendorEndpoint:(id)arg1 completionHandler:(id /* block */)arg2;

@end
