
@interface ICIndexItemsOperation : NSOperation {
    NSMutableDictionary * _contextCache;
    NSArray * _dataSources;
    NSError * _error;
    NSMutableArray * _objectIDURIsToDelete;
    NSMutableArray * _objectIDsToIndex;
    <ICSearchIndex> * _searchableIndex;
    NSMutableArray * _searchableItemsToIndex;
    unsigned long long  _totalSizeOfSearchableItemsToIndex;
}

@property (nonatomic, retain) NSMutableDictionary *contextCache;
@property (nonatomic, copy) NSArray *dataSources;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSMutableArray *objectIDURIsToDelete;
@property (nonatomic, retain) NSMutableArray *objectIDsToIndex;
@property (nonatomic, retain) <ICSearchIndex> *searchableIndex;
@property (nonatomic, retain) NSMutableArray *searchableItemsToIndex;
@property (nonatomic) unsigned long long totalSizeOfSearchableItemsToIndex;

- (void).cxx_destruct;
- (void)_commitObjectIDURIsToDeleteForDataSource:(id)arg1;
- (void)_commitObjectIDsToIndexForDataSource:(id)arg1;
- (bool)_shouldCommitDeletionWithHasItemsToDeleteThenUpdate:(bool)arg1 shouldForceCommit:(bool)arg2;
- (bool)_shouldCommitIndexingWithHasItemsToDeleteThenUpdate:(bool)arg1 shouldForceCommit:(bool)arg2;
- (void)commitIfNecessaryForDataSource:(id)arg1 hasItemsToDeleteThenUpdate:(bool)arg2 forceCommit:(bool)arg3;
- (id)contextCache;
- (id)dataSources;
- (id)error;
- (id)init;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (void)main;
- (id)managedObjectContextForDataSource:(id)arg1;
- (id)objectIDURIsToDelete;
- (id)objectIDsToIndex;
- (void)processItems;
- (id)searchableIndex;
- (id)searchableItemsToIndex;
- (void)setContextCache:(id)arg1;
- (void)setDataSources:(id)arg1;
- (void)setError:(id)arg1;
- (void)setObjectIDURIsToDelete:(id)arg1;
- (void)setObjectIDsToIndex:(id)arg1;
- (void)setSearchableIndex:(id)arg1;
- (void)setSearchableItemsToIndex:(id)arg1;
- (void)setTotalSizeOfSearchableItemsToIndex:(unsigned long long)arg1;
- (unsigned long long)totalSizeOfSearchableItemsToIndex;
- (bool)universalSearchProcessingLibraryEnabled;

@end
