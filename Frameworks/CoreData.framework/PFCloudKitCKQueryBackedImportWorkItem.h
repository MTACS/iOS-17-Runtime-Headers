
@interface PFCloudKitCKQueryBackedImportWorkItem : PFCloudKitImportRecordsWorkItem {
    NSDate * _maxModificationDate;
    CKQueryCursor * _queryCursor;
    NSString * _recordType;
    CKRecordZoneID * _zoneIDToQuery;
}

- (void)addUpdatedRecord:(id)arg1;
- (bool)applyAccumulatedChangesToStore:(id)arg1 inManagedObjectContext:(id)arg2 withStoreMonitor:(id)arg3 madeChanges:(bool*)arg4 error:(id*)arg5;
- (bool)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)description;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(id /* block */)arg2;
- (id)initForRecordType:(id)arg1 withOptions:(id)arg2 request:(id)arg3;
- (bool)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id*)arg3;

@end
