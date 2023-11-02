
@interface FHInsightsSpendingTrends : NSObject {
    FHDatabaseEntity * _insightsDestinationEntity;
    NSObject<OS_dispatch_queue> * _insightsProcessingQueue;
    FHDatabaseEntity * _transactionEntity;
}

@property (nonatomic, copy) FHDatabaseEntity *insightsDestinationEntity;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *insightsProcessingQueue;
@property (nonatomic, copy) FHDatabaseEntity *transactionEntity;

+ (id)_defaultQueue;

- (void).cxx_destruct;
- (void)_computeAndStoreAnomaly:(id)arg1 indexedAmountSums:(id)arg2 scoresIndexedByMerchantCategory:(id)arg3 merchantCategory:(long long)arg4 trendWindow:(long long)arg5 leftOfCurve:(bool)arg6;
- (void)_computeAndStoreTrend:(id)arg1 indexedAmountSums:(id)arg2 merchantCategory:(long long)arg3 intervalLengthFromLastInstance:(unsigned long long)arg4 trendWindow:(long long)arg5;
- (id)_computeKendallCoefficient:(unsigned long long)arg1 indexedAmountSums:(id)arg2;
- (void)_computeTrendsForAllMerchantCategories:(id)arg1 weeklyNegativeScores:(id)arg2 monthlyPositiveScores:(id)arg3 monthlyNegativeScores:(id)arg4 merchantCategory:(long long)arg5 useCategoryBoundsForTimeSeries:(bool)arg6;
- (id)_orderedTimeStampAndAmountPair:(id)arg1;
- (void)computeAllAnomaliesAndTrends:(id)arg1 weeklyNegativeScores:(id)arg2 monthlyPositiveScores:(id)arg3 monthlyNegativeScores:(id)arg4 useCategoryBoundsForTimeSeries:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)insightsDestinationEntity;
- (id)insightsProcessingQueue;
- (void)setInsightsDestinationEntity:(id)arg1;
- (void)setTransactionEntity:(id)arg1;
- (id)transactionEntity;

@end
