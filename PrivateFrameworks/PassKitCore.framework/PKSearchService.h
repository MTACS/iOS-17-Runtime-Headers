
@interface PKSearchService : NSObject <PKSearchServiceClientExportedInterface> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockResults;
    NSHashTable * _observers;
    PKXPCService * _remoteService;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSMutableDictionary * _results;
}

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)canProvideFullResults;
- (void)cancelQueryWithIdentifier:(id)arg1;
- (id /* block */)errorHandlerForMethod:(SEL)arg1 completion:(id /* block */)arg2;
- (bool)hasSearchableContentForQuery:(id)arg1;
- (void)indexedPassesWithCompletion:(id /* block */)arg1;
- (void)indexedTransactionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)indexedTransactionsWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidateSearchResults;
- (void)regionsWithCompletion:(id /* block */)arg1;
- (void)registerObserver:(id)arg1;
- (void)resetRegionsCoordinatesWithCompletion:(id /* block */)arg1;
- (void)resetRegionsWithCompletion:(id /* block */)arg1;
- (void)searchDidCompleteWithError:(id)arg1 forIdentifier:(id)arg2;
- (void)searchDidReceivePartialResults:(id)arg1 forIdentifier:(id)arg2;
- (void)searchWithQuery:(id)arg1;
- (void)transactionsMissingRegionsWithCompletion:(id /* block */)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateRegionWithIdentifier:(id)arg1 localizedName:(id)arg2 boundingRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3 mapsIdentifier:(unsigned long long)arg4 providerIdentifier:(int)arg5 completion:(id /* block */)arg6;

@end
