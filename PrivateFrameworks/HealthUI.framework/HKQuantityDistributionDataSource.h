
@interface HKQuantityDistributionDataSource : HKHealthQueryChartCacheDataSource {
    double  _bucketAnchor;
    double  _bucketSize;
    long long  _contextStyle;
    unsigned long long  _options;
    NSPredicate * _predicate;
    HKQuantityType * _quantityType;
    NSDate * _specificEndDate;
    NSDate * _specificStartDate;
    HKUnitPreferenceController * _unitController;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, readonly) double bucketAnchor;
@property (nonatomic, readonly) double bucketSize;
@property (nonatomic, readonly) long long contextStyle;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) NSDate *specificEndDate;
@property (nonatomic, readonly) NSDate *specificStartDate;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;
@property (nonatomic, readonly) id /* block */ userInfoCreationBlock;

+ (id)bucketSizeForBloodGlucoseWithUnit:(id)arg1;
+ (id)bucketSizeForDisplayType:(id)arg1 preferredUnit:(id)arg2;
+ (id)bucketSizeForQuantityType:(id)arg1 preferredUnit:(id)arg2;

- (void).cxx_destruct;
- (id)_bucketDateForHistogramData:(id)arg1;
- (id)_dataBlockFromHistograms:(id)arg1;
- (id)_quickDate:(id)arg1;
- (double)bucketAnchor;
- (double)bucketSize;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (long long)contextStyle;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithQuantityType:(id)arg1 unitController:(id)arg2 healthStore:(id)arg3 contextStyle:(long long)arg4 predicate:(id)arg5 options:(unsigned long long)arg6 baseDisplayType:(id)arg7 specificStartDate:(id)arg8 specificEndDate:(id)arg9 userInfoCreationBlock:(id /* block */)arg10;
- (unsigned long long)options;
- (id)predicate;
- (id)quantityType;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (id)specificEndDate;
- (id)specificStartDate;
- (bool)supportsChartQueryDataGeneration;
- (id)unitController;
- (id /* block */)userInfoCreationBlock;

@end
