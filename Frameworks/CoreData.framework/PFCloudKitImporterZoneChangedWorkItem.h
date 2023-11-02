
@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImportRecordsWorkItem {
    NSArray * _changedRecordZoneIDs;
    NSMutableDictionary * _fetchedZoneIDToChangeToken;
    NSMutableDictionary * _fetchedZoneIDToMoreComing;
}

- (bool)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)description;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithChangedRecordZoneIDs:(id)arg1 options:(id)arg2 request:(id)arg3;
- (bool)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id*)arg3;

@end
