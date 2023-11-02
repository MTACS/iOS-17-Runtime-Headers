
@interface HDStatisticsCollectionCalculatorRelativeDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource> {
    HKRollingBaselineConfiguration * _configuration;
    NSDate * _currentDate;
    HDStatisticsCollectionCalculatorDefaultDataSource * _defaultDataSource;
    HDProfile * _profile;
    id /* block */  _shouldContinueHandler;
}

@property (nonatomic, readonly, copy) HKRollingBaselineConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, copy) id /* block */ shouldContinueHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_queryPrefetchWindowForQuantityTypeIdentifier:(id)arg1;
- (bool)_shouldContinueWithError:(id*)arg1;
- (bool)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id*)arg3 sampleHandler:(id /* block */)arg4 mergeHandler:(id /* block */)arg5;
- (id)configuration;
- (id)initForProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 restrictedSourceEntities:(id)arg4 configuration:(id)arg5 currentDate:(id)arg6;
- (id)maxRowID;
- (id)profile;
- (id)restrictedSourceEntities;
- (void)setRestrictedSourceEntities:(id)arg1;
- (void)setShouldContinueHandler:(id /* block */)arg1;
- (id /* block */)shouldContinueHandler;

@end
