
@interface HKStateOfMindChartDataSource : HKHealthQueryChartCacheDataSource {
    void debugIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  gregorianCalendar;
    void overlayPredicate;
}

- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 overlayPredicate:(id)arg3;
- (id /* block */)mappingFunctionForContext:(id)arg1;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (bool)supportsChartQueryDataGeneration;

@end
