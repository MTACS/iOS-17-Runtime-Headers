
@interface PFCloudKitImportRecordsWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate> {
    NSMutableArray * _allRecordIDs;
    NSMutableDictionary * _assetPathToSafeSaveURL;
    unsigned long long  _countDeletedRecords;
    unsigned long long  _countUpdatedRecords;
    unsigned long long  _currentOperationBytes;
    NSMutableArray * _encounteredErrors;
    NSMutableArray * _failedRelationships;
    PFCloudKitFetchedAssetBytesMetric * _fetchedAssetBytesMetric;
    PFCloudKitFetchedRecordBytesMetric * _fetchedRecordBytesMetric;
    NSUUID * _importOperationIdentifier;
    NSMutableArray * _incrementalResults;
    NSMutableDictionary * _recordTypeToDeletedRecordID;
    unsigned long long  _totalOperationBytes;
    NSMutableArray * _unknownItemRecordIDs;
    NSMutableArray * _updatedRecords;
    NSMutableDictionary * _updatedShares;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addUpdatedRecord:(id)arg1;
- (bool)applyAccumulatedChangesToStore:(id)arg1 inManagedObjectContext:(id)arg2 withStoreMonitor:(id)arg3 madeChanges:(bool*)arg4 error:(id*)arg5;
- (void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3;
- (id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2;
- (bool)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (id)createMirroringResultForRequest:(id)arg1 storeIdentifier:(id)arg2 success:(bool)arg3 madeChanges:(bool)arg4 error:(id)arg5;
- (void)dealloc;
- (id)description;
- (void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(id /* block */)arg3;
- (id)entityNameToAttributesToUpdate;
- (id)entityNameToRelationshipsToUpdate;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithOptions:(id)arg1 request:(id)arg2;
- (bool)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id*)arg3;

@end
