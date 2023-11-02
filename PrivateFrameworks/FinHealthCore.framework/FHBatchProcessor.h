
@interface FHBatchProcessor : NSObject <FHFetchAllTransactionsDelegate> {
    bool  _computeMerchantCounts;
    FHDatabaseManager * _databaseManager;
    NSDate * _endDate;
    NSMutableArray * _indexedAmountArray;
    NSMutableArray * _merchantWithTimeStampPairs;
    NSPredicate * _predicates;
    NSMutableArray * _resultArray;
    NSDecimalNumber * _secondsInDay;
    NSDate * _startDate;
}

@property (nonatomic, readonly) FHDatabaseManager *databaseManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *filteredTransaction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *merchantsWithSignificantCount;
@property (readonly) Class superclass;

+ (id)initWithBuilder:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_init:(id)arg1;
- (id)databaseManager;
- (void)fetchAndProcessInBatchMode;
- (id)filteredTransaction;
- (id)merchantsWithSignificantCount;
- (void)processBatch:(id)arg1;

@end
