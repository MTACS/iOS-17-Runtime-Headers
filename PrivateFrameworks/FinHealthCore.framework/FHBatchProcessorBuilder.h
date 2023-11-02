
@interface FHBatchProcessorBuilder : NSObject {
    bool  _computeMerchantCounts;
    FHDatabaseManager * _databaseManager;
    NSDate * _endDate;
    NSMutableSet * _internalStates;
    unsigned long long  _mostRecentTransactionFromDatabase;
    NSDate * _startDate;
}

@property (nonatomic) bool computeMerchantCounts;
@property (nonatomic, retain) FHDatabaseManager *databaseManager;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, retain) NSMutableSet *internalStates;
@property (nonatomic) unsigned long long mostRecentTransactionFromDatabase;
@property (nonatomic, copy) NSDate *startDate;

- (void).cxx_destruct;
- (void)addInternalState:(unsigned long long)arg1;
- (bool)computeMerchantCounts;
- (id)databaseManager;
- (void)enableMerchantCounts;
- (id)endDate;
- (id)init;
- (id)internalStates;
- (unsigned long long)mostRecentTransactionFromDatabase;
- (void)setComputeMerchantCounts:(bool)arg1;
- (void)setDatabaseManager:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setInternalStates:(id)arg1;
- (void)setMostRecentTransactionFromDatabase:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
