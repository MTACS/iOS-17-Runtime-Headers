
@interface CompletionListVendorForHistoryService : NSObject <CompletionListDelegate, NSXPCListenerDelegate, WBSHistoryCompletionListVendorProtocol> {
    CompletionList * _completionList;
    id /* block */  _completionListItemsCallback;
    NSTimer * _completionListUpdatesDidSettleTimer;
    <CompletionListVendorForHistoryServiceDataSource> * _dataSource;
    WBSHistoryConnectionProxy * _historyProxy;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initializeProviderWithDataSource:(id)arg1;

- (void).cxx_destruct;
- (id)_browserController;
- (void)_completionListDidUpdate:(id)arg1;
- (void)_connect;
- (id)_initWithDataSource:(id)arg1;
- (bool)_shouldUseNetworkedSearchSuggestions;
- (double)_timeIntervalForUpdatesToSettle;
- (void)completionList:(id)arg1 didFetchFavicon:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)completionList:(id)arg1 didRemoveItem:(id)arg2 wasLastInSection:(bool)arg3 atIndexPath:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)completionList:(id)arg1 topHitDidBecomeReadyForString:(id)arg2;
- (void)completionListDidRestoreCachedCompletions:(id)arg1;
- (void)completionListDidUpdate:(id)arg1 forQuery:(id)arg2;
- (void)getCompletionListItemsForQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
