
@interface WFCoreDataDatabaseResult : WFDatabaseResult {
    <WFCoreDataDatabaseResultFetchOperation> * _fetchOperation;
}

@property (nonatomic, retain) <WFCoreDataDatabaseResultFetchOperation> *fetchOperation;

- (void).cxx_destruct;
- (id)description;
- (id)fetchOperation;
- (id)initWithDatabase:(id)arg1 fetchOperation:(id)arg2;
- (id)initWithDatabase:(id)arg1 fetchRequest:(id)arg2;
- (id)initWithDatabase:(id)arg1 fetchRequest:(id)arg2 relationshipKeysAffectingDescriptors:(id)arg3;
- (void)setFetchOperation:(id)arg1;
- (id)unsearchedDescriptorsWithError:(id*)arg1;

@end
