
@interface IDSCKFetchRecordZoneChangesOperation : IDSCKDatabaseOperation {
    bool  _fetchAllChanges;
    id /* block */  _fetchRecordZoneChangesCompletionBlock;
    id /* block */  _recordChangedBlock;
    id /* block */  _recordWithIDWasDeletedBlock;
    id /* block */  _recordZoneChangeTokensUpdatedBlock;
    id /* block */  _recordZoneFetchCompletionBlock;
}

@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchRecordZoneChangesCompletionBlock;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, copy) id /* block */ recordWithIDWasDeletedBlock;
@property (nonatomic, copy) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (nonatomic, copy) id /* block */ recordZoneFetchCompletionBlock;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (bool)fetchAllChanges;
- (id /* block */)fetchRecordZoneChangesCompletionBlock;
- (id /* block */)recordChangedBlock;
- (id /* block */)recordWithIDWasDeletedBlock;
- (id /* block */)recordZoneChangeTokensUpdatedBlock;
- (id /* block */)recordZoneFetchCompletionBlock;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchRecordZoneChangesCompletionBlock:(id /* block */)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setRecordWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneChangeTokensUpdatedBlock:(id /* block */)arg1;
- (void)setRecordZoneFetchCompletionBlock:(id /* block */)arg1;

@end