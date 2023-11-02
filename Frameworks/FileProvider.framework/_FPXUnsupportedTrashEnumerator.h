
@interface _FPXUnsupportedTrashEnumerator : NSObject <NSFileProviderEnumerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (void)invalidate;

@end
