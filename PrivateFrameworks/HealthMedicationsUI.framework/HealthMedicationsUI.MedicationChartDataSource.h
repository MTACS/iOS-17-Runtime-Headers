
@interface HealthMedicationsUI.MedicationChartDataSource : HKHealthQueryChartCacheDataSource {
    void decoder;
    void encoder;
    void medication;
    void sortDescriptors;
}

- (void).cxx_destruct;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id /* block */)generateSharableQueryDataForRequest:(id)arg1 healthStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)queriesForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryDescription;
- (bool)supportsChartQueryDataGeneration;

@end
