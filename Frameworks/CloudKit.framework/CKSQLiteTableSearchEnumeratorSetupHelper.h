
@interface CKSQLiteTableSearchEnumeratorSetupHelper : NSObject <CKSQLiteTableObjectMatchingSetup, CKSQLiteTablePredicateSetup> {
    NSArray * _fetchedProperties;
    NSNumber * _limit;
    NSNumber * _offset;
    NSMutableArray * _orderByProperties;
    NSPredicate * _searchPredicate;
    NSArray * _searchProperties;
}

@property (nonatomic, retain) NSArray *fetchedProperties;
@property (nonatomic, retain) NSNumber *limit;
@property (nonatomic, retain) NSNumber *offset;
@property (nonatomic, retain) NSPredicate *searchPredicate;
@property (nonatomic, retain) NSArray *searchProperties;

- (void).cxx_destruct;
- (id)fetchedProperties;
- (id)limit;
- (id)offset;
- (void)orderAscendingByProperty:(id)arg1;
- (void)orderDescendingByProperty:(id)arg1;
- (id)searchPredicate;
- (id)searchProperties;
- (void)setFetchedProperties:(id)arg1;
- (void)setLimit:(id)arg1;
- (void)setOffset:(id)arg1;
- (void)setSearchPredicate:(id)arg1;
- (void)setSearchProperties:(id)arg1;
- (void)setupStatement:(id)arg1;

@end
