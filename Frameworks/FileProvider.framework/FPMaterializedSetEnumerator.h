
@interface FPMaterializedSetEnumerator : NSObject <NSFileProviderEnumerator> {
    NSFileProviderManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)initWithManager:(id)arg1;
- (void)invalidate;

@end
