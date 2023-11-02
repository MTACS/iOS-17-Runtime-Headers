
@interface HKBloodGlucosePercentInRangeDataSource : HKHealthQueryChartCacheDataSource {
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, retain) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)_dataBlockFromHistogramCollection:(id)arg1 requiredSampleCountForHistogram:(long long)arg2;
- (long long)_requiredSampleCountForHistogramForStatisticsInterval:(id)arg1;
- (id)initWithHealthStore:(id)arg1 unitController:(id)arg2;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (void)setUnitController:(id)arg1;
- (id)unitController;

@end
