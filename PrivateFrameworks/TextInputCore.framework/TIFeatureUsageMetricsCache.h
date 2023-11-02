
@interface TIFeatureUsageMetricsCache : NSObject {
    NSMutableDictionary * _cachedMetrics;
    NSDictionary * _defaultMetrics;
    NSString * _inputMode;
    TIMetricDescriptorRegistry * _metricDescriptorRegistry;
    NSDate * _queryEndDate;
    bool  _sufficientData;
    NSDate * _testingTimestamp;
}

- (void).cxx_destruct;
- (id)defaultMetricsFromContext:(id)arg1;
- (id)featureUsageMetricFromName:(id)arg1 forContext:(id)arg2;
- (id)initWithInputMode:(id)arg1 metricDescriptorRegistry:(id)arg2;
- (void)loadMetricsFromUserModelDataStore:(id)arg1 withContext:(id)arg2;
- (id)metricsFromUserModel:(id)arg1 withContext:(id)arg2;
- (void)setTestingTimestamp:(id)arg1;
- (id)startOfDay;

@end
