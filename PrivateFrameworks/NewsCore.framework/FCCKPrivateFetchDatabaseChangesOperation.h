
@interface FCCKPrivateFetchDatabaseChangesOperation : FCCKPrivateDatabaseOperation {
    id /* block */  _fetchDatabaseChangesCompletionBlock;
    FCCKPrivateDatabaseServerChangeToken * _previousServerChangeToken;
    NSArray * _resultChangedZoneIDs;
    NSArray * _resultDeletedZoneIDs;
    bool  _resultMoreComing;
    FCCKPrivateDatabaseServerChangeToken * _resultServerChangeToken;
}

@property (nonatomic, copy) id /* block */ fetchDatabaseChangesCompletionBlock;
@property (nonatomic, copy) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken;
@property (nonatomic, retain) NSArray *resultChangedZoneIDs;
@property (nonatomic, retain) NSArray *resultDeletedZoneIDs;
@property (nonatomic) bool resultMoreComing;
@property (nonatomic, retain) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken;

- (void).cxx_destruct;
- (id /* block */)fetchDatabaseChangesCompletionBlock;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)previousServerChangeToken;
- (id)resultChangedZoneIDs;
- (id)resultDeletedZoneIDs;
- (bool)resultMoreComing;
- (id)resultServerChangeToken;
- (void)setFetchDatabaseChangesCompletionBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultChangedZoneIDs:(id)arg1;
- (void)setResultDeletedZoneIDs:(id)arg1;
- (void)setResultMoreComing:(bool)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (bool)validateOperation;

@end
