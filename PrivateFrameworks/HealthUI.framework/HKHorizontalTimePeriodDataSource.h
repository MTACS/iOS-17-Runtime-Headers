
@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource {
    HKSampleType * _sampleType;
    id /* block */  _userInfoCreationBlock;
    NSArray * _valueOrder;
}

@property (nonatomic, retain) HKSampleType *sampleType;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;
@property (nonatomic, retain) NSArray *valueOrder;

- (void).cxx_destruct;
- (id)_chartPointsWithDateIntervalsByValue:(id)arg1 sourceTimeZone:(id)arg2;
- (id)_codableQueryDataWithSamples:(id)arg1;
- (id)_dateIntervalsByValueWithCodableQueryData:(id)arg1;
- (id)_organizeSamplesByValueAndDateInterval:(id)arg1;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (id)sampleType;
- (void)setSampleType:(id)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (void)setValueOrder:(id)arg1;
- (bool)supportsChartQueryDataGeneration;
- (id /* block */)userInfoCreationBlock;
- (id)valueOrder;

@end
