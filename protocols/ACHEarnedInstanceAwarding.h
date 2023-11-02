
@protocol ACHEarnedInstanceAwarding <ACHDataStorePropertyProviding, NSObject>

@required

- (NSSet *)earnedInstancesForHistoricalInterval:(NSDateInterval *)arg1 databaseContext:(HDDatabaseTransactionContext *)arg2;
- (NSSet *)earnedInstancesForHistoricalInterval:(NSDateInterval *)arg1 error:(id*)arg2;
- (NSString *)uniqueName;

@end
