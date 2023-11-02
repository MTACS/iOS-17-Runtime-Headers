
@protocol CKSyncEngineAsyncDelegate <NSObject>

@required

- (void)syncEngine:(void *)arg1 handleEvent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: CKSyncEngine *, CKSyncEngineEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)syncEngine:(void *)arg1 nextFetchChangesOptionsForContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: CKSyncEngine *, CKSyncEngineFetchChangesContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKSyncEngineFetchChangesOptions *, void*
- (void)syncEngine:(void *)arg1 nextRecordZoneChangeBatchForContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: CKSyncEngine *, CKSyncEngineSendChangesContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKSyncEngineRecordZoneChangeBatch *, void*
- (void)syncEngine:(void *)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(void *)arg2 recordIDs:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: CKSyncEngine *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
