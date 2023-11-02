
@interface FPXEnumerator : NSObject <FPXEnumerator> {
    FPXDomainContext * _domainContext;
    bool  _invalidated;
    bool  _isWorkingSetEnum;
    NSObject<OS_os_log> * _log;
    NSFileProviderRequest * _nsFileProviderRequest;
    FPItemID * _observedItemID;
    <FPXEnumeratorObserver> * _observer;
    NSObject<OS_dispatch_queue> * _queue;
    <NSFileProviderEnumerator> * _vendorEnumerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) FPItemID *observedItemID;
@property (readonly) <FPXEnumeratorObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)alternateContentsWereUpdatedAtURL:(id)arg1 forItem:(id)arg2;
- (void)currentSyncAnchorWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateChangesFromToken:(id)arg1 suggestedBatchSize:(long long)arg2 reply:(id /* block */)arg3;
- (void)enumerateItemsFromPage:(id)arg1 suggestedPageSize:(long long)arg2 reply:(id /* block */)arg3;
- (void)enumerateItemsFromPage:(id)arg1 suggestedPageSize:(long long)arg2 upTo:(long long)arg3 reply:(id /* block */)arg4;
- (void)forceAddFileURLsForItems:(id)arg1;
- (void)forceItemUpdate:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 vendorEnumerator:(id)arg3 nsFileProviderRequest:(id)arg4 observer:(id)arg5 isWorkingSetEnum:(bool)arg6 queue:(id)arg7;
- (void)invalidate;
- (void)invalidateVendorEnumeration;
- (void)keepAliveConnectionForRegisteredObserver:(id /* block */)arg1;
- (id)observedItemID;
- (id)observer;
- (id)vendorEnumerator;

@end
