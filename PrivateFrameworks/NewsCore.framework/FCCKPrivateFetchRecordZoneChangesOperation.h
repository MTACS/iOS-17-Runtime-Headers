
@interface FCCKPrivateFetchRecordZoneChangesOperation : FCCKPrivateDatabaseOperation {
    NSArray * _desiredKeys;
    bool  _fetchAllChanges;
    bool  _fetchNewestChangesFirst;
    id /* block */  _fetchRecordZoneChangesCompletionBlock;
    FCCKPrivateDatabaseServerChangeToken * _previousServerChangeToken;
    CKRecordZoneID * _recordZoneID;
    NSArray * _resultChangedRecords;
    NSArray * _resultDeletedRecordIDs;
    bool  _resultMoreComing;
    FCCKPrivateDatabaseServerChangeToken * _resultServerChangeToken;
}

@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic) bool fetchNewestChangesFirst;
@property (nonatomic, copy) id /* block */ fetchRecordZoneChangesCompletionBlock;
@property (nonatomic, copy) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) CKRecordZoneID *recordZoneID;
@property (nonatomic, retain) NSArray *resultChangedRecords;
@property (nonatomic, retain) NSArray *resultDeletedRecordIDs;
@property (nonatomic) bool resultMoreComing;
@property (nonatomic, retain) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken;

- (void).cxx_destruct;
- (id)_configurationForDestination:(long long)arg1;
- (id)desiredKeys;
- (bool)fetchAllChanges;
- (bool)fetchNewestChangesFirst;
- (id /* block */)fetchRecordZoneChangesCompletionBlock;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)previousServerChangeToken;
- (id)recordZoneID;
- (id)resultChangedRecords;
- (id)resultDeletedRecordIDs;
- (bool)resultMoreComing;
- (id)resultServerChangeToken;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchNewestChangesFirst:(bool)arg1;
- (void)setFetchRecordZoneChangesCompletionBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultChangedRecords:(id)arg1;
- (void)setResultDeletedRecordIDs:(id)arg1;
- (void)setResultMoreComing:(bool)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (bool)validateOperation;

@end
