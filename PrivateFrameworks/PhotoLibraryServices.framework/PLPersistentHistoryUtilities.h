
@interface PLPersistentHistoryUtilities : NSObject

+ (id)_executePersistentHistoryChangeRequest:(id)arg1 withContext:(id)arg2;
+ (id)archivedDataWithToken:(id)arg1;
+ (bool)deleteHistoryBeforeDate:(id)arg1 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)arg2 withContext:(id)arg3 error:(id*)arg4;
+ (bool)deleteHistoryBeforeDate:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
+ (bool)deleteHistoryBeforeToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
+ (long long)fetchApproximateHistoryRecordCountInLibrary:(id)arg1 error:(id*)arg2;
+ (id)fetchTransactionCountSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
+ (id)fetchTransactionsSinceMarker:(id)arg1 withFetchRequest:(id)arg2 batchSize:(unsigned long long)arg3 context:(id)arg4 error:(id*)arg5;
+ (id)newestTransactionWithContext:(id)arg1;
+ (id)oldestTransactionWithContext:(id)arg1;
+ (id)unarchiveTokenWithData:(id)arg1;

@end
