
@protocol BCCloudDataSyncManagerDelegate <NSObject>

@required

- (NSString *)entityName;
- (void)signalSyncToCKForSyncManager:(BCCloudDataSyncManager *)arg1;
- (void)syncManager:(void *)arg1 failedRecordIDs:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BCCloudDataSyncManager *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)syncManager:(void *)arg1 removeCloudDataForIDs:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BCCloudDataSyncManager *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)syncManager:(void *)arg1 resolveConflictsForRecords:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BCCloudDataSyncManager *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)syncManager:(void *)arg1 startSyncToCKWithCompletion:(void *)arg2; // needs 2 arg types, found 6: BCCloudDataSyncManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)syncManager:(void *)arg1 updateSyncGenerationFromCloudData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BCCloudDataSyncManager *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@optional

- (void)syncManager:(BCCloudDataSyncManager *)arg1 fetchedAllRecordsInZone:(NSString *)arg2;

@end
