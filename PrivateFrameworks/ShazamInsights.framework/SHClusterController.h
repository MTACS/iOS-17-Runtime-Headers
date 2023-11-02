
@interface SHClusterController : NSObject {
    SHClusterSQLiteDataStore * _dataStore;
    SHClusterStatementRunner * _query;
}

@property (nonatomic, readonly) SHClusterSQLiteDataStore *dataStore;
@property (nonatomic, readonly) SHClusterStatementRunner *query;

+ (id)artistClusterDefaultLocationURL;
+ (id)databaseURLForName:(id)arg1;
+ (id)trackClusterDefaultLocationURL;

- (void).cxx_destruct;
- (id)affinityGroupsAtCohesionLevel:(long long)arg1 forQuery:(id)arg2 queryCollection:(id)arg3 filteredBy:(id)arg4;
- (void)affinityGroupsFromQueryCollection:(id)arg1 filteredBySeedCollection:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)dataStore;
- (id)filterQueryCollection:(id)arg1 byItemsWithinCluster:(id)arg2;
- (id)initWithDataStore:(id)arg1;
- (void)mediaItemsForPropertyCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)mediaItemsSimilarToValue:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)query;
- (void)resultsFromQueryBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;

@end
