
@interface WBSHistoryService : NSObject <NSXPCListenerDelegate, WBSHistoryServiceDatabaseStore> {
    NSXPCConnection * _completionListProviderConnection;
    WBSHistoryDatabaseAccessBroker * _databaseAccessBroker;
    NSMapTable * _databases;
    NSObject<OS_dispatch_group> * _fileOperationGroup;
    NSObject<OS_dispatch_queue> * _historyServiceQueue;
    NSDate * _initDate;
    NSXPCListener * _listener;
}

@property (nonatomic, readonly) <WBSHistoryCompletionListVendorProtocol> *completionListProvider;
@property (nonatomic, readonly) WBSHistoryDatabaseAccessBroker *databaseAccessBroker;
@property (nonatomic, readonly) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_connectionIsEntitledToUseUserDatabase:(id)arg1;
- (id)_createListener;
- (id)_openOrReuseExistingDatabaseWithOptions:(id)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;
- (id)completionListProvider;
- (void)connectWithOptions:(id)arg1 connection:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)databaseAccessBroker;
- (id)databaseURL;
- (id)init;
- (id)initWithListener:(id)arg1;
- (void)listDatabaseURLsWithCompletionHandler:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openDatabaseWithID:(id)arg1 createIfNeeded:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)resume;
- (void)setCompletionListVendorEndpoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)shutdown;

@end
