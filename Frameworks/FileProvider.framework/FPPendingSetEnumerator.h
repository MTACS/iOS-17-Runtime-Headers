
@interface FPPendingSetEnumerator : NSObject <NSFileProviderPendingSetEnumerator> {
    NSFileProviderDomainVersion * _domainVersion;
    NSFileProviderManager * _manager;
    bool  _maximumSizeReached;
    double  _refreshInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileProviderDomainVersion *domainVersion;
@property (readonly) unsigned long long hash;
@property (getter=isMaximumSizeReached, nonatomic, readonly) bool maximumSizeReached;
@property (nonatomic, readonly) double refreshInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (id)domainVersion;
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)initWithManager:(id)arg1;
- (void)invalidate;
- (bool)isMaximumSizeReached;
- (double)refreshInterval;

@end
