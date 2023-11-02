
@interface HDActivitySummaryBuilder : NSObject {
    HDDatabaseTransactionContext * _databaseTransactionContext;
    long long  _enumeratedSummaryCount;
    _HKFilter * _filter;
    unsigned long long  _limit;
    bool  _orderByDateAscending;
    HDProfile * _profile;
    bool  _shouldIncludePrivateProperties;
    bool  _shouldIncludeStatistics;
}

@property (nonatomic, copy) HDDatabaseTransactionContext *databaseTransactionContext;
@property (nonatomic, readonly) long long enumeratedSummaryCount;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) bool orderByDateAscending;
@property (nonatomic) bool shouldIncludePrivateProperties;
@property (nonatomic) bool shouldIncludeStatistics;

- (void).cxx_destruct;
- (void)activitySummariesWithPredicate:(id)arg1 handler:(id /* block */)arg2;
- (void)batchedActivitySummariesWithPredicate:(id)arg1 maxBatchSize:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)databaseTransactionContext;
- (bool)enumerateActivitySummariesWithPredicate:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (long long)enumeratedSummaryCount;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 filter:(id)arg2;
- (unsigned long long)limit;
- (bool)orderByDateAscending;
- (void)setDatabaseTransactionContext:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setOrderByDateAscending:(bool)arg1;
- (void)setShouldIncludePrivateProperties:(bool)arg1;
- (void)setShouldIncludeStatistics:(bool)arg1;
- (bool)shouldIncludePrivateProperties;
- (bool)shouldIncludeStatistics;

@end
