
@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation <CKFetchArchivedRecordsOperationCallbacks> {
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    NSDictionary * _configurationsByRecordZoneID;
    bool  _fetchAllChanges;
    id /* block */  _fetchArchivedRecordsCompletionBlock;
    NSMutableDictionary * _perItemErrors;
    id /* block */  _recordFetchedBlock;
    id /* block */  _recordZoneChangeTokensUpdatedBlock;
    id /* block */  _recordZoneFetchCompletionBlock;
    NSArray * _recordZoneIDs;
    bool  _shouldFetchAssetContents;
    NSMutableDictionary * _statusByZoneID;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic, readonly) <CKFetchArchivedRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchArchivedRecordsCompletionBlock;
@property (nonatomic, readonly) CKFetchArchivedRecordsOperationInfo *operationInfo;
@property (nonatomic, retain) NSMutableDictionary *perItemErrors;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, copy) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (nonatomic, copy) id /* block */ recordZoneFetchCompletionBlock;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic) bool shouldFetchAssetContents;
@property (nonatomic, retain) NSMutableDictionary *statusByZoneID;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)configurationsByRecordZoneID;
- (bool)fetchAllChanges;
- (id /* block */)fetchArchivedRecordsCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 archivedRecordStatus:(long long)arg3 error:(id)arg4 reply:(id /* block */)arg5;
- (void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;
- (id)perItemErrors;
- (id /* block */)recordFetchedBlock;
- (id)recordZoneArchivesStatusByZoneID;
- (id /* block */)recordZoneChangeTokensUpdatedBlock;
- (id /* block */)recordZoneFetchCompletionBlock;
- (id)recordZoneIDs;
- (id)relevantZoneIDs;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setConfigurationsByRecordZoneID:(id)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchArchivedRecordsCompletionBlock:(id /* block */)arg1;
- (void)setPerItemErrors:(id)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setRecordZoneChangeTokensUpdatedBlock:(id /* block */)arg1;
- (void)setRecordZoneFetchCompletionBlock:(id /* block */)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (void)setStatusByZoneID:(id)arg1;
- (bool)shouldFetchAssetContents;
- (id)statusByZoneID;

@end
